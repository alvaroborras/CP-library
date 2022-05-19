---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: Verify/AIZU_range-min-query.test.cpp
    title: Verify/AIZU_range-min-query.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 1 \"DataStructures/segment-tree.hpp\"\ntemplate<typename T,\
    \ typename F>\nstruct SegmentTree {\n  int n, sz;\n  vector<T> seg;\n\n  const\
    \ F f;\n  const T ti;\n\n  SegmentTree() = default;\n\n  explicit SegmentTree(int\
    \ n, const F f, const T& ti) : n(n), f(f), ti(ti) {\n    sz = 1;\n    while (sz\
    \ < n) sz <<= 1;\n    seg.assign(2 * sz, ti);\n  }\n\n  explicit SegmentTree(const\
    \ vector<T>& v, const F f, const T& ti) :\n    SegmentTree((int)v.size(), f, ti)\
    \ {\n    build(v);\n  }\n\n  void build(const vector< T >& v) {\n    assert(n\
    \ == (int)v.size());\n    for (int k = 0; k < n; k++) seg[k + sz] = v[k];\n  \
    \  for (int k = sz - 1; k > 0; k--) {\n      seg[k] = f(seg[2 * k + 0], seg[2\
    \ * k + 1]);\n    }\n  }\n\n  void set(int k, const T& x) {\n    k += sz;\n  \
    \  seg[k] = x;\n    while (k >>= 1) {\n      seg[k] = f(seg[2 * k + 0], seg[2\
    \ * k + 1]);\n    }\n  }\n\n  T get(int k) const {\n    return seg[k + sz];\n\
    \  }\n\n  T operator[](const int& k) const {\n    return get(k);\n  }\n\n  void\
    \ apply(int k, const T& x) {\n    k += sz;\n    seg[k] = f(seg[k], x);\n    while\
    \ (k >>= 1) {\n      seg[k] = f(seg[2 * k + 0], seg[2 * k + 1]);\n    }\n  }\n\
    \n  T prod(int l, int r) const {\n    T L = ti, R = ti;\n    for (l += sz, r +=\
    \ sz; l < r; l >>= 1, r >>= 1) {\n      if (l & 1) L = f(L, seg[l++]);\n     \
    \ if (r & 1) R = f(seg[--r], R);\n    }\n    return f(L, R);\n  }\n\n  T all_prod()\
    \ const {\n    return seg[1];\n  }\n\n  template< typename C >\n  int find_first(int\
    \ l, const C& check) const {\n    if (l >= n) return n;\n    l += sz;\n    T sum\
    \ = ti;\n    do {\n      while ((l & 1) == 0) l >>= 1;\n      if (check(f(sum,\
    \ seg[l]))) {\n        while (l < sz) {\n          l <<= 1;\n          auto nxt\
    \ = f(sum, seg[l]);\n          if (not check(nxt)) {\n            sum = nxt;\n\
    \            l++;\n          }\n        }\n        return l + 1 - sz;\n      }\n\
    \      sum = f(sum, seg[l++]);\n    } while ((l & -l) != l);\n    return n;\n\
    \  }\n\n  template<typename C>\n  int find_last(int r, const C& check) const {\n\
    \    if (r <= 0) return -1;\n    r += sz;\n    T sum = ti;\n    do {\n      r--;\n\
    \      while (r > 1 and (r & 1)) r >>= 1;\n      if (check(f(seg[r], sum))) {\n\
    \        while (r < sz) {\n          r = (r << 1) + 1;\n          auto nxt = f(seg[r],\
    \ sum);\n          if (not check(nxt)) {\n            sum = nxt;\n           \
    \ r--;\n          }\n        }\n        return r - sz;\n      }\n      sum = f(seg[r],\
    \ sum);\n    } while ((r & -r) != r);\n    return -1;\n  }\n};\n\ntemplate<typename\
    \ T, typename F>\nSegmentTree<T, F> get_segment_tree(int N, const F& f, const\
    \ T& ti) {\n  return SegmentTree{ N, f, ti };\n}\n\ntemplate<typename T, typename\
    \ F>\nSegmentTree<T, F> get_segment_tree(const vector<T>& v, const F& f, const\
    \ T& ti) {\n  return SegmentTree{ v, f, ti };\n}\n"
  code: "template<typename T, typename F>\nstruct SegmentTree {\n  int n, sz;\n  vector<T>\
    \ seg;\n\n  const F f;\n  const T ti;\n\n  SegmentTree() = default;\n\n  explicit\
    \ SegmentTree(int n, const F f, const T& ti) : n(n), f(f), ti(ti) {\n    sz =\
    \ 1;\n    while (sz < n) sz <<= 1;\n    seg.assign(2 * sz, ti);\n  }\n\n  explicit\
    \ SegmentTree(const vector<T>& v, const F f, const T& ti) :\n    SegmentTree((int)v.size(),\
    \ f, ti) {\n    build(v);\n  }\n\n  void build(const vector< T >& v) {\n    assert(n\
    \ == (int)v.size());\n    for (int k = 0; k < n; k++) seg[k + sz] = v[k];\n  \
    \  for (int k = sz - 1; k > 0; k--) {\n      seg[k] = f(seg[2 * k + 0], seg[2\
    \ * k + 1]);\n    }\n  }\n\n  void set(int k, const T& x) {\n    k += sz;\n  \
    \  seg[k] = x;\n    while (k >>= 1) {\n      seg[k] = f(seg[2 * k + 0], seg[2\
    \ * k + 1]);\n    }\n  }\n\n  T get(int k) const {\n    return seg[k + sz];\n\
    \  }\n\n  T operator[](const int& k) const {\n    return get(k);\n  }\n\n  void\
    \ apply(int k, const T& x) {\n    k += sz;\n    seg[k] = f(seg[k], x);\n    while\
    \ (k >>= 1) {\n      seg[k] = f(seg[2 * k + 0], seg[2 * k + 1]);\n    }\n  }\n\
    \n  T prod(int l, int r) const {\n    T L = ti, R = ti;\n    for (l += sz, r +=\
    \ sz; l < r; l >>= 1, r >>= 1) {\n      if (l & 1) L = f(L, seg[l++]);\n     \
    \ if (r & 1) R = f(seg[--r], R);\n    }\n    return f(L, R);\n  }\n\n  T all_prod()\
    \ const {\n    return seg[1];\n  }\n\n  template< typename C >\n  int find_first(int\
    \ l, const C& check) const {\n    if (l >= n) return n;\n    l += sz;\n    T sum\
    \ = ti;\n    do {\n      while ((l & 1) == 0) l >>= 1;\n      if (check(f(sum,\
    \ seg[l]))) {\n        while (l < sz) {\n          l <<= 1;\n          auto nxt\
    \ = f(sum, seg[l]);\n          if (not check(nxt)) {\n            sum = nxt;\n\
    \            l++;\n          }\n        }\n        return l + 1 - sz;\n      }\n\
    \      sum = f(sum, seg[l++]);\n    } while ((l & -l) != l);\n    return n;\n\
    \  }\n\n  template<typename C>\n  int find_last(int r, const C& check) const {\n\
    \    if (r <= 0) return -1;\n    r += sz;\n    T sum = ti;\n    do {\n      r--;\n\
    \      while (r > 1 and (r & 1)) r >>= 1;\n      if (check(f(seg[r], sum))) {\n\
    \        while (r < sz) {\n          r = (r << 1) + 1;\n          auto nxt = f(seg[r],\
    \ sum);\n          if (not check(nxt)) {\n            sum = nxt;\n           \
    \ r--;\n          }\n        }\n        return r - sz;\n      }\n      sum = f(seg[r],\
    \ sum);\n    } while ((r & -r) != r);\n    return -1;\n  }\n};\n\ntemplate<typename\
    \ T, typename F>\nSegmentTree<T, F> get_segment_tree(int N, const F& f, const\
    \ T& ti) {\n  return SegmentTree{ N, f, ti };\n}\n\ntemplate<typename T, typename\
    \ F>\nSegmentTree<T, F> get_segment_tree(const vector<T>& v, const F& f, const\
    \ T& ti) {\n  return SegmentTree{ v, f, ti };\n}"
  dependsOn: []
  isVerificationFile: false
  path: DataStructures/segment-tree.hpp
  requiredBy: []
  timestamp: '2022-05-18 13:42:44+02:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - Verify/AIZU_range-min-query.test.cpp
documentation_of: DataStructures/segment-tree.hpp
layout: document
redirect_from:
- /library/DataStructures/segment-tree.hpp
- /library/DataStructures/segment-tree.hpp.html
title: DataStructures/segment-tree.hpp
---
