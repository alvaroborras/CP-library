---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: Graphs/strongly-connected-components.hpp
    title: Graphs/strongly-connected-components.hpp
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
    \ = vector<Edge<T>>;\n"
  code: "#pragma once\n\ntemplate<typename T = int>\nstruct Edge {\n  int from, to;\n\
    \  T cost;\n  int idx;\n\n  Edge() = default;\n\n  Edge(int from, int to, T cost\
    \ = 1, int idx = -1) : from(from), to(to), cost(cost), idx(idx) {}\n\n  operator\
    \ int() const { return to; }\n};\n\ntemplate<typename T = int>\nstruct Graph {\n\
    \  vector<vector<Edge<T>>> g;\n  int es;\n\n  Graph() = default;\n\n  explicit\
    \ Graph(int n) : g(n), es(0) {}\n\n  size_t size() const {\n    return g.size();\n\
    \  }\n\n  void add_directed_edge(int from, int to, T cost = 1) {\n    g[from].emplace_back(from,\
    \ to, cost, es++);\n  }\n\n  void add_edge(int from, int to, T cost = 1) {\n \
    \   g[from].emplace_back(from, to, cost, es);\n    g[to].emplace_back(to, from,\
    \ cost, es++);\n  }\n\n  void read(int M, int padding = -1, bool weighted = false,\
    \ bool directed = false) {\n    for (int i = 0; i < M; i++) {\n      int a, b;\n\
    \      cin >> a >> b;\n      a += padding;\n      b += padding;\n      T c = T(1);\n\
    \      if (weighted) cin >> c;\n      if (directed) add_directed_edge(a, b, c);\n\
    \      else add_edge(a, b, c);\n    }\n  }\n\n  inline vector<Edge<T>>& operator[](const\
    \ int& k) {\n    return g[k];\n  }\n\n  inline const vector<Edge<T>>& operator[](const\
    \ int& k) const {\n    return g[k];\n  }\n};\n\ntemplate<typename T = int>\nusing\
    \ Edges = vector<Edge<T>>;"
  dependsOn: []
  isVerificationFile: false
  path: Graphs/graph-template.hpp
  requiredBy:
  - Graphs/strongly-connected-components.hpp
  timestamp: '2022-05-18 16:08:10+02:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Verify/LC_strongly_connected_components.test.cpp
documentation_of: Graphs/graph-template.hpp
layout: document
redirect_from:
- /library/Graphs/graph-template.hpp
- /library/Graphs/graph-template.hpp.html
title: Graphs/graph-template.hpp
---
