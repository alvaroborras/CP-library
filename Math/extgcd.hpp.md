---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Verify/AIZU_extended_gcd.test.cpp
    title: Verify/AIZU_extended_gcd.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Math/extgcd.hpp\"\n/*\n  Given (a, b) find the solution\
    \ (x, y) to the equation a x + b y = gcd(a, b)\n  If there are many, this returns\
    \ the one such that |x| + |y| is minimal, and x <= y\n*/\ntemplate<typename T>\n\
    T extgcd(T a, T b, T& x, T& y) {\n  T d = a;\n  if (b != 0) {\n    d = extgcd(b,\
    \ a % b, y, x);\n    y -= (a / b) * x;\n  }\n  else {\n    x = 1;\n    y = 0;\n\
    \  }\n  return d;\n}\n"
  code: "/*\n  Given (a, b) find the solution (x, y) to the equation a x + b y = gcd(a,\
    \ b)\n  If there are many, this returns the one such that |x| + |y| is minimal,\
    \ and x <= y\n*/\ntemplate<typename T>\nT extgcd(T a, T b, T& x, T& y) {\n  T\
    \ d = a;\n  if (b != 0) {\n    d = extgcd(b, a % b, y, x);\n    y -= (a / b) *\
    \ x;\n  }\n  else {\n    x = 1;\n    y = 0;\n  }\n  return d;\n}"
  dependsOn: []
  isVerificationFile: false
  path: Math/extgcd.hpp
  requiredBy: []
  timestamp: '2022-05-18 14:46:43+02:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Verify/AIZU_extended_gcd.test.cpp
documentation_of: Math/extgcd.hpp
layout: document
redirect_from:
- /library/Math/extgcd.hpp
- /library/Math/extgcd.hpp.html
title: Math/extgcd.hpp
---
