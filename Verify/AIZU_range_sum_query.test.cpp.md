---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: DataStructures/binary-indexed-tree.hpp
    title: DataStructures/binary-indexed-tree.hpp
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
    PROBLEM: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_B
    links:
    - http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_B
  bundledCode: "#line 1 \"Verify/AIZU_range_sum_query.test.cpp\"\n#define PROBLEM\
    \ \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_B\"\n\n#line\
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
    \ MFP(F&& f) {\n  return FixPoint< F >{forward< F >(f)};\n}\n#line 1 \"DataStructures/binary-indexed-tree.hpp\"\
    \ntemplate<typename T>\nstruct BinaryIndexedTree {\nprivate:\n  int n;\n  vector<T>\
    \ data;\n\npublic:\n  BinaryIndexedTree() = default;\n\n  explicit BinaryIndexedTree(int\
    \ n) : n(n) {\n    data.assign(n + 1, 0);\n  }\n\n  explicit BinaryIndexedTree(const\
    \ vector<T>& v) :\n    BinaryIndexedTree((int)v.size()) {\n    build(v);\n  }\n\
    \n  void build(const vector<T>& v) {\n    assert(n == (int)v.size());\n    for\
    \ (int i = 1; i <= n; i++) data[i] = v[i - 1];\n    for (int i = 1; i <= n; i++)\
    \ {\n      int j = i + (i & -i);\n      if (j <= n) data[j] += data[i];\n    }\n\
    \  }\n\n  void apply(int k, const T& x) {\n    for (++k; k <= n; k += k & -k)\
    \ data[k] += x;\n  }\n\n  T prod(int r) const {\n    T ret = T();\n    for (;\
    \ r > 0; r -= r & -r) ret += data[r];\n    return ret;\n  }\n\n  T prod(int l,\
    \ int r) const {\n    return prod(r) - prod(l);\n  }\n\n  int lower_bound(T x)\
    \ const {\n    int i = 0;\n    for (int k = 1 << (__lg(n) + 1); k > 0; k >>= 1)\
    \ {\n      if (i + k <= n && data[i + k] < x) {\n        x -= data[i + k];\n \
    \       i += k;\n      }\n    }\n    return i;\n  }\n\n  int upper_bound(T x)\
    \ const {\n    int i = 0;\n    for (int k = 1 << (__lg(n) + 1); k > 0; k >>= 1)\
    \ {\n      if (i + k <= n && data[i + k] <= x) {\n        x -= data[i + k];\n\
    \        i += k;\n      }\n    }\n    return i;\n  }\n};\n#line 5 \"Verify/AIZU_range_sum_query.test.cpp\"\
    \n\nint main() {\n  uint32_t N, Q;\n  cin >> N >> Q;\n\n  BinaryIndexedTree<uint32_t>\
    \ bit(N);\n\n  uint32_t T, X, Y;\n  while (Q--) {\n    cin >> T >> X >> Y;\n \
    \   if (T == 0)\n      bit.apply(X - 1, Y);\n    else\n      cout << bit.prod(X\
    \ - 1, Y) << nl;\n  }\n}\n"
  code: "#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_B\"\
    \n\n#include \"../Template/template.hpp\"\n#include \"../DataStructures/binary-indexed-tree.hpp\"\
    \n\nint main() {\n  uint32_t N, Q;\n  cin >> N >> Q;\n\n  BinaryIndexedTree<uint32_t>\
    \ bit(N);\n\n  uint32_t T, X, Y;\n  while (Q--) {\n    cin >> T >> X >> Y;\n \
    \   if (T == 0)\n      bit.apply(X - 1, Y);\n    else\n      cout << bit.prod(X\
    \ - 1, Y) << nl;\n  }\n}"
  dependsOn:
  - Template/template.hpp
  - DataStructures/binary-indexed-tree.hpp
  isVerificationFile: true
  path: Verify/AIZU_range_sum_query.test.cpp
  requiredBy: []
  timestamp: '2022-05-18 14:29:14+02:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Verify/AIZU_range_sum_query.test.cpp
layout: document
redirect_from:
- /verify/Verify/AIZU_range_sum_query.test.cpp
- /verify/Verify/AIZU_range_sum_query.test.cpp.html
title: Verify/AIZU_range_sum_query.test.cpp
---
