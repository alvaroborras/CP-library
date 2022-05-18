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
    path: Verify/AOJ_DSL_2_D.test.cpp
    title: Verify/AOJ_DSL_2_D.test.cpp
  - icon: ':heavy_check_mark:'
    path: Verify/LC_aplusb.test.cpp
    title: Verify/LC_aplusb.test.cpp
  - icon: ':heavy_check_mark:'
    path: Verify/LC_convolution_mod.test.cpp
    title: Verify/LC_convolution_mod.test.cpp
  - icon: ':heavy_check_mark:'
    path: Verify/LC_division_polynomials.test.cpp
    title: Verify/LC_division_polynomials.test.cpp
  - icon: ':heavy_check_mark:'
    path: Verify/LC_enumerate_primes.test.cpp
    title: Verify/LC_enumerate_primes.test.cpp
  - icon: ':heavy_check_mark:'
    path: Verify/LC_inversion_power_series.test.cpp
    title: Verify/LC_inversion_power_series.test.cpp
  - icon: ':heavy_check_mark:'
    path: Verify/LC_partition_function.test.cpp
    title: Verify/LC_partition_function.test.cpp
  - icon: ':heavy_check_mark:'
    path: Verify/LC_persistent_union_find.test.cpp
    title: Verify/LC_persistent_union_find.test.cpp
  - icon: ':heavy_check_mark:'
    path: Verify/LC_polynomial_taylor_shift.test.cpp
    title: Verify/LC_polynomial_taylor_shift.test.cpp
  - icon: ':heavy_check_mark:'
    path: Verify/LC_power_formal_series.test.cpp
    title: Verify/LC_power_formal_series.test.cpp
  - icon: ':x:'
    path: Verify/LC_prime_factorization.test.cpp
    title: Verify/LC_prime_factorization.test.cpp
  - icon: ':x:'
    path: Verify/LC_static_range_sum.test.cpp
    title: Verify/LC_static_range_sum.test.cpp
  - icon: ':x:'
    path: Verify/LC_stirling_numbers_second_kind.test.cpp
    title: Verify/LC_stirling_numbers_second_kind.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':question:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Template/template.hpp\"\n#include <iostream>\n#include <iomanip>\n\
    #include <cstdio>\n#include <cmath>\n#include <ctime>\n#include <cstdlib>\n#include\
    \ <cassert>\n#include <vector>\n#include <list>\n#include <stack>\n#include <queue>\n\
    #include <deque>\n#include <map>\n#include <set>\n#include <bitset>\n#include\
    \ <string>\n#include <algorithm>\n#include <utility>\n#include <complex>\n#include\
    \ <array>\n#include <random>\n#include <unordered_set>\n#include <unordered_map>\n\
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
    \ MFP(F&& f) {\n  return FixPoint< F >{forward< F >(f)};\n}\n"
  code: "#include <iostream>\n#include <iomanip>\n#include <cstdio>\n#include <cmath>\n\
    #include <ctime>\n#include <cstdlib>\n#include <cassert>\n#include <vector>\n\
    #include <list>\n#include <stack>\n#include <queue>\n#include <deque>\n#include\
    \ <map>\n#include <set>\n#include <bitset>\n#include <string>\n#include <algorithm>\n\
    #include <utility>\n#include <complex>\n#include <array>\n#include <random>\n\
    #include <unordered_set>\n#include <unordered_map>\nusing namespace std;\n\n#define\
    \ rep(x, s, t) for (ll x = (s); (x) <= (t); (x)++)\n#define per(x, s, t) for (ll\
    \ x = (s); (x) >= (t); (x)--)\n#define reps(x, s) for (ll x = 0; (x) < (ll)(s).size();\
    \ (x)++)\n#define chmin(x, y) (x) = min((x), (y))\n#define chmax(x, y) (x) = max((x),\
    \ (y))\n#define sz(x) ((ll)(x).size())\n#define all(x) (x).begin(), (x).end()\n\
    #define rall(x) (x).rbegin(), (x).rend()\n#define outl(...) dump_func(__VA_ARGS__)\n\
    #define outf(x) cout << fixed << setprecision(16) << (x) << nl\n#define fastio\
    \ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)\n#define nl \"\\n\"\n#define\
    \ pb push_back\n#define fi first\n#define se second\n#define inf 2e18\n#define\
    \ eps 1e-9\nconst double PI = 3.1415926535897932384626433;\n\ntypedef long long\
    \ ll;\ntypedef unsigned long long ull;\ntypedef pair<ll, ll> P;\n\nconst int mod\
    \ = 1e9 + 7;\n\ntemplate< typename T1, typename T2 >\nostream& operator<<(ostream&\
    \ os, const pair< T1, T2 >& p) {\n  os << p.first << \" \" << p.second;\n  return\
    \ os;\n}\n\ntemplate< typename T1, typename T2 >\nistream& operator>>(istream&\
    \ is, pair< T1, T2 >& p) {\n  is >> p.first >> p.second;\n  return is;\n}\n\n\
    template< typename T >\nostream& operator<<(ostream& os, const vector< T >& v)\
    \ {\n  for (size_t i = 0; i < v.size(); i++) {\n    os << v[i] << (i + 1 != v.size()?\"\
    \ \":\"\");\n  }\n  return os;\n}\n\ntemplate< typename T >\nistream& operator>>(istream&\
    \ is, vector< T >& v) {\n  for (T& in : v) is >> in;\n  return is;\n}\n\ntemplate<\
    \ typename T = int64_t >\nvector< T > make_v(size_t a) {\n  return vector< T >(a);\n\
    }\n\ntemplate< typename T, typename... Ts >\nauto make_v(size_t a, Ts... ts) {\n\
    \  return vector< decltype(make_v< T >(ts...)) >(a, make_v< T >(ts...));\n}\n\n\
    template< typename T, typename V >\ntypename enable_if< is_class< T >::value ==\
    \ 0 >::type fill_v(T& t, const V& v) {\n  t = v;\n}\n\ntemplate< typename T, typename\
    \ V >\ntypename enable_if< is_class< T >::value != 0 >::type fill_v(T& t, const\
    \ V& v) {\n  for (auto& e : t) fill_v(e, v);\n}\n\ntemplate< typename F >\nstruct\
    \ FixPoint : F {\n  explicit FixPoint(F&& f) : F(forward< F >(f)) {}\n\n  template<\
    \ typename... Args >\n  decltype(auto) operator()(Args &&... args) const {\n \
    \   return F::operator()(*this, forward< Args >(args)...);\n  }\n};\n\ntemplate<\
    \ typename F >\ninline decltype(auto) MFP(F&& f) {\n  return FixPoint< F >{forward<\
    \ F >(f)};\n}"
  dependsOn: []
  isVerificationFile: false
  path: Template/template.hpp
  requiredBy: []
  timestamp: '2022-05-17 22:47:24+02:00'
  verificationStatus: LIBRARY_SOME_WA
  verifiedWith:
  - Verify/LC_stirling_numbers_second_kind.test.cpp
  - Verify/LC_aplusb.test.cpp
  - Verify/LC_persistent_union_find.test.cpp
  - Verify/LC_division_polynomials.test.cpp
  - Verify/LC_partition_function.test.cpp
  - Verify/LC_prime_factorization.test.cpp
  - Verify/AIZU_bigInt_addition.test.cpp
  - Verify/LC_polynomial_taylor_shift.test.cpp
  - Verify/AOJ_DSL_2_D.test.cpp
  - Verify/LC_inversion_power_series.test.cpp
  - Verify/AIZU_bigInt_multiplication.test.cpp
  - Verify/AIZU_bigInt_division.test.cpp
  - Verify/AIZU_bigInt_difference.test.cpp
  - Verify/LC_convolution_mod.test.cpp
  - Verify/LC_static_range_sum.test.cpp
  - Verify/LC_power_formal_series.test.cpp
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
