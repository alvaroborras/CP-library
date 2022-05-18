---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: DataStructures/weighted-union-find.hpp
    title: DataStructures/weighted-union-find.hpp
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
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_B
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_B
  bundledCode: "#line 1 \"Verify/AIZU_weighted_union_find.test.cpp\"\n#define PROBLEM\
    \ \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_B\"\n\n#line\
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
    \ MFP(F&& f) {\n  return FixPoint< F >{forward< F >(f)};\n}\n#line 1 \"DataStructures/weighted-union-find.hpp\"\
    \ntemplate<typename T>\nstruct WeightedUnionFind {\n  vector<int> data;\n  vector<T>\
    \ ws;\n\n  WeightedUnionFind() {}\n\n  WeightedUnionFind(int sz) : data(sz, -1),\
    \ ws(sz) {}\n\n  int find(int k) {\n    if (data[k] < 0) return k;\n    auto par\
    \ = find(data[k]);\n    ws[k] += ws[data[k]];\n    return data[k] = par;\n  }\n\
    \n  T weight(int t) {\n    find(t);\n    return ws[t];\n  }\n\n  bool unite(int\
    \ x, int y, T w) {\n    w += weight(x);\n    w -= weight(y);\n    x = find(x),\
    \ y = find(y);\n    if (x == y) return false;\n    if (data[x] > data[y]) {\n\
    \      swap(x, y);\n      w *= -1;\n    }\n    data[x] += data[y];\n    data[y]\
    \ = x;\n    ws[y] = w;\n    return true;\n  }\n\n  T diff(int x, int y) {\n  \
    \  return weight(y) - weight(x);\n  }\n};\n#line 5 \"Verify/AIZU_weighted_union_find.test.cpp\"\
    \n\nint main() {\n  fastio;\n\n  int N, M;\n  cin >> N >> M;\n  WeightedUnionFind<int>\
    \ tree(N);\n  while (M--) {\n    int A, B, C, D;\n    cin >> A >> B >> C;\n  \
    \  if (A == 0) {\n      cin >> D;\n      tree.unite(B, C, D);\n    }\n    else\
    \ {\n      if (tree.find(B) == tree.find(C)) {\n        cout << tree.diff(B, C)\
    \ << endl;\n      }\n      else {\n        cout << \"?\" << endl;\n      }\n \
    \   }\n  }\n}\n"
  code: "#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_B\"\
    \n\n#include \"../Template/template.hpp\"\n#include \"../DataStructures/weighted-union-find.hpp\"\
    \n\nint main() {\n  fastio;\n\n  int N, M;\n  cin >> N >> M;\n  WeightedUnionFind<int>\
    \ tree(N);\n  while (M--) {\n    int A, B, C, D;\n    cin >> A >> B >> C;\n  \
    \  if (A == 0) {\n      cin >> D;\n      tree.unite(B, C, D);\n    }\n    else\
    \ {\n      if (tree.find(B) == tree.find(C)) {\n        cout << tree.diff(B, C)\
    \ << endl;\n      }\n      else {\n        cout << \"?\" << endl;\n      }\n \
    \   }\n  }\n}"
  dependsOn:
  - Template/template.hpp
  - DataStructures/weighted-union-find.hpp
  isVerificationFile: true
  path: Verify/AIZU_weighted_union_find.test.cpp
  requiredBy: []
  timestamp: '2022-05-18 14:29:14+02:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Verify/AIZU_weighted_union_find.test.cpp
layout: document
redirect_from:
- /verify/Verify/AIZU_weighted_union_find.test.cpp
- /verify/Verify/AIZU_weighted_union_find.test.cpp.html
title: Verify/AIZU_weighted_union_find.test.cpp
---
