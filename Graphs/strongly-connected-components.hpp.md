---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Graphs/graph-template.hpp
    title: Graphs/graph-template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Verify/LC_strongly_connected_components.test.cpp
    title: Verify/LC_strongly_connected_components.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"Graphs/graph-template.hpp\"\n\ntemplate<typename T = int>\n\
    struct Edge {\n  int from, to;\n  T cost;\n  int idx;\n\n  Edge() = default;\n\
    \n  Edge(int from, int to, T cost = 1, int idx = -1) : from(from), to(to), cost(cost),\
    \ idx(idx) {}\n\n  operator int() const { return to; }\n};\n\ntemplate<typename\
    \ T = int>\nstruct Graph {\n  vector<vector<Edge<T>>> g;\n  int es;\n\n  Graph()\
    \ = default;\n\n  explicit Graph(int n) : g(n), es(0) {}\n\n  size_t size() const\
    \ {\n    return g.size();\n  }\n\n  void add_directed_edge(int from, int to, T\
    \ cost = 1) {\n    g[from].emplace_back(from, to, cost, es++);\n  }\n\n  void\
    \ add_edge(int from, int to, T cost = 1) {\n    g[from].emplace_back(from, to,\
    \ cost, es);\n    g[to].emplace_back(to, from, cost, es++);\n  }\n\n  void read(int\
    \ M, int padding = -1, bool weighted = false, bool directed = false) {\n    for\
    \ (int i = 0; i < M; i++) {\n      int a, b;\n      cin >> a >> b;\n      a +=\
    \ padding;\n      b += padding;\n      T c = T(1);\n      if (weighted) cin >>\
    \ c;\n      if (directed) add_directed_edge(a, b, c);\n      else add_edge(a,\
    \ b, c);\n    }\n  }\n\n  inline vector<Edge<T>>& operator[](const int& k) {\n\
    \    return g[k];\n  }\n\n  inline const vector<Edge<T>>& operator[](const int&\
    \ k) const {\n    return g[k];\n  }\n};\n\ntemplate<typename T = int>\nusing Edges\
    \ = vector<Edge<T>>;\n#line 2 \"Graphs/strongly-connected-components.hpp\"\ntemplate<typename\
    \ T = int>\nstruct StronglyConnectedComponents : Graph<T> {\npublic:\n  using\
    \ Graph<T>::Graph;\n  using Graph<T>::g;\n  vector<int> comp;\n  Graph<T> dag;\n\
    \  vector<vector<int>> group;\n\n  void build() {\n    rg = Graph<T>(g.size());\n\
    \    for (size_t i = 0; i < g.size(); i++) {\n      for (auto& e : g[i]) {\n \
    \       rg.add_directed_edge(e.to, e.from, e.cost);\n      }\n    }\n    comp.assign(g.size(),\
    \ -1);\n    used.assign(g.size(), 0);\n    for (size_t i = 0; i < g.size(); i++)\
    \ dfs(i);\n    reverse(begin(order), end(order));\n    int ptr = 0;\n    for (int\
    \ i:order) if (comp[i] == -1) rdfs(i, ptr), ptr++;\n    dag = Graph< T >(ptr);\n\
    \    for (size_t i = 0; i < g.size(); i++) {\n      for (auto& e : g[i]) {\n \
    \       int x = comp[e.from], y = comp[e.to];\n        if (x == y) continue;\n\
    \        dag.add_directed_edge(x, y, e.cost);\n      }\n    }\n    group.resize(ptr);\n\
    \    for (size_t i = 0; i < g.size(); i++) {\n      group[comp[i]].emplace_back(i);\n\
    \    }\n  }\n\n  int operator[](int k) const {\n    return comp[k];\n  }\n\nprivate:\n\
    \  vector< int > order, used;\n  Graph<T> rg;\n\n  void dfs(int idx) {\n    if\
    \ (exchange(used[idx], true)) return;\n    for (auto& to : g[idx]) dfs(to);\n\
    \    order.push_back(idx);\n  }\n\n  void rdfs(int idx, int cnt) {\n    if (comp[idx]\
    \ != -1) return;\n    comp[idx] = cnt;\n    for (auto& to : rg.g[idx]) rdfs(to,\
    \ cnt);\n  }\n};\n"
  code: "#include \"graph-template.hpp\"\ntemplate<typename T = int>\nstruct StronglyConnectedComponents\
    \ : Graph<T> {\npublic:\n  using Graph<T>::Graph;\n  using Graph<T>::g;\n  vector<int>\
    \ comp;\n  Graph<T> dag;\n  vector<vector<int>> group;\n\n  void build() {\n \
    \   rg = Graph<T>(g.size());\n    for (size_t i = 0; i < g.size(); i++) {\n  \
    \    for (auto& e : g[i]) {\n        rg.add_directed_edge(e.to, e.from, e.cost);\n\
    \      }\n    }\n    comp.assign(g.size(), -1);\n    used.assign(g.size(), 0);\n\
    \    for (size_t i = 0; i < g.size(); i++) dfs(i);\n    reverse(begin(order),\
    \ end(order));\n    int ptr = 0;\n    for (int i:order) if (comp[i] == -1) rdfs(i,\
    \ ptr), ptr++;\n    dag = Graph< T >(ptr);\n    for (size_t i = 0; i < g.size();\
    \ i++) {\n      for (auto& e : g[i]) {\n        int x = comp[e.from], y = comp[e.to];\n\
    \        if (x == y) continue;\n        dag.add_directed_edge(x, y, e.cost);\n\
    \      }\n    }\n    group.resize(ptr);\n    for (size_t i = 0; i < g.size();\
    \ i++) {\n      group[comp[i]].emplace_back(i);\n    }\n  }\n\n  int operator[](int\
    \ k) const {\n    return comp[k];\n  }\n\nprivate:\n  vector< int > order, used;\n\
    \  Graph<T> rg;\n\n  void dfs(int idx) {\n    if (exchange(used[idx], true)) return;\n\
    \    for (auto& to : g[idx]) dfs(to);\n    order.push_back(idx);\n  }\n\n  void\
    \ rdfs(int idx, int cnt) {\n    if (comp[idx] != -1) return;\n    comp[idx] =\
    \ cnt;\n    for (auto& to : rg.g[idx]) rdfs(to, cnt);\n  }\n};"
  dependsOn:
  - Graphs/graph-template.hpp
  isVerificationFile: false
  path: Graphs/strongly-connected-components.hpp
  requiredBy: []
  timestamp: '2022-05-18 16:08:10+02:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Verify/LC_strongly_connected_components.test.cpp
documentation_of: Graphs/strongly-connected-components.hpp
layout: document
redirect_from:
- /library/Graphs/strongly-connected-components.hpp
- /library/Graphs/strongly-connected-components.hpp.html
title: Graphs/strongly-connected-components.hpp
---
