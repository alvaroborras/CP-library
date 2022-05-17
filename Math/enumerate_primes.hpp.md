---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Math/prime-table.hpp
    title: Math/prime-table.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Verify/LC_enumerate_primes.test.cpp
    title: Verify/LC_enumerate_primes.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Math/enumerate_primes.hpp\"\n\n#line 1 \"Math/prime-table.hpp\"\
    \nvector<bool> prime_table(int n) {\n  vector<bool> prime(n + 1, true);\n  if\
    \ (n >= 0) prime[0] = false;\n  if (n >= 1) prime[1] = false;\n  for (int i =\
    \ 2; i * i <= n; i++) {\n    if (!prime[i]) continue;\n    for (int j = i * i;\
    \ j <= n; j += i) {\n      prime[j] = false;\n    }\n  }\n  return prime;\n}\n\
    #line 3 \"Math/enumerate_primes.hpp\"\nvector<int> enumerate_primes(int n) {\n\
    \  if (n <= 1) return {};\n  auto d = prime_table(n);\n  vector<int> primes;\n\
    \  primes.reserve(count(d.begin(), d.end(), true));\n  for (size_t i = 0; i <\
    \ d.size(); i++) {\n    if (d[i]) primes.push_back(i);\n  }\n  return primes;\n\
    }\n"
  code: "\n#include \"prime-table.hpp\"\nvector<int> enumerate_primes(int n) {\n \
    \ if (n <= 1) return {};\n  auto d = prime_table(n);\n  vector<int> primes;\n\
    \  primes.reserve(count(d.begin(), d.end(), true));\n  for (size_t i = 0; i <\
    \ d.size(); i++) {\n    if (d[i]) primes.push_back(i);\n  }\n  return primes;\n\
    }"
  dependsOn:
  - Math/prime-table.hpp
  isVerificationFile: false
  path: Math/enumerate_primes.hpp
  requiredBy: []
  timestamp: '2022-05-17 16:42:23+02:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Verify/LC_enumerate_primes.test.cpp
documentation_of: Math/enumerate_primes.hpp
layout: document
redirect_from:
- /library/Math/enumerate_primes.hpp
- /library/Math/enumerate_primes.hpp.html
title: Math/enumerate_primes.hpp
---
