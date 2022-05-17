---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: DataStructures/persistent-array.hpp
    title: DataStructures/persistent-array.hpp
  - icon: ':heavy_check_mark:'
    path: DataStructures/persistent-union-find.hpp
    title: DataStructures/persistent-union-find.hpp
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
    PROBLEM: https://judge.yosupo.jp/problem/persistent_unionfind
    links:
    - https://judge.yosupo.jp/problem/persistent_unionfind
  bundledCode: "#line 1 \"Verify/LC_persistent_union_find.test.cpp\"\n#define PROBLEM\
    \ \"https://judge.yosupo.jp/problem/persistent_unionfind\"\n\n#line 1 \"Template/template.hpp\"\
    \n#include <iostream>\n#include <iomanip>\n#include <cstdio>\n#include <cmath>\n\
    #include <ctime>\n#include <cstdlib>\n#include <cassert>\n#include <vector>\n\
    #include <list>\n#include <stack>\n#include <queue>\n#include <deque>\n#include\
    \ <map>\n#include <set>\n#include <bitset>\n#include <string>\n#include <algorithm>\n\
    #include <utility>\n#include <complex>\n#include <array>\n#include <random>\n\
    #include <unordered_set>\n#include <unordered_map>\nusing namespace std;\n\n#define\
    \ rep(x, s, t) for (ll x = (s); (x) <= (t); (x)++)\n#define per(x, s, t) for (ll\
    \ x = (s); (x) >= (t); (x)--)\n#define reps(x, s) for (ll x = 0; (x) < (ll)(s).size();\
    \ (x)++)\n#define chmin(x, y) (x) = min((x), (y))\n#define chmax(x, y) (x) = max((x),\
    \ (y))\n#define sz(x) ((ll)(x).size())\n#define all(x) (x).begin(), (x).end()\n\
    #define rall(x) (x).rbegin(), (x).rend()\n#define outl(...) dump_func(__VA_ARGS__)\n\
    #define outf(x) cout << fixed << setprecision(16) << (x) << nl\n#define fastio\
    \ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)\n#define nl \"\\n\"\n#define\
    \ pb push_back\n#define fi first\n#define se second\n#define inf 2e18\n#define\
    \ eps 1e-9\nconst double PI = 3.1415926535897932384626433;\n\ntypedef long long\
    \ ll;\ntypedef unsigned long long ull;\ntypedef pair<ll, ll> P;\n\nconst int mod\
    \ = 1e9 + 7;\n\ntemplate< typename T1, typename T2 >\nostream& operator<<(ostream&\
    \ os, const pair< T1, T2 >& p) {\n  os << p.first << \" \" << p.second;\n  return\
    \ os;\n}\n\ntemplate< typename T1, typename T2 >\nistream& operator>>(istream&\
    \ is, pair< T1, T2 >& p) {\n  is >> p.first >> p.second;\n  return is;\n}\n\n\
    template< typename T >\nostream& operator<<(ostream& os, const vector< T >& v)\
    \ {\n  for (size_t i = 0; i < v.size(); i++) {\n    os << v[i] << (i + 1 != v.size()?\"\
    \ \":\"\");\n  }\n  return os;\n}\n\ntemplate< typename T >\nistream& operator>>(istream&\
    \ is, vector< T >& v) {\n  for (T& in : v) is >> in;\n  return is;\n}\n\ntemplate<\
    \ typename T = int64_t >\nvector< T > make_v(size_t a) {\n  return vector< T >(a);\n\
    }\n\ntemplate< typename T, typename... Ts >\nauto make_v(size_t a, Ts... ts) {\n\
    \  return vector< decltype(make_v< T >(ts...)) >(a, make_v< T >(ts...));\n}\n\n\
    template< typename T, typename V >\ntypename enable_if< is_class< T >::value ==\
    \ 0 >::type fill_v(T& t, const V& v) {\n  t = v;\n}\n\ntemplate< typename T, typename\
    \ V >\ntypename enable_if< is_class< T >::value != 0 >::type fill_v(T& t, const\
    \ V& v) {\n  for (auto& e : t) fill_v(e, v);\n}\n\ntemplate< typename F >\nstruct\
    \ FixPoint : F {\n  explicit FixPoint(F&& f) : F(forward< F >(f)) {}\n\n  template<\
    \ typename... Args >\n  decltype(auto) operator()(Args &&... args) const {\n \
    \   return F::operator()(*this, forward< Args >(args)...);\n  }\n};\n\ntemplate<\
    \ typename F >\ninline decltype(auto) MFP(F&& f) {\n  return FixPoint< F >{forward<\
    \ F >(f)};\n}\n#line 1 \"DataStructures/persistent-array.hpp\"\ntemplate<typename\
    \ T, int LOG>\nstruct PersistentArray {\n  struct Node {\n    T data;\n    Node*\
    \ child[1 << LOG] = {};\n\n    Node() {}\n\n    Node(const T& data) : data(data)\
    \ {}\n  };\n\n  Node* root;\n\n  PersistentArray() : root(nullptr) {}\n\n  T get(Node*\
    \ t, int k) {\n    if (k == 0) return t->data;\n    return get(t->child[k & ((1\
    \ << LOG) - 1)], k >> LOG);\n  }\n\n  T get(const int& k) {\n    return get(root,\
    \ k);\n  }\n\n  pair<Node*, T*> mutable_get(Node* t, int k) {\n    t = t?new Node(*t):new\
    \ Node();\n    if (k == 0) return { t, &t->data };\n    auto p = mutable_get(t->child[k\
    \ & ((1 << LOG) - 1)], k >> LOG);\n    t->child[k & ((1 << LOG) - 1)] = p.first;\n\
    \    return { t, p.second };\n  }\n\n  T* mutable_get(const int& k) {\n    auto\
    \ ret = mutable_get(root, k);\n    root = ret.first;\n    return ret.second;\n\
    \  }\n\n  Node* build(Node* t, const T& data, int k) {\n    if (!t) t = new Node();\n\
    \    if (k == 0) {\n      t->data = data;\n      return t;\n    }\n    auto p\
    \ = build(t->child[k & ((1 << LOG) - 1)], data, k >> LOG);\n    t->child[k & ((1\
    \ << LOG) - 1)] = p;\n    return t;\n  }\n\n  void build(const vector< T >& v)\
    \ {\n    root = nullptr;\n    for (int i = 0; i < (int)v.size(); i++) {\n    \
    \  root = build(root, v[i], i);\n    }\n  }\n};\n#line 1 \"DataStructures/persistent-union-find.hpp\"\
    \n\nstruct PersistentUnionFind {\n  PersistentArray<int, 3> data;\n\n  PersistentUnionFind()\
    \ {}\n\n  PersistentUnionFind(int sz) {\n    data.build(vector<int>(sz, -1));\n\
    \  }\n\n  int find(int k) {\n    int p = data.get(k);\n    return p >= 0?find(p):k;\n\
    \  }\n\n  int size(int k) {\n    return (-data.get(find(k)));\n  }\n\n  bool unite(int\
    \ x, int y) {\n    x = find(x);\n    y = find(y);\n    if (x == y) return false;\n\
    \    auto u = data.get(x);\n    auto v = data.get(y);\n\n    if (u < v) {\n  \
    \    auto a = data.mutable_get(x);\n      *a += v;\n      auto b = data.mutable_get(y);\n\
    \      *b = x;\n    }\n    else {\n      auto a = data.mutable_get(y);\n     \
    \ *a += u;\n      auto b = data.mutable_get(x);\n      *b = y;\n    }\n    return\
    \ true;\n  }\n};\n#line 6 \"Verify/LC_persistent_union_find.test.cpp\"\n\nint\
    \ main() {\n  fastio;\n  int N, Q;\n  cin >> N >> Q;\n  vector<PersistentUnionFind>\
    \ uf(Q + 1);\n  uf[0] = PersistentUnionFind(N);\n  for (int i = 1; i <= Q; i++)\
    \ {\n    int t, k, u, v;\n    cin >> t >> k >> u >> v;\n    ++k;\n    if (t ==\
    \ 0) {\n      uf[i] = uf[k];\n      uf[i].unite(u, v);\n    }\n    else {\n  \
    \    cout << (uf[k].find(u) == uf[k].find(v)) << \"\\n\";\n    }\n  }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/persistent_unionfind\"\n\
    \n#include \"Template/template.hpp\"\n#include \"DataStructures/persistent-array.hpp\"\
    \n#include \"DataStructures/persistent-union-find.hpp\"\n\nint main() {\n  fastio;\n\
    \  int N, Q;\n  cin >> N >> Q;\n  vector<PersistentUnionFind> uf(Q + 1);\n  uf[0]\
    \ = PersistentUnionFind(N);\n  for (int i = 1; i <= Q; i++) {\n    int t, k, u,\
    \ v;\n    cin >> t >> k >> u >> v;\n    ++k;\n    if (t == 0) {\n      uf[i] =\
    \ uf[k];\n      uf[i].unite(u, v);\n    }\n    else {\n      cout << (uf[k].find(u)\
    \ == uf[k].find(v)) << \"\\n\";\n    }\n  }\n}"
  dependsOn:
  - Template/template.hpp
  - DataStructures/persistent-array.hpp
  - DataStructures/persistent-union-find.hpp
  isVerificationFile: true
  path: Verify/LC_persistent_union_find.test.cpp
  requiredBy: []
  timestamp: '2022-05-17 22:47:24+02:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Verify/LC_persistent_union_find.test.cpp
layout: document
redirect_from:
- /verify/Verify/LC_persistent_union_find.test.cpp
- /verify/Verify/LC_persistent_union_find.test.cpp.html
title: Verify/LC_persistent_union_find.test.cpp
---
