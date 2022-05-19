---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: Verify/LC_convolution_mod.test_3.cpp
    title: Verify/LC_convolution_mod.test_3.cpp
  _extendedVerifiedWith:
  - icon: ':x:'
    path: Verify/AIZU_MST.test.cpp
    title: Verify/AIZU_MST.test.cpp
  - icon: ':x:'
    path: Verify/AIZU_bigInt_addition.test.cpp
    title: Verify/AIZU_bigInt_addition.test.cpp
  - icon: ':x:'
    path: Verify/AIZU_bigInt_difference.test.cpp
    title: Verify/AIZU_bigInt_difference.test.cpp
  - icon: ':x:'
    path: Verify/AIZU_bigInt_division.test.cpp
    title: Verify/AIZU_bigInt_division.test.cpp
  - icon: ':x:'
    path: Verify/AIZU_bigInt_modulo.test.cpp
    title: Verify/AIZU_bigInt_modulo.test.cpp
  - icon: ':x:'
    path: Verify/AIZU_bigInt_multiplication.test.cpp
    title: Verify/AIZU_bigInt_multiplication.test.cpp
  - icon: ':x:'
    path: Verify/AIZU_bigInt_multiplication2.test.cpp
    title: Verify/AIZU_bigInt_multiplication2.test.cpp
  - icon: ':x:'
    path: Verify/AIZU_divisors.test.cpp
    title: Verify/AIZU_divisors.test.cpp
  - icon: ':x:'
    path: Verify/AIZU_euler_phi.test.cpp
    title: Verify/AIZU_euler_phi.test.cpp
  - icon: ':x:'
    path: Verify/AIZU_extended_gcd.test.cpp
    title: Verify/AIZU_extended_gcd.test.cpp
  - icon: ':x:'
    path: Verify/AIZU_mod_power.test.cpp
    title: Verify/AIZU_mod_power.test.cpp
  - icon: ':x:'
    path: Verify/AIZU_range-min-query.test.cpp
    title: Verify/AIZU_range-min-query.test.cpp
  - icon: ':x:'
    path: Verify/AIZU_range_sum_query.test.cpp
    title: Verify/AIZU_range_sum_query.test.cpp
  - icon: ':x:'
    path: Verify/AIZU_range_update_query.test.cpp
    title: Verify/AIZU_range_update_query.test.cpp
  - icon: ':x:'
    path: Verify/AIZU_union_find.test.cpp
    title: Verify/AIZU_union_find.test.cpp
  - icon: ':x:'
    path: Verify/AIZU_weighted_union_find.test.cpp
    title: Verify/AIZU_weighted_union_find.test.cpp
  - icon: ':x:'
    path: Verify/LC_aplusb.test.cpp
    title: Verify/LC_aplusb.test.cpp
  - icon: ':x:'
    path: Verify/LC_convolution_mod.test.cpp
    title: Verify/LC_convolution_mod.test.cpp
  - icon: ':x:'
    path: Verify/LC_convolution_mod_2.test.cpp
    title: Verify/LC_convolution_mod_2.test.cpp
  - icon: ':x:'
    path: Verify/LC_counting_primes.test.cpp
    title: Verify/LC_counting_primes.test.cpp
  - icon: ':x:'
    path: Verify/LC_division_polynomials.test.cpp
    title: Verify/LC_division_polynomials.test.cpp
  - icon: ':x:'
    path: Verify/LC_enumerate_primes.test.cpp
    title: Verify/LC_enumerate_primes.test.cpp
  - icon: ':x:'
    path: Verify/LC_inversion_power_series.test.cpp
    title: Verify/LC_inversion_power_series.test.cpp
  - icon: ':x:'
    path: Verify/LC_kth_root_integer.test.cpp
    title: Verify/LC_kth_root_integer.test.cpp
  - icon: ':x:'
    path: Verify/LC_partition_function.test.cpp
    title: Verify/LC_partition_function.test.cpp
  - icon: ':x:'
    path: Verify/LC_persistent_union_find.test.cpp
    title: Verify/LC_persistent_union_find.test.cpp
  - icon: ':x:'
    path: Verify/LC_polynomial_taylor_shift.test.cpp
    title: Verify/LC_polynomial_taylor_shift.test.cpp
  - icon: ':x:'
    path: Verify/LC_power_formal_series.test.cpp
    title: Verify/LC_power_formal_series.test.cpp
  - icon: ':x:'
    path: Verify/LC_prime_factorization.test.cpp
    title: Verify/LC_prime_factorization.test.cpp
  - icon: ':x:'
    path: Verify/LC_prime_factorization_2.test.cpp
    title: Verify/LC_prime_factorization_2.test.cpp
  - icon: ':x:'
    path: Verify/LC_static_range_sum.test.cpp
    title: Verify/LC_static_range_sum.test.cpp
  - icon: ':x:'
    path: Verify/LC_stirling_numbers_second_kind.test.cpp
    title: Verify/LC_stirling_numbers_second_kind.test.cpp
  - icon: ':x:'
    path: Verify/LC_strongly_connected_components.test.cpp
    title: Verify/LC_strongly_connected_components.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Template/template.hpp\"\n#include <bits/stdc++.h>\nusing\
    \ namespace std;\n\n#define reps(x, s) for (ll x = 0; (x) < (ll)(s).size(); (x)++)\n\
    #define chmin(x, y) (x) = min((x), (y))\n#define chmax(x, y) (x) = max((x), (y))\n\
    #define all(x) (x).begin(), (x).end()\n#define rall(x) (x).rbegin(), (x).rend()\n\
    #define outl(...) dump_func(__VA_ARGS__)\n#define outf(x) cout << fixed << setprecision(16)\
    \ << (x) << nl\n#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)\n\
    #define nl \"\\n\"\n#define pb push_back\n#define fi first\n#define se second\n\
    #define inf 2e18\n#define eps 1e-9\nconst double PI = 3.1415926535897932384626433;\n\
    \ntypedef long long ll;\ntypedef unsigned long long ull;\ntypedef pair<ll, ll>\
    \ P;\ntypedef vector<int> vi;\ntypedef vector<vi> vvi;\ntypedef vector<pair<int,\
    \ int>> vpii;\n\nconst int mod = 1e9 + 7;\n\ntemplate <class S, class T>\npair<S,\
    \ T>& operator+=(pair<S, T>& s, const pair<S, T>& t) {\n  s.first += t.first,\
    \ s.second += t.second;\n  return s;\n}\ntemplate <class S, class T>\npair<S,\
    \ T>& operator-=(pair<S, T>& s, const pair<S, T>& t) {\n  s.first -= t.first,\
    \ s.second -= t.second;\n  return s;\n}\ntemplate <class S, class T>\npair<S,\
    \ T> operator+(const pair<S, T>& s, const pair<S, T>& t) {\n  return pair<S, T>(s.first\
    \ + t.first, s.second + t.second);\n}\ntemplate <class S, class T>\npair<S, T>\
    \ operator-(const pair<S, T>& s, const pair<S, T>& t) {\n  return pair<S, T>(s.first\
    \ - t.first, s.second - t.second);\n}\ntemplate <class T> T dot(const pair<T,\
    \ T>& s, const pair<T, T>& t) {\n  return s.first * t.first + s.second * t.second;\n\
    }\ntemplate <class T> T cross(const pair<T, T>& s, const pair<T, T>& t) {\n  return\
    \ s.first * t.second - s.second * t.first;\n}\n\ntemplate <typename T> ostream&\
    \ operator<<(ostream& os, vector<T>& vec) {\n  reps(i, vec) os << vec[i] << \"\
    \ \";\n  return os;\n}\ntemplate <typename T> ostream& operator<<(ostream& os,\
    \ const vector<T>& vec) {\n  reps(i, vec) os << vec[i] << \" \";\n  return os;\n\
    }\ntemplate <typename T> ostream& operator<<(ostream& os, list<T>& ls) {\n  for\
    \ (auto x : ls)\n    os << x << \" \";\n  return os;\n}\ntemplate <typename T>\
    \ ostream& operator<<(ostream& os, const list<T>& ls) {\n  for (auto x : ls)\n\
    \    os << x << \" \";\n  return os;\n}\ntemplate <typename T> ostream& operator<<(ostream&\
    \ os, deque<T>& deq) {\n  reps(i, deq) os << deq[i] << \" \";\n  return os;\n\
    }\ntemplate <typename T, typename U>\nostream& operator<<(ostream& os, pair<T,\
    \ U>& ope) {\n  os << \"(\" << ope.first << \", \" << ope.second << \")\";\n \
    \ return os;\n}\ntemplate <typename T, typename U>\nostream& operator<<(ostream&\
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
  code: "#include <bits/stdc++.h>\nusing namespace std;\n\n#define reps(x, s) for\
    \ (ll x = 0; (x) < (ll)(s).size(); (x)++)\n#define chmin(x, y) (x) = min((x),\
    \ (y))\n#define chmax(x, y) (x) = max((x), (y))\n#define all(x) (x).begin(), (x).end()\n\
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
    }"
  dependsOn: []
  isVerificationFile: false
  path: Template/template.hpp
  requiredBy:
  - Verify/LC_convolution_mod.test_3.cpp
  timestamp: '2022-05-19 09:20:43+02:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - Verify/AIZU_euler_phi.test.cpp
  - Verify/LC_counting_primes.test.cpp
  - Verify/LC_stirling_numbers_second_kind.test.cpp
  - Verify/AIZU_union_find.test.cpp
  - Verify/LC_aplusb.test.cpp
  - Verify/LC_persistent_union_find.test.cpp
  - Verify/LC_division_polynomials.test.cpp
  - Verify/LC_partition_function.test.cpp
  - Verify/AIZU_range-min-query.test.cpp
  - Verify/AIZU_weighted_union_find.test.cpp
  - Verify/LC_prime_factorization.test.cpp
  - Verify/AIZU_MST.test.cpp
  - Verify/AIZU_bigInt_addition.test.cpp
  - Verify/AIZU_divisors.test.cpp
  - Verify/LC_polynomial_taylor_shift.test.cpp
  - Verify/LC_convolution_mod_2.test.cpp
  - Verify/LC_kth_root_integer.test.cpp
  - Verify/LC_inversion_power_series.test.cpp
  - Verify/AIZU_bigInt_multiplication.test.cpp
  - Verify/AIZU_range_update_query.test.cpp
  - Verify/LC_prime_factorization_2.test.cpp
  - Verify/AIZU_range_sum_query.test.cpp
  - Verify/AIZU_bigInt_division.test.cpp
  - Verify/AIZU_bigInt_difference.test.cpp
  - Verify/LC_convolution_mod.test.cpp
  - Verify/LC_static_range_sum.test.cpp
  - Verify/LC_power_formal_series.test.cpp
  - Verify/LC_strongly_connected_components.test.cpp
  - Verify/LC_enumerate_primes.test.cpp
  - Verify/AIZU_bigInt_modulo.test.cpp
  - Verify/AIZU_extended_gcd.test.cpp
  - Verify/AIZU_bigInt_multiplication2.test.cpp
  - Verify/AIZU_mod_power.test.cpp
documentation_of: Template/template.hpp
layout: document
redirect_from:
- /library/Template/template.hpp
- /library/Template/template.hpp.html
title: Template/template.hpp
---
