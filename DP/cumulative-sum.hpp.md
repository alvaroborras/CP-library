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
  bundledCode: "#line 1 \"DP/cumulative-sum.hpp\"\ntemplate <class T> struct CumulativeSum\
    \ {\n  vector<T> data;\n\n  CumulativeSum() = default;\n\n  explicit CumulativeSum(size_t\
    \ sz) : data(sz + 1, 0) {}\n\n  void add(int k, const T &x) { data[k + 1] += x;\
    \ }\n\n  void build() {\n    for (int i = 1; i < data.size(); i++) {\n      data[i]\
    \ += data[i - 1];\n    }\n  }\n\n  T fold(int r) const {\n    if (r < 0)\n   \
    \   return 0;\n    return data[min(r, (int)data.size() - 1)];\n  }\n\n  T fold(int\
    \ l, int r) const { return fold(r) - fold(l); }\n};\n"
  code: "template <class T> struct CumulativeSum {\n  vector<T> data;\n\n  CumulativeSum()\
    \ = default;\n\n  explicit CumulativeSum(size_t sz) : data(sz + 1, 0) {}\n\n \
    \ void add(int k, const T &x) { data[k + 1] += x; }\n\n  void build() {\n    for\
    \ (int i = 1; i < data.size(); i++) {\n      data[i] += data[i - 1];\n    }\n\
    \  }\n\n  T fold(int r) const {\n    if (r < 0)\n      return 0;\n    return data[min(r,\
    \ (int)data.size() - 1)];\n  }\n\n  T fold(int l, int r) const { return fold(r)\
    \ - fold(l); }\n};"
  dependsOn: []
  isVerificationFile: false
  path: DP/cumulative-sum.hpp
  requiredBy: []
  timestamp: '2022-05-17 14:10:35+02:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: DP/cumulative-sum.hpp
layout: document
redirect_from:
- /library/DP/cumulative-sum.hpp
- /library/DP/cumulative-sum.hpp.html
title: DP/cumulative-sum.hpp
---
