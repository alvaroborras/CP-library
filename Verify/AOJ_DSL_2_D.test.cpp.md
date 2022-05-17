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
    \ (x) << nl\n#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)\n\
    #define nl \"\\n\"\n#define pb push_back\n#define fi first\n#define se second\n\
    #define inf 2e18\n#define eps 1e-9\nconst double PI = 3.1415926535897932384626433;\n\
    \ntypedef long long ll;\ntypedef unsigned long long ull;\ntypedef pair<ll, ll>\
    \ P;\n\nconst int mod = 1e9 + 7;\n\ntemplate< typename T1, typename T2 >\nostream&\
    \ operator<<(ostream& os, const pair< T1, T2 >& p) {\n  os << p.first << \" \"\
    \ << p.second;\n  return os;\n}\n\ntemplate< typename T1, typename T2 >\nistream&\
    \ operator>>(istream& is, pair< T1, T2 >& p) {\n  is >> p.first >> p.second;\n\
    \  return is;\n}\n\ntemplate< typename T >\nostream& operator<<(ostream& os, const\
    \ vector< T >& v) {\n  for (int i = 0; i < (int)v.size(); i++) {\n    os << v[i]\
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
    \ MFP(F&& f) {\n  return FixPoint< F >{forward< F >(f)};\n}\n#line 1 \"DataStructures/dualsegtree.hpp\"\
    \n\ntemplate <typename M, M(*f)(M, M), M(*m1)()> class DualSegmentTree {\n  int\
    \ sz, height;\n  vector<M> data;\n  void down(int k) {\n    data[k * 2] = f(data[k\
    \ * 2], data[k]);\n    data[k * 2 + 1] = f(data[k * 2 + 1], data[k]);\n    data[k]\
    \ = m1();\n  }\n\npublic:\n  DualSegmentTree(int n) {\n    sz = 1, height = 0;\n\
    \    while (sz < n)\n      sz <<= 1, height++;\n    data.assign(2 * sz, m1());\n\
    \  }\n  void run(vector<M>& v) {\n    for (int i = 0; i < (int)v.size(); i++)\n\
    \      data[i + sz] = v[i];\n  }\n  void update(int a, int b, M x) {\n    if (a\
    \ >= b)\n      return;\n    a += sz, b += sz;\n    for (int i = height; i; i--)\
    \ {\n      if (((a >> i) << i) != a)\n        down(a >> i);\n      if (((b >>\
    \ i) << i) != b)\n        down((b - 1) >> i);\n    }\n    for (; a < b; a >>=\
    \ 1, b >>= 1) {\n      if (a & 1)\n        data[a] = f(data[a], x), a++;\n   \
    \   if (b & 1)\n        --b, data[b] = f(data[b], x);\n    }\n  }\n  M query(int\
    \ k) {\n    k += sz;\n    for (int i = height; i; i--) {\n      if (((k >> i)\
    \ << i) != k)\n        down(k >> i);\n    }\n    M ret = data[k];\n    while (k\
    \ >>= 1)\n      ret = f(ret, data[k]);\n    return ret;\n  }\n};\n\n/**\n * @brief\
    \ Dual Segment Tree\n */\n#line 5 \"Verify/AOJ_DSL_2_D.test.cpp\"\n\nint f(int\
    \ a, int b) {\n  if (b != INT32_MAX)\n    return b;\n  else\n    return a;\n}\n\
    int e() { return INT32_MAX; }\n\nint main() {\n  fastio;\n  int n, q;\n  cin >>\
    \ n >> q;\n\n  DualSegmentTree<int, f, e> seg(n);\n  int c, L, R, x;\n  while\
    \ (q--) {\n    cin >> c;\n    if (c == 0) {\n      cin >> L >> R >> x;\n     \
    \ R++;\n      seg.update(L, R, x);\n    }\n    else {\n      cin >> x;\n     \
    \ cout << seg.query(x) << nl;\n    }\n  }\n  return 0;\n}\n"
  code: "#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_D\"\
    \n\n#include \"Template/template.hpp\"\n#include \"DataStructures/dualsegtree.hpp\"\
    \n\nint f(int a, int b) {\n  if (b != INT32_MAX)\n    return b;\n  else\n    return\
    \ a;\n}\nint e() { return INT32_MAX; }\n\nint main() {\n  fastio;\n  int n, q;\n\
    \  cin >> n >> q;\n\n  DualSegmentTree<int, f, e> seg(n);\n  int c, L, R, x;\n\
    \  while (q--) {\n    cin >> c;\n    if (c == 0) {\n      cin >> L >> R >> x;\n\
    \      R++;\n      seg.update(L, R, x);\n    }\n    else {\n      cin >> x;\n\
    \      cout << seg.query(x) << nl;\n    }\n  }\n  return 0;\n}"
  dependsOn:
  - Template/template.hpp
  - DataStructures/dualsegtree.hpp
  isVerificationFile: true
  path: Verify/AOJ_DSL_2_D.test.cpp
  requiredBy: []
  timestamp: '2022-05-17 18:28:09+02:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Verify/AOJ_DSL_2_D.test.cpp
layout: document
redirect_from:
- /verify/Verify/AOJ_DSL_2_D.test.cpp
- /verify/Verify/AOJ_DSL_2_D.test.cpp.html
title: Verify/AOJ_DSL_2_D.test.cpp
---
