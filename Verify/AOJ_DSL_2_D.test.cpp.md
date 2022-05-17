---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: DataStructures/dualsegtree.hpp
    title: Dual Segment Tree
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
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_D
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_D
  bundledCode: "#line 1 \"Verify/AOJ_DSL_2_D.test.cpp\"\n#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_D\"\
    \n\n#line 1 \"Template/template.hpp\"\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n\n#define rep(x, s, t) for (ll x = (s); (x) <= (t); (x)++)\n#define per(x,\
    \ s, t) for (ll x = (s); (x) >= (t); (x)--)\n#define reps(x, s) for (ll x = 0;\
    \ (x) < (ll)(s).size(); (x)++)\n#define chmin(x, y) (x) = min((x), (y))\n#define\
    \ chmax(x, y) (x) = max((x), (y))\n#define sz(x) ((ll)(x).size())\n#define all(x)\
    \ (x).begin(), (x).end()\n#define rall(x) (x).rbegin(), (x).rend()\n#define outl(...)\
    \ dump_func(__VA_ARGS__)\n#define outf(x) cout << fixed << setprecision(16) <<\
    \ (x) << nl\n\n#define nl \"\\n\"\n#define pb push_back\n#define fi first\n#define\
    \ se second\n#define inf 2e18\n#define eps 1e-9\nconst double PI = 3.1415926535897932384626433;\n\
    \ntypedef long long ll;\ntypedef unsigned long long ull;\ntypedef pair<ll, ll>\
    \ P;\n\nconst int mod = 1e9 + 7;\n\ntemplate <class S, class T>\npair<S, T>& operator+=(pair<S,\
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
    }\n#line 4 \"Verify/AOJ_DSL_2_D.test.cpp\"\n// #include \"Utility/fastIO.hpp\"\
    \n#line 1 \"DataStructures/dualsegtree.hpp\"\n\ntemplate <typename M, M(*f)(M,\
    \ M), M(*m1)()> class DualSegmentTree {\n  int sz, height;\n  vector<M> data;\n\
    \  void down(int k) {\n    data[k * 2] = f(data[k * 2], data[k]);\n    data[k\
    \ * 2 + 1] = f(data[k * 2 + 1], data[k]);\n    data[k] = m1();\n  }\n\npublic:\n\
    \  DualSegmentTree(int n) {\n    sz = 1, height = 0;\n    while (sz < n)\n   \
    \   sz <<= 1, height++;\n    data.assign(2 * sz, m1());\n  }\n  void run(vector<M>&\
    \ v) {\n    for (int i = 0; i < (int)v.size(); i++)\n      data[i + sz] = v[i];\n\
    \  }\n  void update(int a, int b, M x) {\n    if (a >= b)\n      return;\n   \
    \ a += sz, b += sz;\n    for (int i = height; i; i--) {\n      if (((a >> i) <<\
    \ i) != a)\n        down(a >> i);\n      if (((b >> i) << i) != b)\n        down((b\
    \ - 1) >> i);\n    }\n    for (; a < b; a >>= 1, b >>= 1) {\n      if (a & 1)\n\
    \        data[a] = f(data[a], x), a++;\n      if (b & 1)\n        --b, data[b]\
    \ = f(data[b], x);\n    }\n  }\n  M query(int k) {\n    k += sz;\n    for (int\
    \ i = height; i; i--) {\n      if (((k >> i) << i) != k)\n        down(k >> i);\n\
    \    }\n    M ret = data[k];\n    while (k >>= 1)\n      ret = f(ret, data[k]);\n\
    \    return ret;\n  }\n};\n\n/**\n * @brief Dual Segment Tree\n */\n#line 6 \"\
    Verify/AOJ_DSL_2_D.test.cpp\"\n\nint f(int a, int b) {\n  if (b != INT32_MAX)\n\
    \    return b;\n  else\n    return a;\n}\nint e() { return INT32_MAX; }\n\nint\
    \ main() {\n  int n, q;\n  cin >> n >> q;\n\n  DualSegmentTree<int, f, e> seg(n);\n\
    \  int c, L, R, x;\n  while (q--) {\n    cin >> c;\n    if (c == 0) {\n      cin\
    \ >> L >> R >> x;\n      R++;\n      seg.update(L, R, x);\n    }\n    else {\n\
    \      cin >> x;\n      cout << seg.query(x) << nl;\n    }\n  }\n  return 0;\n\
    }\n"
  code: "#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_D\"\
    \n\n#include \"Template/template.hpp\"\n// #include \"Utility/fastIO.hpp\"\n#include\
    \ \"DataStructures/dualsegtree.hpp\"\n\nint f(int a, int b) {\n  if (b != INT32_MAX)\n\
    \    return b;\n  else\n    return a;\n}\nint e() { return INT32_MAX; }\n\nint\
    \ main() {\n  int n, q;\n  cin >> n >> q;\n\n  DualSegmentTree<int, f, e> seg(n);\n\
    \  int c, L, R, x;\n  while (q--) {\n    cin >> c;\n    if (c == 0) {\n      cin\
    \ >> L >> R >> x;\n      R++;\n      seg.update(L, R, x);\n    }\n    else {\n\
    \      cin >> x;\n      cout << seg.query(x) << nl;\n    }\n  }\n  return 0;\n\
    }"
  dependsOn:
  - Template/template.hpp
  - DataStructures/dualsegtree.hpp
  isVerificationFile: true
  path: Verify/AOJ_DSL_2_D.test.cpp
  requiredBy: []
  timestamp: '2022-05-17 17:45:16+02:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Verify/AOJ_DSL_2_D.test.cpp
layout: document
redirect_from:
- /verify/Verify/AOJ_DSL_2_D.test.cpp
- /verify/Verify/AOJ_DSL_2_D.test.cpp.html
title: Verify/AOJ_DSL_2_D.test.cpp
---
