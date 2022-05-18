---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Verify/LC_prime_factorization_2.test.cpp
    title: Verify/LC_prime_factorization_2.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Math/prime_factor.hpp\"\nmap<uint64_t, int> prime_factor(uint64_t\
    \ n) {\n  map<uint64_t, int> ret;\n  for (uint64_t i = 2; i * i <= n; i++) {\n\
    \    while (n % i == 0) {\n      ret[i]++;\n      n /= i;\n    }\n  }\n  if (n\
    \ != 1) ret[n] = 1;\n  return ret;\n}\n"
  code: "map<uint64_t, int> prime_factor(uint64_t n) {\n  map<uint64_t, int> ret;\n\
    \  for (uint64_t i = 2; i * i <= n; i++) {\n    while (n % i == 0) {\n      ret[i]++;\n\
    \      n /= i;\n    }\n  }\n  if (n != 1) ret[n] = 1;\n  return ret;\n}"
  dependsOn: []
  isVerificationFile: false
  path: Math/prime_factor.hpp
  requiredBy: []
  timestamp: '2022-05-18 14:27:55+02:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Verify/LC_prime_factorization_2.test.cpp
documentation_of: Math/prime_factor.hpp
layout: document
redirect_from:
- /library/Math/prime_factor.hpp
- /library/Math/prime_factor.hpp.html
title: Math/prime_factor.hpp
---
