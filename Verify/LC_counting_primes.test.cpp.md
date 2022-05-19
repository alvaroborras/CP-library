---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: Math/kth-root-integer.hpp
    title: Math/kth-root-integer.hpp
  - icon: ':x:'
    path: Math/prime-count.hpp
    title: Math/prime-count.hpp
  - icon: ':x:'
    path: Math/prime-table.hpp
    title: Math/prime-table.hpp
  - icon: ':x:'
    path: Template/template.hpp
    title: Template/template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/counting_primes
    links:
    - https://judge.yosupo.jp/problem/counting_primes
  bundledCode: "#line 1 \"Verify/LC_counting_primes.test.cpp\"\n#define PROBLEM \"\
    https://judge.yosupo.jp/problem/counting_primes\"\n\n#line 1 \"Template/template.hpp\"\
    \n#include <bits/stdc++.h>\nusing namespace std;\n\n#define reps(x, s) for (ll\
    \ x = 0; (x) < (ll)(s).size(); (x)++)\n#define chmin(x, y) (x) = min((x), (y))\n\
    #define chmax(x, y) (x) = max((x), (y))\n#define all(x) (x).begin(), (x).end()\n\
    #define rall(x) (x).rbegin(), (x).rend()\n#define outl(...) dump_func(__VA_ARGS__)\n\
    #define outf(x) cout << fixed << setprecision(16) << (x) << nl\n#define fastio\
    \ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)\n#define nl \"\\n\"\n#define\
    \ pb push_back\n#define fi first\n#define se second\n#define inf 2e18\n#define\
    \ eps 1e-9\nconst double PI = 3.1415926535897932384626433;\n\ntypedef long long\
    \ ll;\ntypedef unsigned long long ull;\ntypedef pair<ll, ll> P;\ntypedef vector<int>\
    \ vi;\ntypedef vector<vi> vvi;\ntypedef vector<pair<int, int>> vpii;\n\nconst\
    \ int mod = 1e9 + 7;\n\ntemplate <class S, class T>\npair<S, T>& operator+=(pair<S,\
    \ T>& s, const pair<S, T>& t) {\n  s.first += t.first, s.second += t.second;\n\
    \  return s;\n}\ntemplate <class S, class T>\npair<S, T>& operator-=(pair<S, T>&\
    \ s, const pair<S, T>& t) {\n  s.first -= t.first, s.second -= t.second;\n  return\
    \ s;\n}\ntemplate <class S, class T>\npair<S, T> operator+(const pair<S, T>& s,\
    \ const pair<S, T>& t) {\n  return pair<S, T>(s.first + t.first, s.second + t.second);\n\
    }\ntemplate <class S, class T>\npair<S, T> operator-(const pair<S, T>& s, const\
    \ pair<S, T>& t) {\n  return pair<S, T>(s.first - t.first, s.second - t.second);\n\
    }\ntemplate <class T> T dot(const pair<T, T>& s, const pair<T, T>& t) {\n  return\
    \ s.first * t.first + s.second * t.second;\n}\ntemplate <class T> T cross(const\
    \ pair<T, T>& s, const pair<T, T>& t) {\n  return s.first * t.second - s.second\
    \ * t.first;\n}\n\ntemplate <typename T> ostream& operator<<(ostream& os, vector<T>&\
    \ vec) {\n  reps(i, vec) os << vec[i] << \" \";\n  return os;\n}\ntemplate <typename\
    \ T> ostream& operator<<(ostream& os, const vector<T>& vec) {\n  reps(i, vec)\
    \ os << vec[i] << \" \";\n  return os;\n}\ntemplate <typename T> ostream& operator<<(ostream&\
    \ os, list<T>& ls) {\n  for (auto x : ls)\n    os << x << \" \";\n  return os;\n\
    }\ntemplate <typename T> ostream& operator<<(ostream& os, const list<T>& ls) {\n\
    \  for (auto x : ls)\n    os << x << \" \";\n  return os;\n}\ntemplate <typename\
    \ T> ostream& operator<<(ostream& os, deque<T>& deq) {\n  reps(i, deq) os << deq[i]\
    \ << \" \";\n  return os;\n}\ntemplate <typename T, typename U>\nostream& operator<<(ostream&\
    \ os, pair<T, U>& ope) {\n  os << \"(\" << ope.first << \", \" << ope.second <<\
    \ \")\";\n  return os;\n}\ntemplate <typename T, typename U>\nostream& operator<<(ostream&\
    \ os, const pair<T, U>& ope) {\n  os << \"(\" << ope.first << \", \" << ope.second\
    \ << \")\";\n  return os;\n}\ntemplate <typename T, typename U>\nostream& operator<<(ostream&\
    \ os, map<T, U>& ope) {\n  for (auto p : ope)\n    os << \"(\" << p.first << \"\
    , \" << p.second << \"),\";\n  return os;\n}\ntemplate <typename T> ostream& operator<<(ostream&\
    \ os, set<T>& ope) {\n  for (auto x : ope)\n    os << x << \" \";\n  return os;\n\
    }\ntemplate <typename T> ostream& operator<<(ostream& os, multiset<T>& ope) {\n\
    \  for (auto x : ope)\n    os << x << \" \";\n  return os;\n}\ntemplate <typename\
    \ T> void outa(T a[], ll s, ll t) {\n  rep(i, s, t) {\n    cout << a[i];\n   \
    \ if (i < t)\n      cout << \" \";\n  }\n  cout << nl;\n}\ntemplate <typename\
    \ T, size_t N>\nostream& operator<<(ostream& os, array<T, N>& arr) {\n  reps(i,\
    \ arr) os << arr[i] << \" \";\n  return os;\n}\ntemplate <typename T, size_t N>\n\
    ostream& operator<<(ostream& os, const array<T, N>& arr) {\n  reps(i, arr) os\
    \ << arr[i] << \" \";\n  return os;\n}\nvoid dump_func() { cout << nl; }\ntemplate\
    \ <class Head, class... Tail>\nvoid dump_func(Head&& head, Tail &&...tail) {\n\
    \  cout << head;\n  if (sizeof...(Tail) > 0)\n    cout << \" \";\n  dump_func(std::move(tail)...);\n\
    }\n#line 1 \"Math/kth-root-integer.hpp\"\n// return floor( a^(1/k) )\nuint64_t\
    \ kth_root_integer(uint64_t a, int k) {\n  if (k == 1) return a;\n  auto check\
    \ = [&](uint32_t x) {\n    uint64_t mul = 1;\n    for (int j = 0; j < k; j++)\
    \ {\n      if (__builtin_mul_overflow(mul, x, &mul)) return false;\n    }\n  \
    \  return mul <= a;\n  };\n  uint64_t ret = 0;\n  for (int i = 31; i >= 0; i--)\
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
  timestamp: '2022-05-19 09:20:43+02:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: Verify/LC_counting_primes.test.cpp
layout: document
redirect_from:
- /verify/Verify/LC_counting_primes.test.cpp
- /verify/Verify/LC_counting_primes.test.cpp.html
title: Verify/LC_counting_primes.test.cpp
---
