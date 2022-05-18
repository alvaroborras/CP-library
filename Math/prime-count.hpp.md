---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Math/kth-root-integer.hpp
    title: Math/kth-root-integer.hpp
  - icon: ':heavy_check_mark:'
    path: Math/prime-table.hpp
    title: Math/prime-table.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Verify/LC_counting_primes.test.cpp
    title: Verify/LC_counting_primes.test.cpp
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
    \ {\n    if (check(ret | (1u << i))) ret |= 1u << i;\n  }\n  return ret;\n}\n\
    #line 1 \"Math/prime-table.hpp\"\nvector<bool> prime_table(int n) {\n  vector<bool>\
    \ prime(n + 1, true);\n  if (n >= 0) prime[0] = false;\n  if (n >= 1) prime[1]\
    \ = false;\n  for (int i = 2; i * i <= n; i++) {\n    if (!prime[i]) continue;\n\
    \    for (int j = i * i; j <= n; j += i) {\n      prime[j] = false;\n    }\n \
    \ }\n  return prime;\n}\n#line 3 \"Math/prime-count.hpp\"\n\n/**\n * return pi(N),\
    \ the number of primes <= N\n */\ntemplate<int64_t LIM = 100000000000LL>\nstruct\
    \ PrimeCount {\nprivate:\n  int64_t sq;\n  vector<bool> prime;\n  vector<int64_t>\
    \ prime_sum, primes;\n\n  int64_t p2(int64_t x, int64_t y) {\n    if (x < 4) return\
    \ 0;\n    int64_t a = pi(y);\n    int64_t b = pi(kth_root_integer(x, 2));\n  \
    \  if (a >= b) return 0;\n    int64_t sum = (a - 2) * (a + 1) / 2 - (b - 2) *\
    \ (b + 1) / 2;\n    for (int64_t i = a; i < b; i++) sum += pi(x / primes[i]);\n\
    \    return sum;\n  }\n\n  int64_t phi(int64_t m, int64_t n) {\n    if (m < 1)\
    \ return 0;\n    if (n > m) return 1;\n    if (n < 1) return m;\n    if (m <=\
    \ primes[n - 1] * primes[n - 1]) return pi(m) - n + 1;\n    if (m <= primes[n\
    \ - 1] * primes[n - 1] * primes[n - 1] && m <= sq) {\n      int64_t sx = pi(kth_root_integer(m,\
    \ 2));\n      int64_t ans = pi(m) - (sx + n - 2) * (sx - n + 1) / 2;\n      for\
    \ (int64_t i = n; i < sx; ++i) ans += pi(m / primes[i]);\n      return ans;\n\
    \    }\n    return phi(m, n - 1) - phi(m / primes[n - 1], n - 1);\n  }\n\npublic:\n\
    \n  PrimeCount() : sq(kth_root_integer(LIM, 2)), prime_sum(sq + 1) {\n    prime\
    \ = prime_table(sq);\n    for (int i = 1; i <= sq; i++) prime_sum[i] = prime_sum[i\
    \ - 1] + prime[i];\n    primes.reserve(prime_sum[sq]);\n    for (int i = 1; i\
    \ <= sq; i++) if (prime[i]) primes.push_back(i);\n  }\n\n  int64_t pi(int64_t\
    \ n) {\n    if (n <= sq) return prime_sum[n];\n    int64_t m = kth_root_integer(n,\
    \ 3);\n    int64_t a = pi(m);\n    return phi(n, a) + a - 1 - p2(n, m);\n  }\n\
    };\n"
  code: "#include \"kth-root-integer.hpp\"\n#include \"prime-table.hpp\"\n\n/**\n\
    \ * return pi(N), the number of primes <= N\n */\ntemplate<int64_t LIM = 100000000000LL>\n\
    struct PrimeCount {\nprivate:\n  int64_t sq;\n  vector<bool> prime;\n  vector<int64_t>\
    \ prime_sum, primes;\n\n  int64_t p2(int64_t x, int64_t y) {\n    if (x < 4) return\
    \ 0;\n    int64_t a = pi(y);\n    int64_t b = pi(kth_root_integer(x, 2));\n  \
    \  if (a >= b) return 0;\n    int64_t sum = (a - 2) * (a + 1) / 2 - (b - 2) *\
    \ (b + 1) / 2;\n    for (int64_t i = a; i < b; i++) sum += pi(x / primes[i]);\n\
    \    return sum;\n  }\n\n  int64_t phi(int64_t m, int64_t n) {\n    if (m < 1)\
    \ return 0;\n    if (n > m) return 1;\n    if (n < 1) return m;\n    if (m <=\
    \ primes[n - 1] * primes[n - 1]) return pi(m) - n + 1;\n    if (m <= primes[n\
    \ - 1] * primes[n - 1] * primes[n - 1] && m <= sq) {\n      int64_t sx = pi(kth_root_integer(m,\
    \ 2));\n      int64_t ans = pi(m) - (sx + n - 2) * (sx - n + 1) / 2;\n      for\
    \ (int64_t i = n; i < sx; ++i) ans += pi(m / primes[i]);\n      return ans;\n\
    \    }\n    return phi(m, n - 1) - phi(m / primes[n - 1], n - 1);\n  }\n\npublic:\n\
    \n  PrimeCount() : sq(kth_root_integer(LIM, 2)), prime_sum(sq + 1) {\n    prime\
    \ = prime_table(sq);\n    for (int i = 1; i <= sq; i++) prime_sum[i] = prime_sum[i\
    \ - 1] + prime[i];\n    primes.reserve(prime_sum[sq]);\n    for (int i = 1; i\
    \ <= sq; i++) if (prime[i]) primes.push_back(i);\n  }\n\n  int64_t pi(int64_t\
    \ n) {\n    if (n <= sq) return prime_sum[n];\n    int64_t m = kth_root_integer(n,\
    \ 3);\n    int64_t a = pi(m);\n    return phi(n, a) + a - 1 - p2(n, m);\n  }\n\
    };"
  dependsOn:
  - Math/kth-root-integer.hpp
  - Math/prime-table.hpp
  isVerificationFile: false
  path: Math/prime-count.hpp
  requiredBy: []
  timestamp: '2022-05-18 14:20:49+02:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Verify/LC_counting_primes.test.cpp
documentation_of: Math/prime-count.hpp
layout: document
redirect_from:
- /library/Math/prime-count.hpp
- /library/Math/prime-count.hpp.html
title: Math/prime-count.hpp
---