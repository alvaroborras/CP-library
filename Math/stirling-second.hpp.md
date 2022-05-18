---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: Verify/LC_stirling_numbers_second_kind.test.cpp
    title: Verify/LC_stirling_numbers_second_kind.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Math/stirling-second.hpp\"\ntemplate<template<typename>\
    \ class FPS, typename Mint>\nFPS<Mint> stirling_second(int N) {\n  FPS<Mint> A(N\
    \ + 1), B(N + 1);\n  Mint tmp = 1;\n  for (int i = 0; i <= N; i++) {\n    Mint\
    \ rev = Mint(1) / tmp;\n    A[i] = Mint(i).pow(N) * rev;\n    B[i] = Mint(1) *\
    \ rev;\n    if (i & 1) B[i] *= -1;\n    tmp *= i + 1;\n  }\n  return (A * B).pre(N\
    \ + 1);\n}\n"
  code: "template<template<typename> class FPS, typename Mint>\nFPS<Mint> stirling_second(int\
    \ N) {\n  FPS<Mint> A(N + 1), B(N + 1);\n  Mint tmp = 1;\n  for (int i = 0; i\
    \ <= N; i++) {\n    Mint rev = Mint(1) / tmp;\n    A[i] = Mint(i).pow(N) * rev;\n\
    \    B[i] = Mint(1) * rev;\n    if (i & 1) B[i] *= -1;\n    tmp *= i + 1;\n  }\n\
    \  return (A * B).pre(N + 1);\n}"
  dependsOn: []
  isVerificationFile: false
  path: Math/stirling-second.hpp
  requiredBy: []
  timestamp: '2022-05-17 18:28:09+02:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - Verify/LC_stirling_numbers_second_kind.test.cpp
documentation_of: Math/stirling-second.hpp
layout: document
redirect_from:
- /library/Math/stirling-second.hpp
- /library/Math/stirling-second.hpp.html
title: Math/stirling-second.hpp
---
