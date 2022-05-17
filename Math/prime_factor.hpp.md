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
  bundledCode: "#line 1 \"Math/prime_factor.hpp\"\nmap<int64_t, int> prime_factor(int64_t\
    \ n) {\n  map<int64_t, int > ret;\n  for (int64_t i = 2; i * i <= n; i++) {\n\
    \    while (n % i == 0) {\n      ret[i]++;\n      n /= i;\n    }\n  }\n  if (n\
    \ != 1) ret[n] = 1;\n  return ret;\n}\n"
  code: "map<int64_t, int> prime_factor(int64_t n) {\n  map<int64_t, int > ret;\n\
    \  for (int64_t i = 2; i * i <= n; i++) {\n    while (n % i == 0) {\n      ret[i]++;\n\
    \      n /= i;\n    }\n  }\n  if (n != 1) ret[n] = 1;\n  return ret;\n}"
  dependsOn: []
  isVerificationFile: false
  path: Math/prime_factor.hpp
  requiredBy: []
  timestamp: '2022-05-17 16:42:23+02:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Math/prime_factor.hpp
layout: document
redirect_from:
- /library/Math/prime_factor.hpp
- /library/Math/prime_factor.hpp.html
title: Math/prime_factor.hpp
---
