---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: Math/enumerate_primes.hpp
    title: Math/enumerate_primes.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Verify/LC_enumerate_primes.test.cpp
    title: Verify/LC_enumerate_primes.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Math/prime-table.hpp\"\nvector<bool> prime_table(int n)\
    \ {\n  vector<bool> prime(n + 1, true);\n  if (n >= 0) prime[0] = false;\n  if\
    \ (n >= 1) prime[1] = false;\n  for (int i = 2; i * i <= n; i++) {\n    if (!prime[i])\
    \ continue;\n    for (int j = i * i; j <= n; j += i) {\n      prime[j] = false;\n\
    \    }\n  }\n  return prime;\n}\n"
  code: "vector<bool> prime_table(int n) {\n  vector<bool> prime(n + 1, true);\n \
    \ if (n >= 0) prime[0] = false;\n  if (n >= 1) prime[1] = false;\n  for (int i\
    \ = 2; i * i <= n; i++) {\n    if (!prime[i]) continue;\n    for (int j = i *\
    \ i; j <= n; j += i) {\n      prime[j] = false;\n    }\n  }\n  return prime;\n\
    }"
  dependsOn: []
  isVerificationFile: false
  path: Math/prime-table.hpp
  requiredBy:
  - Math/enumerate_primes.hpp
  timestamp: '2022-05-17 16:42:23+02:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Verify/LC_enumerate_primes.test.cpp
documentation_of: Math/prime-table.hpp
layout: document
redirect_from:
- /library/Math/prime-table.hpp
- /library/Math/prime-table.hpp.html
title: Math/prime-table.hpp
---
