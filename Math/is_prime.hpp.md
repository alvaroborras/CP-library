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
  bundledCode: "#line 1 \"Math/is_prime.hpp\"\nbool is_prime(int64_t x) {\n  for (int64_t\
    \ i = 2; i * i <= x; i++) {\n    if (x % i == 0) return false;\n  }\n  return\
    \ true;\n}\n"
  code: "bool is_prime(int64_t x) {\n  for (int64_t i = 2; i * i <= x; i++) {\n  \
    \  if (x % i == 0) return false;\n  }\n  return true;\n}"
  dependsOn: []
  isVerificationFile: false
  path: Math/is_prime.hpp
  requiredBy: []
  timestamp: '2022-05-17 16:42:23+02:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Math/is_prime.hpp
layout: document
redirect_from:
- /library/Math/is_prime.hpp
- /library/Math/is_prime.hpp.html
title: Math/is_prime.hpp
---
