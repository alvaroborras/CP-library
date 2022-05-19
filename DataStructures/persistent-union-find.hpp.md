---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: Verify/LC_persistent_union_find.test.cpp
    title: Verify/LC_persistent_union_find.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 1 \"DataStructures/persistent-union-find.hpp\"\n\nstruct PersistentUnionFind\
    \ {\n  PersistentArray<int, 3> data;\n\n  PersistentUnionFind() {}\n\n  PersistentUnionFind(int\
    \ sz) {\n    data.build(vector<int>(sz, -1));\n  }\n\n  int find(int k) {\n  \
    \  int p = data.get(k);\n    return p >= 0?find(p):k;\n  }\n\n  int size(int k)\
    \ {\n    return (-data.get(find(k)));\n  }\n\n  bool unite(int x, int y) {\n \
    \   x = find(x);\n    y = find(y);\n    if (x == y) return false;\n    auto u\
    \ = data.get(x);\n    auto v = data.get(y);\n\n    if (u < v) {\n      auto a\
    \ = data.mutable_get(x);\n      *a += v;\n      auto b = data.mutable_get(y);\n\
    \      *b = x;\n    }\n    else {\n      auto a = data.mutable_get(y);\n     \
    \ *a += u;\n      auto b = data.mutable_get(x);\n      *b = y;\n    }\n    return\
    \ true;\n  }\n};\n"
  code: "\nstruct PersistentUnionFind {\n  PersistentArray<int, 3> data;\n\n  PersistentUnionFind()\
    \ {}\n\n  PersistentUnionFind(int sz) {\n    data.build(vector<int>(sz, -1));\n\
    \  }\n\n  int find(int k) {\n    int p = data.get(k);\n    return p >= 0?find(p):k;\n\
    \  }\n\n  int size(int k) {\n    return (-data.get(find(k)));\n  }\n\n  bool unite(int\
    \ x, int y) {\n    x = find(x);\n    y = find(y);\n    if (x == y) return false;\n\
    \    auto u = data.get(x);\n    auto v = data.get(y);\n\n    if (u < v) {\n  \
    \    auto a = data.mutable_get(x);\n      *a += v;\n      auto b = data.mutable_get(y);\n\
    \      *b = x;\n    }\n    else {\n      auto a = data.mutable_get(y);\n     \
    \ *a += u;\n      auto b = data.mutable_get(x);\n      *b = y;\n    }\n    return\
    \ true;\n  }\n};"
  dependsOn: []
  isVerificationFile: false
  path: DataStructures/persistent-union-find.hpp
  requiredBy: []
  timestamp: '2022-05-17 17:12:10+02:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - Verify/LC_persistent_union_find.test.cpp
documentation_of: DataStructures/persistent-union-find.hpp
layout: document
redirect_from:
- /library/DataStructures/persistent-union-find.hpp
- /library/DataStructures/persistent-union-find.hpp.html
title: DataStructures/persistent-union-find.hpp
---
