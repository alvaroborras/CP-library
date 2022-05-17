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
  bundledCode: "#line 1 \"Math/moebius_mu.hpp\"\nvector<int> moebius_table(int n)\
    \ {\n  vector<int> mu(n + 1, 1), p(n + 1, 1);\n  for (int i = 2; i <= n; i++)\
    \ {\n    if (p[i] == 1) {\n      for (int j = i; j <= n; j += i) p[j] = i;\n \
    \   }\n    if ((i / p[i]) % p[i] == 0) mu[i] = 0;\n    else mu[i] = -mu[i / p[i]];\n\
    \  }\n  return mu;\n}\n"
  code: "vector<int> moebius_table(int n) {\n  vector<int> mu(n + 1, 1), p(n + 1,\
    \ 1);\n  for (int i = 2; i <= n; i++) {\n    if (p[i] == 1) {\n      for (int\
    \ j = i; j <= n; j += i) p[j] = i;\n    }\n    if ((i / p[i]) % p[i] == 0) mu[i]\
    \ = 0;\n    else mu[i] = -mu[i / p[i]];\n  }\n  return mu;\n}"
  dependsOn: []
  isVerificationFile: false
  path: Math/moebius_mu.hpp
  requiredBy: []
  timestamp: '2022-05-17 16:42:23+02:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Math/moebius_mu.hpp
layout: document
redirect_from:
- /library/Math/moebius_mu.hpp
- /library/Math/moebius_mu.hpp.html
title: Math/moebius_mu.hpp
---
