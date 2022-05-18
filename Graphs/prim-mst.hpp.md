---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Graphs/graph-template.hpp
    title: Graphs/graph-template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Verify/AIZU_MST.test.cpp
    title: Verify/AIZU_MST.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"Graphs/prim-mst.hpp\"\n\n#line 2 \"Graphs/graph-template.hpp\"\
    \n\ntemplate<typename T = int>\nstruct Edge {\n  int from, to;\n  T cost;\n  int\
    \ idx;\n\n  Edge() = default;\n\n  Edge(int from, int to, T cost = 1, int idx\
    \ = -1) : from(from), to(to), cost(cost), idx(idx) {}\n\n  operator int() const\
    \ { return to; }\n};\n\ntemplate<typename T = int>\nstruct Graph {\n  vector<vector<Edge<T>>>\
    \ g;\n  int es;\n\n  Graph() = default;\n\n  explicit Graph(int n) : g(n), es(0)\
    \ {}\n\n  size_t size() const {\n    return g.size();\n  }\n\n  void add_directed_edge(int\
    \ from, int to, T cost = 1) {\n    g[from].emplace_back(from, to, cost, es++);\n\
    \  }\n\n  void add_edge(int from, int to, T cost = 1) {\n    g[from].emplace_back(from,\
    \ to, cost, es);\n    g[to].emplace_back(to, from, cost, es++);\n  }\n\n  void\
    \ read(int M, int padding = -1, bool weighted = false, bool directed = false)\
    \ {\n    for (int i = 0; i < M; i++) {\n      int a, b;\n      cin >> a >> b;\n\
    \      a += padding;\n      b += padding;\n      T c = T(1);\n      if (weighted)\
    \ cin >> c;\n      if (directed) add_directed_edge(a, b, c);\n      else add_edge(a,\
    \ b, c);\n    }\n  }\n\n  inline vector<Edge<T>>& operator[](const int& k) {\n\
    \    return g[k];\n  }\n\n  inline const vector<Edge<T>>& operator[](const int&\
    \ k) const {\n    return g[k];\n  }\n};\n\ntemplate<typename T = int>\nusing Edges\
    \ = vector<Edge<T>>;\n#line 4 \"Graphs/prim-mst.hpp\"\n\ntemplate< typename T\
    \ >\nstruct MinimumSpanningTree {\n  T cost;\n  Edges< T > edges;\n};\n\ntemplate<\
    \ typename T >\nMinimumSpanningTree< T > prim(const Graph< T >& g) {\n  T total\
    \ = T();\n  vector< int > used(g.size());\n  vector< Edge< T >* > dist(g.size());\n\
    \  using pi = pair< T, int >;\n  priority_queue< pi, vector< pi >, greater<> >\
    \ que;\n  que.emplace(T(), 0);\n  Edges< T > edges;\n  while (!que.empty()) {\n\
    \    auto p = que.top();\n    que.pop();\n    if (used[p.second]) continue;\n\
    \    used[p.second] = true;\n    total += p.first;\n    if (dist[p.second]) edges.emplace_back(*dist[p.second]);\n\
    \    for (auto& e : g[p.second]) {\n      if (used[e.to] || (dist[e.to] && dist[e.to]->cost\
    \ <= e.cost)) continue;\n      que.emplace(e.cost, e.to);\n    }\n  }\n  return\
    \ { total, edges };\n}\n"
  code: "#pragma once\n\n#include \"graph-template.hpp\"\n\ntemplate< typename T >\n\
    struct MinimumSpanningTree {\n  T cost;\n  Edges< T > edges;\n};\n\ntemplate<\
    \ typename T >\nMinimumSpanningTree< T > prim(const Graph< T >& g) {\n  T total\
    \ = T();\n  vector< int > used(g.size());\n  vector< Edge< T >* > dist(g.size());\n\
    \  using pi = pair< T, int >;\n  priority_queue< pi, vector< pi >, greater<> >\
    \ que;\n  que.emplace(T(), 0);\n  Edges< T > edges;\n  while (!que.empty()) {\n\
    \    auto p = que.top();\n    que.pop();\n    if (used[p.second]) continue;\n\
    \    used[p.second] = true;\n    total += p.first;\n    if (dist[p.second]) edges.emplace_back(*dist[p.second]);\n\
    \    for (auto& e : g[p.second]) {\n      if (used[e.to] || (dist[e.to] && dist[e.to]->cost\
    \ <= e.cost)) continue;\n      que.emplace(e.cost, e.to);\n    }\n  }\n  return\
    \ { total, edges };\n}"
  dependsOn:
  - Graphs/graph-template.hpp
  isVerificationFile: false
  path: Graphs/prim-mst.hpp
  requiredBy: []
  timestamp: '2022-05-18 16:13:31+02:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Verify/AIZU_MST.test.cpp
documentation_of: Graphs/prim-mst.hpp
layout: document
redirect_from:
- /library/Graphs/prim-mst.hpp
- /library/Graphs/prim-mst.hpp.html
title: Graphs/prim-mst.hpp
---
