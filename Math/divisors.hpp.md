---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: Verify/AIZU_divisors.test.cpp
    title: Verify/AIZU_divisors.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Math/divisors.hpp\"\n// return a vector containing the divisors\
    \ of n\nvector<uint64_t> divisor(uint64_t n) {\n  vector<uint64_t> ret;\n  for\
    \ (uint64_t i = 1; i * i <= n; i++) {\n    if (n % i == 0) {\n      ret.push_back(i);\n\
    \      if (i * i != n) ret.push_back(n / i);\n    }\n  }\n  sort(begin(ret), end(ret));\n\
    \  return ret;\n}\n"
  code: "// return a vector containing the divisors of n\nvector<uint64_t> divisor(uint64_t\
    \ n) {\n  vector<uint64_t> ret;\n  for (uint64_t i = 1; i * i <= n; i++) {\n \
    \   if (n % i == 0) {\n      ret.push_back(i);\n      if (i * i != n) ret.push_back(n\
    \ / i);\n    }\n  }\n  sort(begin(ret), end(ret));\n  return ret;\n}"
  dependsOn: []
  isVerificationFile: false
  path: Math/divisors.hpp
  requiredBy: []
  timestamp: '2022-05-18 14:20:49+02:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - Verify/AIZU_divisors.test.cpp
documentation_of: Math/divisors.hpp
layout: document
redirect_from:
- /library/Math/divisors.hpp
- /library/Math/divisors.hpp.html
title: Math/divisors.hpp
---
