---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: Math/fast_prime_factorization.hpp
    title: Math/fast_prime_factorization.hpp
  - icon: ':question:'
    path: Template/template.hpp
    title: Template/template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/factorize
    links:
    - https://judge.yosupo.jp/problem/factorize
  bundledCode: "#line 1 \"Verify/LC_prime_factorization.test.cpp\"\n#define PROBLEM\
    \ \"https://judge.yosupo.jp/problem/factorize\"\n\n#line 1 \"Template/template.hpp\"\
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
    \ MFP(F&& f) {\n  return FixPoint< F >{forward< F >(f)};\n}\n#line 1 \"Math/fast_prime_factorization.hpp\"\
    \n\nnamespace fast_factorize {\n  using uint64_t = uint64_t;\n\n  mt19937_64 mt(random_device{}());\n\
    \  uint64_t rng(uint64_t n) {\n    return uniform_int_distribution<uint64_t>(0,\
    \ n - 1)(mt);\n  }\n\n  struct montgomery64 {\n    using i64 = int64_t;\n    using\
    \ u64 = uint64_t;\n    using u128 = __uint128_t;\n\n    static u64 mod, r, n2;\n\
    \n    static u64 get_r() {\n      u64 res = mod;\n      for (int _ = 0; _ < 5;\
    \ _++)\n        res *= 2 - mod * res;\n      return -res;\n    }\n\n    static\
    \ void set_mod(u64 m) {\n      assert(m < (1ULL << 62));\n      assert((m & 1)\
    \ == 1);\n      mod = m;\n      n2 = -u128(m) % m;\n      r = get_r();\n     \
    \ assert(r * mod == -1ULL);\n    }\n    static u64 get_mod() { return mod; }\n\
    \n    static u64 reduce(const u128& x) noexcept {\n      return (x + u128(u64(x)\
    \ * r) * mod) >> 64;\n    }\n\n    u64 v;\n    montgomery64() : v(0) {}\n    montgomery64(const\
    \ i64& v) : v(reduce((u128(v) + mod)* n2)) {}\n    u64 value() const {\n     \
    \ u64 res = reduce(v);\n      return res >= mod?res - mod:res;\n    }\n    montgomery64&\
    \ operator+=(const montgomery64& rhs) {\n      if (i64(v += rhs.v - (mod << 1))\
    \ < 0)\n        v += mod << 1;\n      return *this;\n    }\n    montgomery64&\
    \ operator-=(const montgomery64& rhs) {\n      if (i64(v -= rhs.v) < 0)\n    \
    \    v += mod << 1;\n      return *this;\n    }\n    montgomery64& operator*=(const\
    \ montgomery64& rhs) {\n      v = reduce(u128(v) * rhs.v);\n      return *this;\n\
    \    }\n    montgomery64 operator+(const montgomery64& rhs) const {\n      return\
    \ montgomery64(*this) += rhs;\n    }\n    montgomery64 operator-(const montgomery64&\
    \ rhs) const {\n      return montgomery64(*this) -= rhs;\n    }\n    montgomery64\
    \ operator*(const montgomery64& rhs) const {\n      return montgomery64(*this)\
    \ *= rhs;\n    }\n    bool operator==(const montgomery64& rhs) const {\n     \
    \ return (v >= mod?v - mod:v) == (rhs.v >= mod?rhs.v - mod:rhs.v);\n    }\n  \
    \  bool operator!=(const montgomery64& rhs) const {\n      return (v >= mod?v\
    \ - mod:v) != (rhs.v >= mod?rhs.v - mod:rhs.v);\n    }\n    montgomery64 pow(u64\
    \ n) const {\n      montgomery64 self(*this), res(1);\n      while (n > 0) {\n\
    \        if (n & 1)\n          res *= self;\n        self *= self;\n        n\
    \ >>= 1;\n      }\n      return res;\n    }\n    friend istream& operator>>(istream&\
    \ s, montgomery64& rhs) {\n      i64 v;\n      rhs = montgomery64{ (s >> v, v)\
    \ };\n      return s;\n    }\n    friend ostream& operator<<(ostream& s, const\
    \ montgomery64& rhs) {\n      return s << rhs.v;\n    }\n  };\n  typename montgomery64::u64\
    \ montgomery64::mod, montgomery64::r, montgomery64::n2;\n\n  bool miller_rabin(const\
    \ uint64_t& n, const vector<uint64_t>& as) {\n    if (montgomery64::get_mod()\
    \ != n)\n      montgomery64::set_mod(n);\n    const uint64_t d = (n - 1) >> __builtin_ctzll(n\
    \ - 1);\n    const montgomery64 one(1), minus_one(n - 1);\n    for (uint64_t a:as)\
    \ {\n      if (n <= a)\n        break;\n      uint64_t t = d;\n      montgomery64\
    \ y = montgomery64(a).pow(t);\n      while (t != n - 1 && y != one && y != minus_one)\
    \ {\n        y *= y;\n        t <<= 1;\n      }\n      if (y != minus_one && t\
    \ % 2 == 0)\n        return false;\n    }\n    return true;\n  }\n  bool is_prime(const\
    \ uint64_t& n) {\n    if (n == 2 || n == 3 || n == 5 || n == 7)\n      return\
    \ true;\n    if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)\n     \
    \ return false;\n    if (n < 121)\n      return n > 1;\n    if (n < (1ULL << 32))\n\
    \      return miller_rabin(n, { 2, 7, 61 });\n    return miller_rabin(n, { 2,\
    \ 325, 9375, 28178, 450775, 9780504, 1795265022 });\n  }\n\n  uint64_t pollard_rho(const\
    \ uint64_t& n) {\n    if (~n & 1)\n      return 2;\n    if (is_prime(n))\n   \
    \   return n;\n    if (montgomery64::get_mod() != n)\n      montgomery64::set_mod(n);\n\
    \    montgomery64 R, one(1);\n    auto f = [&](const montgomery64& x) { return\
    \ x * x + R; };\n    constexpr int m = 128;\n    while (1) {\n      montgomery64\
    \ x, y, ys, q = one;\n      R = rng(n - 2) + 2, y = rng(n - 2) + 2;\n      uint64_t\
    \ g = 1;\n      for (int r = 1; g == 1; r <<= 1) {\n        x = y;\n        for\
    \ (int i = 0; i < r; i++)\n          y = f(y);\n        for (int k = 0; g == 1\
    \ && k < r; k += m) {\n          ys = y;\n          for (int i = 0; i < min(m,\
    \ r - k); i++)\n            q *= x - (y = f(y));\n          g = gcd(q.value(),\
    \ n);\n        }\n      }\n      if (g == n) {\n        do\n          g = gcd((x\
    \ - (ys = f(ys))).value(), n);\n        while (g == 1);\n      }\n      if (g\
    \ != n)\n        return g;\n    }\n    cerr << \"failed\" << '\\n';\n    assert(false);\n\
    \    return -1;\n  }\n\n  vector<uint64_t> inner_factorize(uint64_t n) {\n   \
    \ if (n <= 1)\n      return {};\n    uint64_t p = pollard_rho(n);\n    if (p ==\
    \ n)\n      return { p };\n    auto l = inner_factorize(p);\n    auto r = inner_factorize(n\
    \ / p);\n    copy(r.begin(), r.end(), back_inserter(l));\n    return l;\n  }\n\
    \  vector<uint64_t> factorize(uint64_t n) {\n    auto res = inner_factorize(n);\n\
    \    sort(res.begin(), res.end());\n    return res;\n  }\n} // namespace fast_factorize\n\
    #line 5 \"Verify/LC_prime_factorization.test.cpp\"\n\nint main() {\n  fastio;\n\
    \  int Q;\n  cin >> Q;\n\n  uint64_t X;\n  for (int q = 0; q < Q; ++q) {\n   \
    \ cin >> X;\n    auto ret = fast_factorize::factorize(X);\n    sort(ret.begin(),\
    \ ret.end());\n    cout << ret.size();\n    for (auto& x : ret) cout << ' ' <<\
    \ x;\n    cout << '\\n';\n  }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/factorize\"\n\n#include\
    \ \"../Template/template.hpp\"\n#include \"../Math/fast_prime_factorization.hpp\"\
    \n\nint main() {\n  fastio;\n  int Q;\n  cin >> Q;\n\n  uint64_t X;\n  for (int\
    \ q = 0; q < Q; ++q) {\n    cin >> X;\n    auto ret = fast_factorize::factorize(X);\n\
    \    sort(ret.begin(), ret.end());\n    cout << ret.size();\n    for (auto& x\
    \ : ret) cout << ' ' << x;\n    cout << '\\n';\n  }\n}\n"
  dependsOn:
  - Template/template.hpp
  - Math/fast_prime_factorization.hpp
  isVerificationFile: true
  path: Verify/LC_prime_factorization.test.cpp
  requiredBy: []
  timestamp: '2022-05-18 14:29:14+02:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: Verify/LC_prime_factorization.test.cpp
layout: document
redirect_from:
- /verify/Verify/LC_prime_factorization.test.cpp
- /verify/Verify/LC_prime_factorization.test.cpp.html
title: Verify/LC_prime_factorization.test.cpp
---
