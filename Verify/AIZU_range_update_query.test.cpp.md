---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: DataStructures/dualsegtree.hpp
    title: DataStructures/dualsegtree.hpp
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
    PROBLEM: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_D
    links:
    - http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_D
  bundledCode: "#line 1 \"Verify/AIZU_range_update_query.test.cpp\"\n#define PROBLEM\
    \ \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_D\"\n\n#line\
    \ 1 \"Template/template.hpp\"\n#include <bits/stdc++.h>\nusing namespace std;\n\
    \n#define reps(x, s) for (ll x = 0; (x) < (ll)(s).size(); (x)++)\n#define chmin(x,\
    \ y) (x) = min((x), (y))\n#define chmax(x, y) (x) = max((x), (y))\n#define all(x)\
    \ (x).begin(), (x).end()\n#define rall(x) (x).rbegin(), (x).rend()\n#define outl(...)\
    \ dump_func(__VA_ARGS__)\n#define outf(x) cout << fixed << setprecision(16) <<\
    \ (x) << nl\n#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)\n\
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
    }\n#line 1 \"DataStructures/dualsegtree.hpp\"\n/**\n * Range Update Query (dual\
    \ segment tree)\n */\ntemplate< typename E, typename H >\nstruct DualSegmentTree\
    \ {\n  int sz, height;\n  vector< E > lazy;\n  const H h;\n  const E ei;\n\n \
    \ DualSegmentTree(int n, const H h, const E& ei) : h(h), ei(ei) {\n    sz = 1;\n\
    \    height = 0;\n    while (sz < n) sz <<= 1, height++;\n    lazy.assign(2 *\
    \ sz, ei);\n  }\n\n  inline void propagate(int k) {\n    if (lazy[k] != ei) {\n\
    \      lazy[2 * k + 0] = h(lazy[2 * k + 0], lazy[k]);\n      lazy[2 * k + 1] =\
    \ h(lazy[2 * k + 1], lazy[k]);\n      lazy[k] = ei;\n    }\n  }\n\n  inline void\
    \ thrust(int k) {\n    for (int i = height; i > 0; i--) propagate(k >> i);\n \
    \ }\n\n  void update(int a, int b, const E& x) {\n    thrust(a += sz);\n    thrust(b\
    \ += sz - 1);\n    for (int l = a, r = b + 1; l < r; l >>= 1, r >>= 1) {\n   \
    \   if (l & 1) lazy[l] = h(lazy[l], x), ++l;\n      if (r & 1) --r, lazy[r] =\
    \ h(lazy[r], x);\n    }\n  }\n\n  E operator[](int k) {\n    thrust(k += sz);\n\
    \    return lazy[k];\n  }\n};\n\ntemplate< typename E, typename H >\nDualSegmentTree<\
    \ E, H > get_dual_segment_tree(int N, const H& h, const E& ei) {\n  return { N,\
    \ h, ei };\n}\n#line 5 \"Verify/AIZU_range_update_query.test.cpp\"\n\nint main()\
    \ {\n  int N, Q;\n  cin >> N >> Q;\n  auto h = [](int32_t a, int32_t b) { return\
    \ b; };\n  auto seg = get_dual_segment_tree(N, h, INT32_MAX);\n\n  int32_t T,\
    \ X, L, R, K;\n  while (Q--) {\n    cin >> T;\n    if (T == 0) {\n      // Update\
    \ seg[l ... r] = x\n      cin >> L >> R >> X;\n      seg.update(L, R + 1, X);\n\
    \    }\n    else if (T == 1) {\n      // Obtain element seg[k]\n      cin >> K;\n\
    \      cout << seg[K] << \"\\n\";\n    }\n  }\n  return 0;\n}\n"
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
  timestamp: '2022-05-19 09:20:43+02:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: Verify/AIZU_range_update_query.test.cpp
layout: document
redirect_from:
- /verify/Verify/AIZU_range_update_query.test.cpp
- /verify/Verify/AIZU_range_update_query.test.cpp.html
title: Verify/AIZU_range_update_query.test.cpp
---
