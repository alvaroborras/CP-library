---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: Math/prime-count.hpp
    title: Math/prime-count.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Verify/LC_counting_primes.test.cpp
    title: Verify/LC_counting_primes.test.cpp
  - icon: ':heavy_check_mark:'
    path: Verify/LC_kth_root_integer.test.cpp
    title: Verify/LC_kth_root_integer.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Math/kth-root-integer.hpp\"\n// return floor( a^(1/k) )\n\
    uint64_t kth_root_integer(uint64_t a, int k) {\n  if (k == 1) return a;\n  auto\
    \ check = [&](uint32_t x) {\n    uint64_t mul = 1;\n    for (int j = 0; j < k;\
    \ j++) {\n      if (__builtin_mul_overflow(mul, x, &mul)) return false;\n    }\n\
    \    return mul <= a;\n  };\n  uint64_t ret = 0;\n  for (int i = 31; i >= 0; i--)\
    \ {\n    if (check(ret | (1u << i))) ret |= 1u << i;\n  }\n  return ret;\n}\n"
  code: "// return floor( a^(1/k) )\nuint64_t kth_root_integer(uint64_t a, int k)\
    \ {\n  if (k == 1) return a;\n  auto check = [&](uint32_t x) {\n    uint64_t mul\
    \ = 1;\n    for (int j = 0; j < k; j++) {\n      if (__builtin_mul_overflow(mul,\
    \ x, &mul)) return false;\n    }\n    return mul <= a;\n  };\n  uint64_t ret =\
    \ 0;\n  for (int i = 31; i >= 0; i--) {\n    if (check(ret | (1u << i))) ret |=\
    \ 1u << i;\n  }\n  return ret;\n}"
  dependsOn: []
  isVerificationFile: false
  path: Math/kth-root-integer.hpp
  requiredBy:
  - Math/prime-count.hpp
  timestamp: '2022-05-18 14:20:49+02:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Verify/LC_counting_primes.test.cpp
  - Verify/LC_kth_root_integer.test.cpp
documentation_of: Math/kth-root-integer.hpp
layout: document
redirect_from:
- /library/Math/kth-root-integer.hpp
- /library/Math/kth-root-integer.hpp.html
title: Math/kth-root-integer.hpp
---
