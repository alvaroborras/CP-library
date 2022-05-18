---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Verify/AIZU_range_update_query.test.cpp
    title: Verify/AIZU_range_update_query.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"DataStructures/dualsegtree.hpp\"\n/**\n * Range Update Query\
    \ (dual segment tree)\n */\ntemplate< typename E, typename H >\nstruct DualSegmentTree\
    \ {\n  int sz, height;\n  vector< E > lazy;\n  const H h;\n  const E ei;\n\n \
    \ DualSegmentTree(int n, const H h, const E& ei) : h(h), ei(ei) {\n    sz = 1;\n\
    \    height = 0;\n    while (sz < n) sz <<= 1, height++;\n    lazy.assign(2 *\
    \ sz, ei);\n  }\n\n  inline void propagate(int k) {\n    if (lazy[k] != ei) {\n\
    \      lazy[2 * k + 0] = h(lazy[2 * k + 0], lazy[k]);\n      lazy[2 * k + 1] =\
    \ h(lazy[2 * k + 1], lazy[k]);\n      lazy[k] = ei;\n    }\n  }\n\n  inline void\
    \ thrust(int k) {\n    for (int i = height; i > 0; i--) propagate(k >> i);\n \
    \ }\n\n  void update(int a, int b, const E& x) {\n    thrust(a += sz);\n    thrust(b\
    \ += sz - 1);\n    for (int l = a, r = b + 1; l < r; l >>= 1, r >>= 1) {\n   \
    \   if (l & 1) lazy[l] = h(lazy[l], x), ++l;\n      if (r & 1) --r, lazy[r] =\
    \ h(lazy[r], x);\n    }\n  }\n\n  E operator[](int k) {\n    thrust(k += sz);\n\
    \    return lazy[k];\n  }\n};\n\ntemplate< typename E, typename H >\nDualSegmentTree<\
    \ E, H > get_dual_segment_tree(int N, const H& h, const E& ei) {\n  return { N,\
    \ h, ei };\n}\n"
  code: "/**\n * Range Update Query (dual segment tree)\n */\ntemplate< typename E,\
    \ typename H >\nstruct DualSegmentTree {\n  int sz, height;\n  vector< E > lazy;\n\
    \  const H h;\n  const E ei;\n\n  DualSegmentTree(int n, const H h, const E& ei)\
    \ : h(h), ei(ei) {\n    sz = 1;\n    height = 0;\n    while (sz < n) sz <<= 1,\
    \ height++;\n    lazy.assign(2 * sz, ei);\n  }\n\n  inline void propagate(int\
    \ k) {\n    if (lazy[k] != ei) {\n      lazy[2 * k + 0] = h(lazy[2 * k + 0], lazy[k]);\n\
    \      lazy[2 * k + 1] = h(lazy[2 * k + 1], lazy[k]);\n      lazy[k] = ei;\n \
    \   }\n  }\n\n  inline void thrust(int k) {\n    for (int i = height; i > 0; i--)\
    \ propagate(k >> i);\n  }\n\n  void update(int a, int b, const E& x) {\n    thrust(a\
    \ += sz);\n    thrust(b += sz - 1);\n    for (int l = a, r = b + 1; l < r; l >>=\
    \ 1, r >>= 1) {\n      if (l & 1) lazy[l] = h(lazy[l], x), ++l;\n      if (r &\
    \ 1) --r, lazy[r] = h(lazy[r], x);\n    }\n  }\n\n  E operator[](int k) {\n  \
    \  thrust(k += sz);\n    return lazy[k];\n  }\n};\n\ntemplate< typename E, typename\
    \ H >\nDualSegmentTree< E, H > get_dual_segment_tree(int N, const H& h, const\
    \ E& ei) {\n  return { N, h, ei };\n}"
  dependsOn: []
  isVerificationFile: false
  path: DataStructures/dualsegtree.hpp
  requiredBy: []
  timestamp: '2022-05-18 14:08:29+02:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Verify/AIZU_range_update_query.test.cpp
documentation_of: DataStructures/dualsegtree.hpp
layout: document
redirect_from:
- /library/DataStructures/dualsegtree.hpp
- /library/DataStructures/dualsegtree.hpp.html
title: DataStructures/dualsegtree.hpp
---
