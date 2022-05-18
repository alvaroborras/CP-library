---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Verify/AIZU_euler_phi.test.cpp
    title: Verify/AIZU_euler_phi.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Math/euler-phi.hpp\"\n/**\n * Euler's totient function\n\
    \ */\ntemplate<typename T>\nT euler_phi(T n) {\n  T ret = n;\n  for (T i = 2;\
    \ i * i <= n; i++) {\n    if (n % i == 0) {\n      ret -= ret / i;\n      while\
    \ (n % i == 0) n /= i;\n    }\n  }\n  if (n > 1) ret -= ret / n;\n  return ret;\n\
    }\n"
  code: "/**\n * Euler's totient function\n */\ntemplate<typename T>\nT euler_phi(T\
    \ n) {\n  T ret = n;\n  for (T i = 2; i * i <= n; i++) {\n    if (n % i == 0)\
    \ {\n      ret -= ret / i;\n      while (n % i == 0) n /= i;\n    }\n  }\n  if\
    \ (n > 1) ret -= ret / n;\n  return ret;\n}"
  dependsOn: []
  isVerificationFile: false
  path: Math/euler-phi.hpp
  requiredBy: []
  timestamp: '2022-05-18 14:44:19+02:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Verify/AIZU_euler_phi.test.cpp
documentation_of: Math/euler-phi.hpp
layout: document
redirect_from:
- /library/Math/euler-phi.hpp
- /library/Math/euler-phi.hpp.html
title: Math/euler-phi.hpp
---
