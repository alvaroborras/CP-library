---
data:
  _extendedDependsOn:
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
    PROBLEM: https://judge.yosupo.jp/problem/static_range_sum
    links:
    - https://judge.yosupo.jp/problem/static_range_sum
  bundledCode: "#line 1 \"Verify/LC_static_range_sum.test.cpp\"\n#define PROBLEM \"\
    https://judge.yosupo.jp/problem/static_range_sum\"\n\n#line 1 \"Template/template.hpp\"\
    \n#include <bits/stdc++.h>\nusing namespace std;\n\n#define rep(x, s, t) for (ll\
    \ x = (s); (x) <= (t); (x)++)\n#define per(x, s, t) for (ll x = (s); (x) >= (t);\
    \ (x)--)\n#define reps(x, s) for (ll x = 0; (x) < (ll)(s).size(); (x)++)\n#define\
    \ chmin(x, y) (x) = min((x), (y))\n#define chmax(x, y) (x) = max((x), (y))\n#define\
    \ sz(x) ((ll)(x).size())\n#define all(x) (x).begin(), (x).end()\n#define rall(x)\
    \ (x).rbegin(), (x).rend()\n#define outl(...) dump_func(__VA_ARGS__)\n#define\
    \ outf(x) cout << fixed << setprecision(16) << (x) << nl\n#define fastio ios::sync_with_stdio(0);\
    \ cin.tie(0); cout.tie(0)\n#define nl \"\\n\"\n#define pb push_back\n#define fi\
    \ first\n#define se second\n#define inf 2e18\n#define eps 1e-9\nconst double PI\
    \ = 3.1415926535897932384626433;\n\ntypedef long long ll;\ntypedef unsigned long\
    \ long ull;\ntypedef pair<ll, ll> P;\n\nconst int mod = 1e9 + 7;\n\ntemplate <class\
    \ S, class T>\npair<S, T>& operator+=(pair<S, T>& s, const pair<S, T>& t) {\n\
    \  s.first += t.first, s.second += t.second;\n  return s;\n}\ntemplate <class\
    \ S, class T>\npair<S, T>& operator-=(pair<S, T>& s, const pair<S, T>& t) {\n\
    \  s.first -= t.first, s.second -= t.second;\n  return s;\n}\ntemplate <class\
    \ S, class T>\npair<S, T> operator+(const pair<S, T>& s, const pair<S, T>& t)\
    \ {\n  return pair<S, T>(s.first + t.first, s.second + t.second);\n}\ntemplate\
    \ <class S, class T>\npair<S, T> operator-(const pair<S, T>& s, const pair<S,\
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
    }\n#line 4 \"Verify/LC_static_range_sum.test.cpp\"\n\nint main() {\n  fastio;\n\
    \  int N, Q;\n  cin >> N >> Q;\n  vector<ll> a(N + 1);\n  for (int i = 1; i <=\
    \ N; ++i) {\n    cin >> a[i];\n    a[i] += a[i - 1];\n  }\n  for (int i = 0, l,\
    \ r; i < Q; ++i) {\n    cin >> l >> r;\n    cout << a[r] - a[l] << nl;\n  }\n\
    }\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/static_range_sum\"\n\n\
    #include \"Template/template.hpp\"\n\nint main() {\n  fastio;\n  int N, Q;\n \
    \ cin >> N >> Q;\n  vector<ll> a(N + 1);\n  for (int i = 1; i <= N; ++i) {\n \
    \   cin >> a[i];\n    a[i] += a[i - 1];\n  }\n  for (int i = 0, l, r; i < Q; ++i)\
    \ {\n    cin >> l >> r;\n    cout << a[r] - a[l] << nl;\n  }\n}"
  dependsOn:
  - Template/template.hpp
  isVerificationFile: true
  path: Verify/LC_static_range_sum.test.cpp
  requiredBy: []
  timestamp: '2022-05-17 17:51:29+02:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Verify/LC_static_range_sum.test.cpp
layout: document
redirect_from:
- /verify/Verify/LC_static_range_sum.test.cpp
- /verify/Verify/LC_static_range_sum.test.cpp.html
title: Verify/LC_static_range_sum.test.cpp
---
