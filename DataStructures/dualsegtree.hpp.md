---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Verify/AOJ_DSL_2_D.test.cpp
    title: Verify/AOJ_DSL_2_D.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: Dual Segment Tree
    links: []
  bundledCode: "#line 1 \"DataStructures/dualsegtree.hpp\"\n\ntemplate <typename M,\
    \ M(*f)(M, M), M(*m1)()> class DualSegmentTree {\n  int sz, height;\n  vector<M>\
    \ data;\n  void down(int k) {\n    data[k * 2] = f(data[k * 2], data[k]);\n  \
    \  data[k * 2 + 1] = f(data[k * 2 + 1], data[k]);\n    data[k] = m1();\n  }\n\n\
    public:\n  DualSegmentTree(int n) {\n    sz = 1, height = 0;\n    while (sz <\
    \ n)\n      sz <<= 1, height++;\n    data.assign(2 * sz, m1());\n  }\n  void run(vector<M>&\
    \ v) {\n    for (int i = 0; i < (int)v.size(); i++)\n      data[i + sz] = v[i];\n\
    \  }\n  void update(int a, int b, M x) {\n    if (a >= b)\n      return;\n   \
    \ a += sz, b += sz;\n    for (int i = height; i; i--) {\n      if (((a >> i) <<\
    \ i) != a)\n        down(a >> i);\n      if (((b >> i) << i) != b)\n        down((b\
    \ - 1) >> i);\n    }\n    for (; a < b; a >>= 1, b >>= 1) {\n      if (a & 1)\n\
    \        data[a] = f(data[a], x), a++;\n      if (b & 1)\n        --b, data[b]\
    \ = f(data[b], x);\n    }\n  }\n  M query(int k) {\n    k += sz;\n    for (int\
    \ i = height; i; i--) {\n      if (((k >> i) << i) != k)\n        down(k >> i);\n\
    \    }\n    M ret = data[k];\n    while (k >>= 1)\n      ret = f(ret, data[k]);\n\
    \    return ret;\n  }\n};\n\n/**\n * @brief Dual Segment Tree\n */\n"
  code: "\ntemplate <typename M, M(*f)(M, M), M(*m1)()> class DualSegmentTree {\n\
    \  int sz, height;\n  vector<M> data;\n  void down(int k) {\n    data[k * 2] =\
    \ f(data[k * 2], data[k]);\n    data[k * 2 + 1] = f(data[k * 2 + 1], data[k]);\n\
    \    data[k] = m1();\n  }\n\npublic:\n  DualSegmentTree(int n) {\n    sz = 1,\
    \ height = 0;\n    while (sz < n)\n      sz <<= 1, height++;\n    data.assign(2\
    \ * sz, m1());\n  }\n  void run(vector<M>& v) {\n    for (int i = 0; i < (int)v.size();\
    \ i++)\n      data[i + sz] = v[i];\n  }\n  void update(int a, int b, M x) {\n\
    \    if (a >= b)\n      return;\n    a += sz, b += sz;\n    for (int i = height;\
    \ i; i--) {\n      if (((a >> i) << i) != a)\n        down(a >> i);\n      if\
    \ (((b >> i) << i) != b)\n        down((b - 1) >> i);\n    }\n    for (; a < b;\
    \ a >>= 1, b >>= 1) {\n      if (a & 1)\n        data[a] = f(data[a], x), a++;\n\
    \      if (b & 1)\n        --b, data[b] = f(data[b], x);\n    }\n  }\n  M query(int\
    \ k) {\n    k += sz;\n    for (int i = height; i; i--) {\n      if (((k >> i)\
    \ << i) != k)\n        down(k >> i);\n    }\n    M ret = data[k];\n    while (k\
    \ >>= 1)\n      ret = f(ret, data[k]);\n    return ret;\n  }\n};\n\n/**\n * @brief\
    \ Dual Segment Tree\n */"
  dependsOn: []
  isVerificationFile: false
  path: DataStructures/dualsegtree.hpp
  requiredBy: []
  timestamp: '2022-05-17 16:42:23+02:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Verify/AOJ_DSL_2_D.test.cpp
documentation_of: DataStructures/dualsegtree.hpp
layout: document
redirect_from:
- /library/DataStructures/dualsegtree.hpp
- /library/DataStructures/dualsegtree.hpp.html
title: Dual Segment Tree
---
