---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: DataStructures/segment-tree.hpp
    title: DataStructures/segment-tree.hpp
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
    PROBLEM: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_A
    links:
    - http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_A
  bundledCode: "#line 1 \"Verify/AIZU_range-min-query.test.cpp\"\n#define PROBLEM\
    \ \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_A\"\n\n#line\
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
    }\n#line 1 \"DataStructures/segment-tree.hpp\"\ntemplate<typename T, typename\
    \ F>\nstruct SegmentTree {\n  int n, sz;\n  vector<T> seg;\n\n  const F f;\n \
    \ const T ti;\n\n  SegmentTree() = default;\n\n  explicit SegmentTree(int n, const\
    \ F f, const T& ti) : n(n), f(f), ti(ti) {\n    sz = 1;\n    while (sz < n) sz\
    \ <<= 1;\n    seg.assign(2 * sz, ti);\n  }\n\n  explicit SegmentTree(const vector<T>&\
    \ v, const F f, const T& ti) :\n    SegmentTree((int)v.size(), f, ti) {\n    build(v);\n\
    \  }\n\n  void build(const vector< T >& v) {\n    assert(n == (int)v.size());\n\
    \    for (int k = 0; k < n; k++) seg[k + sz] = v[k];\n    for (int k = sz - 1;\
    \ k > 0; k--) {\n      seg[k] = f(seg[2 * k + 0], seg[2 * k + 1]);\n    }\n  }\n\
    \n  void set(int k, const T& x) {\n    k += sz;\n    seg[k] = x;\n    while (k\
    \ >>= 1) {\n      seg[k] = f(seg[2 * k + 0], seg[2 * k + 1]);\n    }\n  }\n\n\
    \  T get(int k) const {\n    return seg[k + sz];\n  }\n\n  T operator[](const\
    \ int& k) const {\n    return get(k);\n  }\n\n  void apply(int k, const T& x)\
    \ {\n    k += sz;\n    seg[k] = f(seg[k], x);\n    while (k >>= 1) {\n      seg[k]\
    \ = f(seg[2 * k + 0], seg[2 * k + 1]);\n    }\n  }\n\n  T prod(int l, int r) const\
    \ {\n    T L = ti, R = ti;\n    for (l += sz, r += sz; l < r; l >>= 1, r >>= 1)\
    \ {\n      if (l & 1) L = f(L, seg[l++]);\n      if (r & 1) R = f(seg[--r], R);\n\
    \    }\n    return f(L, R);\n  }\n\n  T all_prod() const {\n    return seg[1];\n\
    \  }\n\n  template< typename C >\n  int find_first(int l, const C& check) const\
    \ {\n    if (l >= n) return n;\n    l += sz;\n    T sum = ti;\n    do {\n    \
    \  while ((l & 1) == 0) l >>= 1;\n      if (check(f(sum, seg[l]))) {\n       \
    \ while (l < sz) {\n          l <<= 1;\n          auto nxt = f(sum, seg[l]);\n\
    \          if (not check(nxt)) {\n            sum = nxt;\n            l++;\n \
    \         }\n        }\n        return l + 1 - sz;\n      }\n      sum = f(sum,\
    \ seg[l++]);\n    } while ((l & -l) != l);\n    return n;\n  }\n\n  template<typename\
    \ C>\n  int find_last(int r, const C& check) const {\n    if (r <= 0) return -1;\n\
    \    r += sz;\n    T sum = ti;\n    do {\n      r--;\n      while (r > 1 and (r\
    \ & 1)) r >>= 1;\n      if (check(f(seg[r], sum))) {\n        while (r < sz) {\n\
    \          r = (r << 1) + 1;\n          auto nxt = f(seg[r], sum);\n         \
    \ if (not check(nxt)) {\n            sum = nxt;\n            r--;\n          }\n\
    \        }\n        return r - sz;\n      }\n      sum = f(seg[r], sum);\n   \
    \ } while ((r & -r) != r);\n    return -1;\n  }\n};\n\ntemplate<typename T, typename\
    \ F>\nSegmentTree<T, F> get_segment_tree(int N, const F& f, const T& ti) {\n \
    \ return SegmentTree{ N, f, ti };\n}\n\ntemplate<typename T, typename F>\nSegmentTree<T,\
    \ F> get_segment_tree(const vector<T>& v, const F& f, const T& ti) {\n  return\
    \ SegmentTree{ v, f, ti };\n}\n#line 5 \"Verify/AIZU_range-min-query.test.cpp\"\
    \n\nint main() {\n  fastio;\n\n  uint32_t N, Q;\n  cin >> N >> Q;\n\n  auto seg\
    \ = get_segment_tree(N, [](uint32_t a, uint32_t b) { return min(a, b); }, INT_MAX);\n\
    \n  /*\n    This data structure has two operations:\n      1. Set element seg[X]\
    \ = Y\n      2. Obtain the minimum of {seg[X], ..., seg[Y]}\n  */\n\n  uint32_t\
    \ T, X, Y;\n  while (Q--) {\n    cin >> T >> X >> Y;\n    if (T == 0)\n      seg.set(X,\
    \ Y);\n    else\n      cout << seg.prod(X, Y + 1) << nl;\n  }\n}\n\n"
  code: "#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_A\"\
    \n\n#include \"../Template/template.hpp\"\n#include \"../DataStructures/segment-tree.hpp\"\
    \n\nint main() {\n  fastio;\n\n  uint32_t N, Q;\n  cin >> N >> Q;\n\n  auto seg\
    \ = get_segment_tree(N, [](uint32_t a, uint32_t b) { return min(a, b); }, INT_MAX);\n\
    \n  /*\n    This data structure has two operations:\n      1. Set element seg[X]\
    \ = Y\n      2. Obtain the minimum of {seg[X], ..., seg[Y]}\n  */\n\n  uint32_t\
    \ T, X, Y;\n  while (Q--) {\n    cin >> T >> X >> Y;\n    if (T == 0)\n      seg.set(X,\
    \ Y);\n    else\n      cout << seg.prod(X, Y + 1) << nl;\n  }\n}\n\n"
  dependsOn:
  - Template/template.hpp
  - DataStructures/segment-tree.hpp
  isVerificationFile: true
  path: Verify/AIZU_range-min-query.test.cpp
  requiredBy: []
  timestamp: '2022-05-19 09:20:43+02:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: Verify/AIZU_range-min-query.test.cpp
layout: document
redirect_from:
- /verify/Verify/AIZU_range-min-query.test.cpp
- /verify/Verify/AIZU_range-min-query.test.cpp.html
title: Verify/AIZU_range-min-query.test.cpp
---
