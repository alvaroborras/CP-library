---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Verify/AIZU_bigInt_addition.test.cpp
    title: Verify/AIZU_bigInt_addition.test.cpp
  - icon: ':heavy_check_mark:'
    path: Verify/AIZU_bigInt_difference.test.cpp
    title: Verify/AIZU_bigInt_difference.test.cpp
  - icon: ':heavy_check_mark:'
    path: Verify/AIZU_bigInt_division.test.cpp
    title: Verify/AIZU_bigInt_division.test.cpp
  - icon: ':heavy_check_mark:'
    path: Verify/AIZU_bigInt_modulo.test.cpp
    title: Verify/AIZU_bigInt_modulo.test.cpp
  - icon: ':heavy_check_mark:'
    path: Verify/AIZU_bigInt_multiplication.test.cpp
    title: Verify/AIZU_bigInt_multiplication.test.cpp
  - icon: ':heavy_check_mark:'
    path: Verify/AIZU_bigInt_multiplication2.test.cpp
    title: Verify/AIZU_bigInt_multiplication2.test.cpp
  - icon: ':heavy_check_mark:'
    path: Verify/LC_enumerate_primes.test.cpp
    title: Verify/LC_enumerate_primes.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Template/template.hpp\"\n#include <bits/stdc++.h>\nusing\
    \ namespace std;\n\n#define rep(x, s, t) for (ll x = (s); (x) <= (t); (x)++)\n\
    #define per(x, s, t) for (ll x = (s); (x) >= (t); (x)--)\n#define reps(x, s) for\
    \ (ll x = 0; (x) < (ll)(s).size(); (x)++)\n#define chmin(x, y) (x) = min((x),\
    \ (y))\n#define chmax(x, y) (x) = max((x), (y))\n#define sz(x) ((ll)(x).size())\n\
    #define all(x) (x).begin(), (x).end()\n#define rall(x) (x).rbegin(), (x).rend()\n\
    #define outl(...) dump_func(__VA_ARGS__)\n#define outf(x) cout << fixed << setprecision(16)\
    \ << (x) << nl\n\n#define nl \"\\n\"\n#define pb push_back\n#define fi first\n\
    #define se second\n#define inf 2e18\n#define eps 1e-9\nconst double PI = 3.1415926535897932384626433;\n\
    \ntypedef long long ll;\ntypedef unsigned long long ull;\ntypedef pair<ll, ll>\
    \ P;\n\nconst int mod = 1000000007;\n// const int mod = 998244353;\n\nstruct mint\
    \ {\n  int x;\n  mint(ll y = 0) {\n    if (y < 0 || y >= mod)\n      y = (y %\
    \ mod + mod) % mod;\n    x = y;\n  }\n  // mint(const mint& ope) : x(ope.x) {};\n\
    \n  mint operator-() { return mint(-x); }\n  mint operator+(const mint& ope) {\
    \ return mint(x) += ope; }\n  mint operator-(const mint& ope) { return mint(x)\
    \ -= ope; }\n  mint operator*(const mint& ope) { return mint(x) *= ope; }\n  mint\
    \ operator/(const mint& ope) { return mint(x) /= ope; }\n  mint& operator+=(const\
    \ mint& ope) {\n    x += ope.x;\n    if (x >= mod)\n      x -= mod;\n    return\
    \ *this;\n  }\n  mint& operator-=(const mint& ope) {\n    x += mod - ope.x;\n\
    \    if (x >= mod)\n      x -= mod;\n    return *this;\n  }\n  mint& operator*=(const\
    \ mint& ope) {\n    ll tmp = x;\n    tmp *= ope.x, tmp %= mod;\n    x = tmp;\n\
    \    return *this;\n  }\n  mint& operator/=(const mint& ope) {\n    ll n = mod\
    \ - 2;\n    mint mul = ope;\n    while (n) {\n      if (n & 1)\n        *this\
    \ *= mul;\n      mul *= mul;\n      n >>= 1;\n    }\n    return *this;\n  }\n\
    \  mint inverse() { return mint(1) / *this; }\n  bool operator==(const mint& ope)\
    \ { return x == ope.x; }\n  bool operator!=(const mint& ope) { return x != ope.x;\
    \ }\n  bool operator<(const mint& ope) const { return x < ope.x; }\n};\nmint modpow(mint\
    \ a, ll n) {\n  if (n == 0)\n    return mint(1);\n  if (n % 2)\n    return a *\
    \ modpow(a, n - 1);\n  else\n    return modpow(a * a, n / 2);\n}\nistream& operator>>(istream&\
    \ is, mint& ope) {\n  ll t;\n  is >> t, ope.x = t;\n  return is;\n}\nostream&\
    \ operator<<(ostream& os, mint& ope) { return os << ope.x; }\nostream& operator<<(ostream&\
    \ os, const mint& ope) { return os << ope.x; }\n\nll modpow(ll a, ll n, ll mod)\
    \ {\n  if (n == 0)\n    return 1;\n  if (n % 2)\n    return ((a % mod) * (modpow(a,\
    \ n - 1, mod) % mod)) % mod;\n  else\n    return modpow((a * a) % mod, n / 2,\
    \ mod) % mod;\n}\n\nvector<mint> fact, fact_inv;\nvoid make_fact(int n) {\n  fact.resize(n\
    \ + 1), fact_inv.resize(n + 1);\n  fact[0] = mint(1);\n  rep(i, 1, n) fact[i]\
    \ = fact[i - 1] * mint(i);\n  fact_inv[n] = fact[n].inverse();\n  per(i, n - 1,\
    \ 0) fact_inv[i] = fact_inv[i + 1] * mint(i + 1);\n}\nmint comb(int n, int k)\
    \ {\n  if (n < 0 || k < 0 || n < k)\n    return mint(0);\n  return fact[n] * fact_inv[k]\
    \ * fact_inv[n - k];\n}\nmint perm(int n, int k) { return comb(n, k) * fact[k];\
    \ }\ntemplate <typename T> T comb2(ll n, ll k) {\n  T ret = 1;\n  rep(i, 1, k)\
    \ ret *= n - k + i, ret /= i;\n  return ret;\n}\n\nvector<int> prime, pvec, qrime;\n\
    void make_prime(int n) {\n  prime.resize(n + 1);\n  rep(i, 2, n) {\n    if (prime[i]\
    \ == 0)\n      pvec.push_back(i), prime[i] = i;\n    for (auto p : pvec) {\n \
    \     if (i * p > n || p > prime[i])\n        break;\n      prime[i * p] = p;\n\
    \    }\n  }\n}\nvoid make_qrime(int n) {\n  qrime.resize(n + 1);\n  rep(i, 2,\
    \ n) {\n    int ni = i / prime[i];\n    if (prime[i] == prime[ni])\n      qrime[i]\
    \ = qrime[ni] * prime[i];\n    else\n      qrime[i] = prime[i];\n  }\n}\n\nbool\
    \ exceed(ll x, ll y, ll m) { return y > 0 && x >= m / y + 1; }\nvoid mark() {\
    \ cout << \"*\" << nl; }\nvoid yes() { cout << \"YES\" << nl; }\nvoid no() { cout\
    \ << \"NO\" << nl; }\nll floor(ll a, ll b) {\n  if (b < 0)\n    a *= -1, b *=\
    \ -1;\n  if (a >= 0)\n    return a / b;\n  else\n    return -((-a + b - 1) / b);\n\
    }\nll ceil(ll a, ll b) {\n  if (b < 0)\n    a *= -1, b *= -1;\n  if (a >= 0)\n\
    \    return (a + b - 1) / b;\n  else\n    return -((-a) / b);\n}\nll modulo(ll\
    \ a, ll b) {\n  b = abs(b);\n  return a - floor(a, b) * b;\n}\nll sgn(ll x) {\n\
    \  if (x > 0)\n    return 1;\n  if (x < 0)\n    return -1;\n  return 0;\n}\nll\
    \ gcd(ll a, ll b) {\n  if (b == 0)\n    return a;\n  return gcd(b, a % b);\n}\n\
    ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }\nll arith(ll x) { return x *\
    \ (x + 1) / 2; }\nll arith(ll l, ll r) { return arith(r) - arith(l - 1); }\nll\
    \ digitnum(ll x, ll b = 10) {\n  ll ret = 0;\n  for (; x; x /= b)\n    ret++;\n\
    \  return ret;\n}\nll digitsum(ll x, ll b = 10) {\n  ll ret = 0;\n  for (; x;\
    \ x /= b)\n    ret += x % b;\n  return ret;\n}\nstring lltos(ll x, ll b = 10)\
    \ {\n  string ret;\n  for (; x; x /= b)\n    ret += x % b + '0';\n  reverse(all(ret));\n\
    \  return ret;\n}\nll stoll(string& s, ll b = 10) {\n  ll ret = 0;\n  for (auto\
    \ c : s)\n    ret *= b, ret += c - '0';\n  return ret;\n}\ntemplate <typename\
    \ T> void uniq(T& vec) {\n  sort(all(vec));\n  vec.erase(unique(all(vec)), vec.end());\n\
    }\nint popcount(ull x) {\n  x -= ((x >> 1) & 0x5555555555555555ULL),\n    x =\
    \ (x & 0x3333333333333333ULL) + ((x >> 2) & 0x3333333333333333ULL);\n  return\
    \ (((x + (x >> 4)) & 0x0F0F0F0F0F0F0F0FULL) * 0x0101010101010101ULL) >>\n    56;\n\
    }\n\ntemplate <class S, class T>\npair<S, T>& operator+=(pair<S, T>& s, const\
    \ pair<S, T>& t) {\n  s.first += t.first, s.second += t.second;\n  return s;\n\
    }\ntemplate <class S, class T>\npair<S, T>& operator-=(pair<S, T>& s, const pair<S,\
    \ T>& t) {\n  s.first -= t.first, s.second -= t.second;\n  return s;\n}\ntemplate\
    \ <class S, class T>\npair<S, T> operator+(const pair<S, T>& s, const pair<S,\
    \ T>& t) {\n  return pair<S, T>(s.first + t.first, s.second + t.second);\n}\n\
    template <class S, class T>\npair<S, T> operator-(const pair<S, T>& s, const pair<S,\
    \ T>& t) {\n  return pair<S, T>(s.first - t.first, s.second - t.second);\n}\n\
    template <class T> T dot(const pair<T, T>& s, const pair<T, T>& t) {\n  return\
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
    }\n"
  code: "#include <bits/stdc++.h>\nusing namespace std;\n\n#define rep(x, s, t) for\
    \ (ll x = (s); (x) <= (t); (x)++)\n#define per(x, s, t) for (ll x = (s); (x) >=\
    \ (t); (x)--)\n#define reps(x, s) for (ll x = 0; (x) < (ll)(s).size(); (x)++)\n\
    #define chmin(x, y) (x) = min((x), (y))\n#define chmax(x, y) (x) = max((x), (y))\n\
    #define sz(x) ((ll)(x).size())\n#define all(x) (x).begin(), (x).end()\n#define\
    \ rall(x) (x).rbegin(), (x).rend()\n#define outl(...) dump_func(__VA_ARGS__)\n\
    #define outf(x) cout << fixed << setprecision(16) << (x) << nl\n\n#define nl \"\
    \\n\"\n#define pb push_back\n#define fi first\n#define se second\n#define inf\
    \ 2e18\n#define eps 1e-9\nconst double PI = 3.1415926535897932384626433;\n\ntypedef\
    \ long long ll;\ntypedef unsigned long long ull;\ntypedef pair<ll, ll> P;\n\n\
    const int mod = 1000000007;\n// const int mod = 998244353;\n\nstruct mint {\n\
    \  int x;\n  mint(ll y = 0) {\n    if (y < 0 || y >= mod)\n      y = (y % mod\
    \ + mod) % mod;\n    x = y;\n  }\n  // mint(const mint& ope) : x(ope.x) {};\n\n\
    \  mint operator-() { return mint(-x); }\n  mint operator+(const mint& ope) {\
    \ return mint(x) += ope; }\n  mint operator-(const mint& ope) { return mint(x)\
    \ -= ope; }\n  mint operator*(const mint& ope) { return mint(x) *= ope; }\n  mint\
    \ operator/(const mint& ope) { return mint(x) /= ope; }\n  mint& operator+=(const\
    \ mint& ope) {\n    x += ope.x;\n    if (x >= mod)\n      x -= mod;\n    return\
    \ *this;\n  }\n  mint& operator-=(const mint& ope) {\n    x += mod - ope.x;\n\
    \    if (x >= mod)\n      x -= mod;\n    return *this;\n  }\n  mint& operator*=(const\
    \ mint& ope) {\n    ll tmp = x;\n    tmp *= ope.x, tmp %= mod;\n    x = tmp;\n\
    \    return *this;\n  }\n  mint& operator/=(const mint& ope) {\n    ll n = mod\
    \ - 2;\n    mint mul = ope;\n    while (n) {\n      if (n & 1)\n        *this\
    \ *= mul;\n      mul *= mul;\n      n >>= 1;\n    }\n    return *this;\n  }\n\
    \  mint inverse() { return mint(1) / *this; }\n  bool operator==(const mint& ope)\
    \ { return x == ope.x; }\n  bool operator!=(const mint& ope) { return x != ope.x;\
    \ }\n  bool operator<(const mint& ope) const { return x < ope.x; }\n};\nmint modpow(mint\
    \ a, ll n) {\n  if (n == 0)\n    return mint(1);\n  if (n % 2)\n    return a *\
    \ modpow(a, n - 1);\n  else\n    return modpow(a * a, n / 2);\n}\nistream& operator>>(istream&\
    \ is, mint& ope) {\n  ll t;\n  is >> t, ope.x = t;\n  return is;\n}\nostream&\
    \ operator<<(ostream& os, mint& ope) { return os << ope.x; }\nostream& operator<<(ostream&\
    \ os, const mint& ope) { return os << ope.x; }\n\nll modpow(ll a, ll n, ll mod)\
    \ {\n  if (n == 0)\n    return 1;\n  if (n % 2)\n    return ((a % mod) * (modpow(a,\
    \ n - 1, mod) % mod)) % mod;\n  else\n    return modpow((a * a) % mod, n / 2,\
    \ mod) % mod;\n}\n\nvector<mint> fact, fact_inv;\nvoid make_fact(int n) {\n  fact.resize(n\
    \ + 1), fact_inv.resize(n + 1);\n  fact[0] = mint(1);\n  rep(i, 1, n) fact[i]\
    \ = fact[i - 1] * mint(i);\n  fact_inv[n] = fact[n].inverse();\n  per(i, n - 1,\
    \ 0) fact_inv[i] = fact_inv[i + 1] * mint(i + 1);\n}\nmint comb(int n, int k)\
    \ {\n  if (n < 0 || k < 0 || n < k)\n    return mint(0);\n  return fact[n] * fact_inv[k]\
    \ * fact_inv[n - k];\n}\nmint perm(int n, int k) { return comb(n, k) * fact[k];\
    \ }\ntemplate <typename T> T comb2(ll n, ll k) {\n  T ret = 1;\n  rep(i, 1, k)\
    \ ret *= n - k + i, ret /= i;\n  return ret;\n}\n\nvector<int> prime, pvec, qrime;\n\
    void make_prime(int n) {\n  prime.resize(n + 1);\n  rep(i, 2, n) {\n    if (prime[i]\
    \ == 0)\n      pvec.push_back(i), prime[i] = i;\n    for (auto p : pvec) {\n \
    \     if (i * p > n || p > prime[i])\n        break;\n      prime[i * p] = p;\n\
    \    }\n  }\n}\nvoid make_qrime(int n) {\n  qrime.resize(n + 1);\n  rep(i, 2,\
    \ n) {\n    int ni = i / prime[i];\n    if (prime[i] == prime[ni])\n      qrime[i]\
    \ = qrime[ni] * prime[i];\n    else\n      qrime[i] = prime[i];\n  }\n}\n\nbool\
    \ exceed(ll x, ll y, ll m) { return y > 0 && x >= m / y + 1; }\nvoid mark() {\
    \ cout << \"*\" << nl; }\nvoid yes() { cout << \"YES\" << nl; }\nvoid no() { cout\
    \ << \"NO\" << nl; }\nll floor(ll a, ll b) {\n  if (b < 0)\n    a *= -1, b *=\
    \ -1;\n  if (a >= 0)\n    return a / b;\n  else\n    return -((-a + b - 1) / b);\n\
    }\nll ceil(ll a, ll b) {\n  if (b < 0)\n    a *= -1, b *= -1;\n  if (a >= 0)\n\
    \    return (a + b - 1) / b;\n  else\n    return -((-a) / b);\n}\nll modulo(ll\
    \ a, ll b) {\n  b = abs(b);\n  return a - floor(a, b) * b;\n}\nll sgn(ll x) {\n\
    \  if (x > 0)\n    return 1;\n  if (x < 0)\n    return -1;\n  return 0;\n}\nll\
    \ gcd(ll a, ll b) {\n  if (b == 0)\n    return a;\n  return gcd(b, a % b);\n}\n\
    ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }\nll arith(ll x) { return x *\
    \ (x + 1) / 2; }\nll arith(ll l, ll r) { return arith(r) - arith(l - 1); }\nll\
    \ digitnum(ll x, ll b = 10) {\n  ll ret = 0;\n  for (; x; x /= b)\n    ret++;\n\
    \  return ret;\n}\nll digitsum(ll x, ll b = 10) {\n  ll ret = 0;\n  for (; x;\
    \ x /= b)\n    ret += x % b;\n  return ret;\n}\nstring lltos(ll x, ll b = 10)\
    \ {\n  string ret;\n  for (; x; x /= b)\n    ret += x % b + '0';\n  reverse(all(ret));\n\
    \  return ret;\n}\nll stoll(string& s, ll b = 10) {\n  ll ret = 0;\n  for (auto\
    \ c : s)\n    ret *= b, ret += c - '0';\n  return ret;\n}\ntemplate <typename\
    \ T> void uniq(T& vec) {\n  sort(all(vec));\n  vec.erase(unique(all(vec)), vec.end());\n\
    }\nint popcount(ull x) {\n  x -= ((x >> 1) & 0x5555555555555555ULL),\n    x =\
    \ (x & 0x3333333333333333ULL) + ((x >> 2) & 0x3333333333333333ULL);\n  return\
    \ (((x + (x >> 4)) & 0x0F0F0F0F0F0F0F0FULL) * 0x0101010101010101ULL) >>\n    56;\n\
    }\n\ntemplate <class S, class T>\npair<S, T>& operator+=(pair<S, T>& s, const\
    \ pair<S, T>& t) {\n  s.first += t.first, s.second += t.second;\n  return s;\n\
    }\ntemplate <class S, class T>\npair<S, T>& operator-=(pair<S, T>& s, const pair<S,\
    \ T>& t) {\n  s.first -= t.first, s.second -= t.second;\n  return s;\n}\ntemplate\
    \ <class S, class T>\npair<S, T> operator+(const pair<S, T>& s, const pair<S,\
    \ T>& t) {\n  return pair<S, T>(s.first + t.first, s.second + t.second);\n}\n\
    template <class S, class T>\npair<S, T> operator-(const pair<S, T>& s, const pair<S,\
    \ T>& t) {\n  return pair<S, T>(s.first - t.first, s.second - t.second);\n}\n\
    template <class T> T dot(const pair<T, T>& s, const pair<T, T>& t) {\n  return\
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
    }"
  dependsOn: []
  isVerificationFile: false
  path: Template/template.hpp
  requiredBy: []
  timestamp: '2022-05-17 16:32:03+02:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Verify/AIZU_bigInt_addition.test.cpp
  - Verify/AIZU_bigInt_multiplication.test.cpp
  - Verify/AIZU_bigInt_division.test.cpp
  - Verify/AIZU_bigInt_difference.test.cpp
  - Verify/LC_enumerate_primes.test.cpp
  - Verify/AIZU_bigInt_modulo.test.cpp
  - Verify/AIZU_bigInt_multiplication2.test.cpp
documentation_of: Template/template.hpp
layout: document
redirect_from:
- /library/Template/template.hpp
- /library/Template/template.hpp.html
title: Template/template.hpp
---
