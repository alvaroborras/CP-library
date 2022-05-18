---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: DataStructures/segment-tree.hpp
    title: DataStructures/segment-tree.hpp
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
    PROBLEM: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_A
    links:
    - http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_A
  bundledCode: "#line 1 \"Verify/AIZU_range-min-query.test.cpp\"\n#define PROBLEM\
    \ \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_A\"\n\n#line\
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
    \ MFP(F&& f) {\n  return FixPoint< F >{forward< F >(f)};\n}\n#line 1 \"DataStructures/segment-tree.hpp\"\
    \ntemplate<typename T, typename F>\nstruct SegmentTree {\n  int n, sz;\n  vector<T>\
    \ seg;\n\n  const F f;\n  const T ti;\n\n  SegmentTree() = default;\n\n  explicit\
    \ SegmentTree(int n, const F f, const T& ti) : n(n), f(f), ti(ti) {\n    sz =\
    \ 1;\n    while (sz < n) sz <<= 1;\n    seg.assign(2 * sz, ti);\n  }\n\n  explicit\
    \ SegmentTree(const vector<T>& v, const F f, const T& ti) :\n    SegmentTree((int)v.size(),\
    \ f, ti) {\n    build(v);\n  }\n\n  void build(const vector< T >& v) {\n    assert(n\
    \ == (int)v.size());\n    for (int k = 0; k < n; k++) seg[k + sz] = v[k];\n  \
    \  for (int k = sz - 1; k > 0; k--) {\n      seg[k] = f(seg[2 * k + 0], seg[2\
    \ * k + 1]);\n    }\n  }\n\n  void set(int k, const T& x) {\n    k += sz;\n  \
    \  seg[k] = x;\n    while (k >>= 1) {\n      seg[k] = f(seg[2 * k + 0], seg[2\
    \ * k + 1]);\n    }\n  }\n\n  T get(int k) const {\n    return seg[k + sz];\n\
    \  }\n\n  T operator[](const int& k) const {\n    return get(k);\n  }\n\n  void\
    \ apply(int k, const T& x) {\n    k += sz;\n    seg[k] = f(seg[k], x);\n    while\
    \ (k >>= 1) {\n      seg[k] = f(seg[2 * k + 0], seg[2 * k + 1]);\n    }\n  }\n\
    \n  T prod(int l, int r) const {\n    T L = ti, R = ti;\n    for (l += sz, r +=\
    \ sz; l < r; l >>= 1, r >>= 1) {\n      if (l & 1) L = f(L, seg[l++]);\n     \
    \ if (r & 1) R = f(seg[--r], R);\n    }\n    return f(L, R);\n  }\n\n  T all_prod()\
    \ const {\n    return seg[1];\n  }\n\n  template< typename C >\n  int find_first(int\
    \ l, const C& check) const {\n    if (l >= n) return n;\n    l += sz;\n    T sum\
    \ = ti;\n    do {\n      while ((l & 1) == 0) l >>= 1;\n      if (check(f(sum,\
    \ seg[l]))) {\n        while (l < sz) {\n          l <<= 1;\n          auto nxt\
    \ = f(sum, seg[l]);\n          if (not check(nxt)) {\n            sum = nxt;\n\
    \            l++;\n          }\n        }\n        return l + 1 - sz;\n      }\n\
    \      sum = f(sum, seg[l++]);\n    } while ((l & -l) != l);\n    return n;\n\
    \  }\n\n  template<typename C>\n  int find_last(int r, const C& check) const {\n\
    \    if (r <= 0) return -1;\n    r += sz;\n    T sum = ti;\n    do {\n      r--;\n\
    \      while (r > 1 and (r & 1)) r >>= 1;\n      if (check(f(seg[r], sum))) {\n\
    \        while (r < sz) {\n          r = (r << 1) + 1;\n          auto nxt = f(seg[r],\
    \ sum);\n          if (not check(nxt)) {\n            sum = nxt;\n           \
    \ r--;\n          }\n        }\n        return r - sz;\n      }\n      sum = f(seg[r],\
    \ sum);\n    } while ((r & -r) != r);\n    return -1;\n  }\n};\n\ntemplate<typename\
    \ T, typename F>\nSegmentTree<T, F> get_segment_tree(int N, const F& f, const\
    \ T& ti) {\n  return SegmentTree{ N, f, ti };\n}\n\ntemplate<typename T, typename\
    \ F>\nSegmentTree<T, F> get_segment_tree(const vector<T>& v, const F& f, const\
    \ T& ti) {\n  return SegmentTree{ v, f, ti };\n}\n#line 5 \"Verify/AIZU_range-min-query.test.cpp\"\
    \n\nint main() {\n  fastio;\n\n  uint32_t N, Q;\n  cin >> N >> Q;\n\n  auto seg\
    \ = get_segment_tree(N, [](uint32_t a, uint32_t b) { return min(a, b); }, INT_MAX);\n\
    \n  uint32_t T, X, Y;\n  while (Q--) {\n    cin >> T >> X >> Y;\n    if (T ==\
    \ 0)\n      seg.set(X, Y);\n    else\n      cout << seg.prod(X, Y + 1) << nl;\n\
    \  }\n}\n"
  code: "#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_A\"\
    \n\n#include \"../Template/template.hpp\"\n#include \"../DataStructures/segment-tree.hpp\"\
    \n\nint main() {\n  fastio;\n\n  uint32_t N, Q;\n  cin >> N >> Q;\n\n  auto seg\
    \ = get_segment_tree(N, [](uint32_t a, uint32_t b) { return min(a, b); }, INT_MAX);\n\
    \n  uint32_t T, X, Y;\n  while (Q--) {\n    cin >> T >> X >> Y;\n    if (T ==\
    \ 0)\n      seg.set(X, Y);\n    else\n      cout << seg.prod(X, Y + 1) << nl;\n\
    \  }\n}"
  dependsOn:
  - Template/template.hpp
  - DataStructures/segment-tree.hpp
  isVerificationFile: true
  path: Verify/AIZU_range-min-query.test.cpp
  requiredBy: []
  timestamp: '2022-05-18 13:42:44+02:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: Verify/AIZU_range-min-query.test.cpp
layout: document
redirect_from:
- /verify/Verify/AIZU_range-min-query.test.cpp
- /verify/Verify/AIZU_range-min-query.test.cpp.html
title: Verify/AIZU_range-min-query.test.cpp
---
