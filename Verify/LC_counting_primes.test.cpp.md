---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Math/kth-root-integer.hpp
    title: Math/kth-root-integer.hpp
  - icon: ':heavy_check_mark:'
    path: Math/prime-count.hpp
    title: Math/prime-count.hpp
  - icon: ':heavy_check_mark:'
    path: Math/prime-table.hpp
    title: Math/prime-table.hpp
  - icon: ':heavy_check_mark:'
    path: Template/template.hpp
    title: Template/template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/counting_primes
    links:
    - https://judge.yosupo.jp/problem/counting_primes
  bundledCode: "#line 1 \"Verify/LC_counting_primes.test.cpp\"\n#define PROBLEM \"\
    https://judge.yosupo.jp/problem/counting_primes\"\n\n#line 1 \"Template/template.hpp\"\
    \n#include <iostream>\n#include <iomanip>\n#include <cstdio>\n#include <cmath>\n\
    #include <ctime>\n#include <cstdlib>\n#include <cassert>\n#include <vector>\n\
    #include <list>\n#include <stack>\n#include <queue>\n#include <deque>\n#include\
    \ <map>\n#include <set>\n#include <bitset>\n#include <string>\n#include <algorithm>\n\
    #include <utility>\n#include <complex>\n#include <array>\n#include <random>\n\
    #include <climits>\n#include <unordered_set>\n#include <unordered_map>\nusing\
    \ namespace std;\n\n#define rep(x, s, t) for (ll x = (s); (x) <= (t); (x)++)\n\
    #define per(x, s, t) for (ll x = (s); (x) >= (t); (x)--)\n#define reps(x, s) for\
    \ (ll x = 0; (x) < (ll)(s).size(); (x)++)\n#define chmin(x, y) (x) = min((x),\
    \ (y))\n#define chmax(x, y) (x) = max((x), (y))\n#define sz(x) ((ll)(x).size())\n\
    #define all(x) (x).begin(), (x).end()\n#define rall(x) (x).rbegin(), (x).rend()\n\
    #define outl(...) dump_func(__VA_ARGS__)\n#define outf(x) cout << fixed << setprecision(16)\
    \ << (x) << nl\n#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)\n\
    #define nl \"\\n\"\n#define pb push_back\n#define fi first\n#define se second\n\
    #define inf 2e18\n#define eps 1e-9\nconst double PI = 3.1415926535897932384626433;\n\
    \ntypedef long long ll;\ntypedef unsigned long long ull;\ntypedef pair<ll, ll>\
    \ P;\n\nconst int mod = 1e9 + 7;\n\ntemplate< typename T1, typename T2 >\nostream&\
    \ operator<<(ostream& os, const pair< T1, T2 >& p) {\n  os << p.first << \" \"\
    \ << p.second;\n  return os;\n}\n\ntemplate< typename T1, typename T2 >\nistream&\
    \ operator>>(istream& is, pair< T1, T2 >& p) {\n  is >> p.first >> p.second;\n\
    \  return is;\n}\n\ntemplate< typename T >\nostream& operator<<(ostream& os, const\
    \ vector< T >& v) {\n  for (size_t i = 0; i < v.size(); i++) {\n    os << v[i]\
    \ << (i + 1 != v.size()?\" \":\"\");\n  }\n  return os;\n}\n\ntemplate< typename\
    \ T >\nistream& operator>>(istream& is, vector< T >& v) {\n  for (T& in : v) is\
    \ >> in;\n  return is;\n}\n\ntemplate< typename T = int64_t >\nvector< T > make_v(size_t\
    \ a) {\n  return vector< T >(a);\n}\n\ntemplate< typename T, typename... Ts >\n\
    auto make_v(size_t a, Ts... ts) {\n  return vector< decltype(make_v< T >(ts...))\
    \ >(a, make_v< T >(ts...));\n}\n\ntemplate< typename T, typename V >\ntypename\
    \ enable_if< is_class< T >::value == 0 >::type fill_v(T& t, const V& v) {\n  t\
    \ = v;\n}\n\ntemplate< typename T, typename V >\ntypename enable_if< is_class<\
    \ T >::value != 0 >::type fill_v(T& t, const V& v) {\n  for (auto& e : t) fill_v(e,\
    \ v);\n}\n\ntemplate< typename F >\nstruct FixPoint : F {\n  explicit FixPoint(F&&\
    \ f) : F(forward< F >(f)) {}\n\n  template< typename... Args >\n  decltype(auto)\
    \ operator()(Args &&... args) const {\n    return F::operator()(*this, forward<\
    \ Args >(args)...);\n  }\n};\n\ntemplate< typename F >\ninline decltype(auto)\
    \ MFP(F&& f) {\n  return FixPoint< F >{forward< F >(f)};\n}\n#line 1 \"Math/kth-root-integer.hpp\"\
    \n// return floor( a^(1/k) )\nuint64_t kth_root_integer(uint64_t a, int k) {\n\
    \  if (k == 1) return a;\n  auto check = [&](uint32_t x) {\n    uint64_t mul =\
    \ 1;\n    for (int j = 0; j < k; j++) {\n      if (__builtin_mul_overflow(mul,\
    \ x, &mul)) return false;\n    }\n    return mul <= a;\n  };\n  uint64_t ret =\
    \ 0;\n  for (int i = 31; i >= 0; i--) {\n    if (check(ret | (1u << i))) ret |=\
    \ 1u << i;\n  }\n  return ret;\n}\n#line 1 \"Math/prime-table.hpp\"\nvector<bool>\
    \ prime_table(int n) {\n  vector<bool> prime(n + 1, true);\n  if (n >= 0) prime[0]\
    \ = false;\n  if (n >= 1) prime[1] = false;\n  for (int i = 2; i * i <= n; i++)\
    \ {\n    if (!prime[i]) continue;\n    for (int j = i * i; j <= n; j += i) {\n\
    \      prime[j] = false;\n    }\n  }\n  return prime;\n}\n#line 3 \"Math/prime-count.hpp\"\
    \n\n/**\n * return pi(N), the number of primes <= N\n */\ntemplate<int64_t LIM\
    \ = 100000000000LL>\nstruct PrimeCount {\nprivate:\n  int64_t sq;\n  vector<bool>\
    \ prime;\n  vector<int64_t> prime_sum, primes;\n\n  int64_t p2(int64_t x, int64_t\
    \ y) {\n    if (x < 4) return 0;\n    int64_t a = pi(y);\n    int64_t b = pi(kth_root_integer(x,\
    \ 2));\n    if (a >= b) return 0;\n    int64_t sum = (a - 2) * (a + 1) / 2 - (b\
    \ - 2) * (b + 1) / 2;\n    for (int64_t i = a; i < b; i++) sum += pi(x / primes[i]);\n\
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
    };\n#line 5 \"Verify/LC_counting_primes.test.cpp\"\n\nint main() {\n  int64_t\
    \ n;\n  cin >> n;\n  PrimeCount<> pc;\n  cout << pc.pi(n) << nl;\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/counting_primes\"\n\n#include\
    \ \"../Template/template.hpp\"\n#include \"../Math/prime-count.hpp\"\n\nint main()\
    \ {\n  int64_t n;\n  cin >> n;\n  PrimeCount<> pc;\n  cout << pc.pi(n) << nl;\n\
    }"
  dependsOn:
  - Template/template.hpp
  - Math/prime-count.hpp
  - Math/kth-root-integer.hpp
  - Math/prime-table.hpp
  isVerificationFile: true
  path: Verify/LC_counting_primes.test.cpp
  requiredBy: []
  timestamp: '2022-05-18 14:29:14+02:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Verify/LC_counting_primes.test.cpp
layout: document
redirect_from:
- /verify/Verify/LC_counting_primes.test.cpp
- /verify/Verify/LC_counting_primes.test.cpp.html
title: Verify/LC_counting_primes.test.cpp
---
