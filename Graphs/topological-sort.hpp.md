---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Graphs/topological-sort.hpp\"\ntemplate<typename T>\nvector<int>\
    \ topological_sort(const Graph< T >  g) {\n  const int N = (int).size();\n  vector<int>\
    \ deg(N);\n  for (int i = 0; i < N; i++) {\n    for (aut& to : g[i]) ++deg[to];\n\
    \  }\n  stack<int> st;\n  for (int i = 0; i < N; i++) {\n    if (deg[i] == 0)\
    \ st.emplace(i);\n  }\n  vector<int> ord;\n  while (!st.empty()) {\n    auto p\
    \ = st.top();\n    st.pop();\n    ord.emplace_back(p);\n    for (aut& to : g[p])\
    \ {\n      if (--deg[to] == 0) st.emplace(to);\n    }\n  }\n  return ord;\n}\n"
  code: "template<typename T>\nvector<int> topological_sort(const Graph< T >  g) {\n\
    \  const int N = (int).size();\n  vector<int> deg(N);\n  for (int i = 0; i < N;\
    \ i++) {\n    for (aut& to : g[i]) ++deg[to];\n  }\n  stack<int> st;\n  for (int\
    \ i = 0; i < N; i++) {\n    if (deg[i] == 0) st.emplace(i);\n  }\n  vector<int>\
    \ ord;\n  while (!st.empty()) {\n    auto p = st.top();\n    st.pop();\n    ord.emplace_back(p);\n\
    \    for (aut& to : g[p]) {\n      if (--deg[to] == 0) st.emplace(to);\n    }\n\
    \  }\n  return ord;\n}"
  dependsOn: []
  isVerificationFile: false
  path: Graphs/topological-sort.hpp
  requiredBy: []
  timestamp: '2022-05-18 16:08:10+02:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Graphs/topological-sort.hpp
layout: document
redirect_from:
- /library/Graphs/topological-sort.hpp
- /library/Graphs/topological-sort.hpp.html
title: Graphs/topological-sort.hpp
---
