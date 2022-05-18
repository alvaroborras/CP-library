---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Verify/AIZU_range_sum_query.test.cpp
    title: Verify/AIZU_range_sum_query.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"DataStructures/binary-indexed-tree.hpp\"\ntemplate<typename\
    \ T>\nstruct BinaryIndexedTree {\nprivate:\n  int n;\n  vector<T> data;\n\npublic:\n\
    \  BinaryIndexedTree() = default;\n\n  explicit BinaryIndexedTree(int n) : n(n)\
    \ {\n    data.assign(n + 1, 0);\n  }\n\n  explicit BinaryIndexedTree(const vector<T>&\
    \ v) :\n    BinaryIndexedTree((int)v.size()) {\n    build(v);\n  }\n\n  void build(const\
    \ vector<T>& v) {\n    assert(n == (int)v.size());\n    for (int i = 1; i <= n;\
    \ i++) data[i] = v[i - 1];\n    for (int i = 1; i <= n; i++) {\n      int j =\
    \ i + (i & -i);\n      if (j <= n) data[j] += data[i];\n    }\n  }\n\n  void apply(int\
    \ k, const T& x) {\n    for (++k; k <= n; k += k & -k) data[k] += x;\n  }\n\n\
    \  T prod(int r) const {\n    T ret = T();\n    for (; r > 0; r -= r & -r) ret\
    \ += data[r];\n    return ret;\n  }\n\n  T prod(int l, int r) const {\n    return\
    \ prod(r) - prod(l);\n  }\n\n  int lower_bound(T x) const {\n    int i = 0;\n\
    \    for (int k = 1 << (__lg(n) + 1); k > 0; k >>= 1) {\n      if (i + k <= n\
    \ && data[i + k] < x) {\n        x -= data[i + k];\n        i += k;\n      }\n\
    \    }\n    return i;\n  }\n\n  int upper_bound(T x) const {\n    int i = 0;\n\
    \    for (int k = 1 << (__lg(n) + 1); k > 0; k >>= 1) {\n      if (i + k <= n\
    \ && data[i + k] <= x) {\n        x -= data[i + k];\n        i += k;\n      }\n\
    \    }\n    return i;\n  }\n};\n"
  code: "template<typename T>\nstruct BinaryIndexedTree {\nprivate:\n  int n;\n  vector<T>\
    \ data;\n\npublic:\n  BinaryIndexedTree() = default;\n\n  explicit BinaryIndexedTree(int\
    \ n) : n(n) {\n    data.assign(n + 1, 0);\n  }\n\n  explicit BinaryIndexedTree(const\
    \ vector<T>& v) :\n    BinaryIndexedTree((int)v.size()) {\n    build(v);\n  }\n\
    \n  void build(const vector<T>& v) {\n    assert(n == (int)v.size());\n    for\
    \ (int i = 1; i <= n; i++) data[i] = v[i - 1];\n    for (int i = 1; i <= n; i++)\
    \ {\n      int j = i + (i & -i);\n      if (j <= n) data[j] += data[i];\n    }\n\
    \  }\n\n  void apply(int k, const T& x) {\n    for (++k; k <= n; k += k & -k)\
    \ data[k] += x;\n  }\n\n  T prod(int r) const {\n    T ret = T();\n    for (;\
    \ r > 0; r -= r & -r) ret += data[r];\n    return ret;\n  }\n\n  T prod(int l,\
    \ int r) const {\n    return prod(r) - prod(l);\n  }\n\n  int lower_bound(T x)\
    \ const {\n    int i = 0;\n    for (int k = 1 << (__lg(n) + 1); k > 0; k >>= 1)\
    \ {\n      if (i + k <= n && data[i + k] < x) {\n        x -= data[i + k];\n \
    \       i += k;\n      }\n    }\n    return i;\n  }\n\n  int upper_bound(T x)\
    \ const {\n    int i = 0;\n    for (int k = 1 << (__lg(n) + 1); k > 0; k >>= 1)\
    \ {\n      if (i + k <= n && data[i + k] <= x) {\n        x -= data[i + k];\n\
    \        i += k;\n      }\n    }\n    return i;\n  }\n};"
  dependsOn: []
  isVerificationFile: false
  path: DataStructures/binary-indexed-tree.hpp
  requiredBy: []
  timestamp: '2022-05-18 13:53:14+02:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Verify/AIZU_range_sum_query.test.cpp
documentation_of: DataStructures/binary-indexed-tree.hpp
layout: document
redirect_from:
- /library/DataStructures/binary-indexed-tree.hpp
- /library/DataStructures/binary-indexed-tree.hpp.html
title: DataStructures/binary-indexed-tree.hpp
---
