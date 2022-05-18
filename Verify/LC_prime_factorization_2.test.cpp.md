---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: Math/prime_factor.hpp
    title: Math/prime_factor.hpp
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
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_A
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_A
  bundledCode: "#line 1 \"Verify/LC_prime_factorization_2.test.cpp\"\n#define PROBLEM\
    \ \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_A\"\n\n#line\
    \ 1 \"Template/template.hpp\"\n#include <iostream>\n#include <iomanip>\n#include\
    \ <cstdio>\n#include <cmath>\n#include <ctime>\n#include <cstdlib>\n#include <cassert>\n\
    #include <vector>\n#include <list>\n#include <stack>\n#include <queue>\n#include\
    \ <deque>\n#include <map>\n#include <set>\n#include <bitset>\n#include <string>\n\
    #include <algorithm>\n#include <utility>\n#include <complex>\n#include <array>\n\
    #include <random>\n#include <climits>\n#include <unordered_set>\n#include <unordered_map>\n\
    using namespace std;\n\n#define rep(x, s, t) for (ll x = (s); (x) <= (t); (x)++)\n\
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
    \ MFP(F&& f) {\n  return FixPoint< F >{forward< F >(f)};\n}\n#line 1 \"Math/prime_factor.hpp\"\
    \nmap<uint64_t, int> prime_factor(uint64_t n) {\n  map<uint64_t, int> ret;\n \
    \ for (uint64_t i = 2; i * i <= n; i++) {\n    while (n % i == 0) {\n      ret[i]++;\n\
    \      n /= i;\n    }\n  }\n  if (n != 1) ret[n] = 1;\n  return ret;\n}\n#line\
    \ 5 \"Verify/LC_prime_factorization_2.test.cpp\"\n\nint main() {\n  fastio;\n\n\
    \  uint32_t N;\n  cin >> N;\n\n  auto factors = prime_factor(N);\n  cout << N\
    \ << \":\";\n  for (auto& [t, cnt] : factors) {\n    while (cnt--)\n      cout\
    \ << \" \" << t;\n  }\n  cout << nl;\n\n  return 0;\n}\n"
  code: "#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_A\"\
    \n\n#include \"../Template/template.hpp\"\n#include \"../Math/prime_factor.hpp\"\
    \n\nint main() {\n  fastio;\n\n  uint32_t N;\n  cin >> N;\n\n  auto factors =\
    \ prime_factor(N);\n  cout << N << \":\";\n  for (auto& [t, cnt] : factors) {\n\
    \    while (cnt--)\n      cout << \" \" << t;\n  }\n  cout << nl;\n\n  return\
    \ 0;\n}\n"
  dependsOn:
  - Template/template.hpp
  - Math/prime_factor.hpp
  isVerificationFile: true
  path: Verify/LC_prime_factorization_2.test.cpp
  requiredBy: []
  timestamp: '2022-05-18 14:29:14+02:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: Verify/LC_prime_factorization_2.test.cpp
layout: document
redirect_from:
- /verify/Verify/LC_prime_factorization_2.test.cpp
- /verify/Verify/LC_prime_factorization_2.test.cpp.html
title: Verify/LC_prime_factorization_2.test.cpp
---