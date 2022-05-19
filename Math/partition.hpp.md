---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: Verify/LC_partition_function.test.cpp
    title: Verify/LC_partition_function.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Math/partition.hpp\"\ntemplate<template<typename> class\
    \ FPS, typename Mint>\nFPS<Mint> partition(int N) {\n  FPS<Mint> poly(N + 1);\n\
    \  poly[0] = 1;\n  for (int k = 1; k <= N; k++) {\n    if (1LL * k * (3 * k +\
    \ 1) / 2 <= N) poly[k * (3 * k + 1) / 2] += (k % 2?-1:1);\n    if (1LL * k * (3\
    \ * k - 1) / 2 <= N) poly[k * (3 * k - 1) / 2] += (k % 2?-1:1);\n  }\n  return\
    \ poly.inv();\n}\n"
  code: "template<template<typename> class FPS, typename Mint>\nFPS<Mint> partition(int\
    \ N) {\n  FPS<Mint> poly(N + 1);\n  poly[0] = 1;\n  for (int k = 1; k <= N; k++)\
    \ {\n    if (1LL * k * (3 * k + 1) / 2 <= N) poly[k * (3 * k + 1) / 2] += (k %\
    \ 2?-1:1);\n    if (1LL * k * (3 * k - 1) / 2 <= N) poly[k * (3 * k - 1) / 2]\
    \ += (k % 2?-1:1);\n  }\n  return poly.inv();\n}"
  dependsOn: []
  isVerificationFile: false
  path: Math/partition.hpp
  requiredBy: []
  timestamp: '2022-05-17 17:12:10+02:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - Verify/LC_partition_function.test.cpp
documentation_of: Math/partition.hpp
layout: document
redirect_from:
- /library/Math/partition.hpp
- /library/Math/partition.hpp.html
title: Math/partition.hpp
---
