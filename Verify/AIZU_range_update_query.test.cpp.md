---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: DataStructures/dualsegtree.hpp
    title: DataStructures/dualsegtree.hpp
  - icon: ':question:'
    path: Template/template.hpp
    title: Template/template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_D
    links:
    - http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_D
  bundledCode: "#line 1 \"Verify/AIZU_range_update_query.test.cpp\"\n#define PROBLEM\
    \ \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_D\"\n\n#line\
    \ 1 \"Template/template.hpp\"\n#include <iostream>\n#include <iomanip>\n#include\
    \ <cstdio>\n#include <cmath>\n#include <ctime>\n#include <cstdlib>\n#include <cassert>\n\
    #include <vector>\n#include <list>\n#include <stack>\n#include <queue>\n#include\
    \ <deque>\n#include <map>\n#include <set>\n#include <bitset>\n#include <string>\n\
    #include <algorithm>\n#include <utility>\n#include <complex>\n#include <array>\n\
    #include <random>\n#include <unordered_set>\n#include <unordered_map>\nusing namespace\
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
    \ MFP(F&& f) {\n  return FixPoint< F >{forward< F >(f)};\n}\n#line 1 \"DataStructures/dualsegtree.hpp\"\
    \n/**\n * Range Update Query (dual segment tree)\n */\ntemplate< typename E, typename\
    \ H >\nstruct DualSegmentTree {\n  int sz, height;\n  vector< E > lazy;\n  const\
    \ H h;\n  const E ei;\n\n  DualSegmentTree(int n, const H h, const E& ei) : h(h),\
    \ ei(ei) {\n    sz = 1;\n    height = 0;\n    while (sz < n) sz <<= 1, height++;\n\
    \    lazy.assign(2 * sz, ei);\n  }\n\n  inline void propagate(int k) {\n    if\
    \ (lazy[k] != ei) {\n      lazy[2 * k + 0] = h(lazy[2 * k + 0], lazy[k]);\n  \
    \    lazy[2 * k + 1] = h(lazy[2 * k + 1], lazy[k]);\n      lazy[k] = ei;\n   \
    \ }\n  }\n\n  inline void thrust(int k) {\n    for (int i = height; i > 0; i--)\
    \ propagate(k >> i);\n  }\n\n  void update(int a, int b, const E& x) {\n    thrust(a\
    \ += sz);\n    thrust(b += sz - 1);\n    for (int l = a, r = b + 1; l < r; l >>=\
    \ 1, r >>= 1) {\n      if (l & 1) lazy[l] = h(lazy[l], x), ++l;\n      if (r &\
    \ 1) --r, lazy[r] = h(lazy[r], x);\n    }\n  }\n\n  E operator[](int k) {\n  \
    \  thrust(k += sz);\n    return lazy[k];\n  }\n};\n\ntemplate< typename E, typename\
    \ H >\nDualSegmentTree< E, H > get_dual_segment_tree(int N, const H& h, const\
    \ E& ei) {\n  return { N, h, ei };\n}\n#line 5 \"Verify/AIZU_range_update_query.test.cpp\"\
    \n\nint main() {\n  int N, Q;\n  cin >> N >> Q;\n  auto h = [](int32_t a, int32_t\
    \ b) { return b; };\n  auto seg = get_dual_segment_tree(N, h, INT32_MAX);\n\n\
    \  int32_t T, X, L, R, K;\n  while (Q--) {\n    cin >> T;\n    if (T == 0) {\n\
    \      // Update seg[l ... r] = x\n      cin >> L >> R >> X;\n      seg.update(L,\
    \ R + 1, X);\n    }\n    else if (T == 1) {\n      // Obtain element seg[k]\n\
    \      cin >> K;\n      cout << seg[K] << \"\\n\";\n    }\n  }\n  return 0;\n\
    }\n"
  code: "#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_D\"\
    \n\n#include \"../Template/template.hpp\"\n#include \"../DataStructures/dualsegtree.hpp\"\
    \n\nint main() {\n  int N, Q;\n  cin >> N >> Q;\n  auto h = [](int32_t a, int32_t\
    \ b) { return b; };\n  auto seg = get_dual_segment_tree(N, h, INT32_MAX);\n\n\
    \  int32_t T, X, L, R, K;\n  while (Q--) {\n    cin >> T;\n    if (T == 0) {\n\
    \      // Update seg[l ... r] = x\n      cin >> L >> R >> X;\n      seg.update(L,\
    \ R + 1, X);\n    }\n    else if (T == 1) {\n      // Obtain element seg[k]\n\
    \      cin >> K;\n      cout << seg[K] << \"\\n\";\n    }\n  }\n  return 0;\n}"
  dependsOn:
  - Template/template.hpp
  - DataStructures/dualsegtree.hpp
  isVerificationFile: true
  path: Verify/AIZU_range_update_query.test.cpp
  requiredBy: []
  timestamp: '2022-05-18 14:08:29+02:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Verify/AIZU_range_update_query.test.cpp
layout: document
redirect_from:
- /verify/Verify/AIZU_range_update_query.test.cpp
- /verify/Verify/AIZU_range_update_query.test.cpp.html
title: Verify/AIZU_range_update_query.test.cpp
---
