---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: DataStructures/binary-indexed-tree.hpp
    title: DataStructures/binary-indexed-tree.hpp
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
    PROBLEM: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_B
    links:
    - http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_B
  bundledCode: "#line 1 \"Verify/AIZU_range_sum_query.test.cpp\"\n#define PROBLEM\
    \ \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_B\"\n\n#line\
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
    }\n#line 1 \"DataStructures/binary-indexed-tree.hpp\"\ntemplate<typename T>\n\
    struct BinaryIndexedTree {\nprivate:\n  int n;\n  vector<T> data;\n\npublic:\n\
    \  BinaryIndexedTree() = default;\n\n  explicit BinaryIndexedTree(int n) : n(n)\
    \ {\n    data.assign(n + 1, 0);\n  }\n\n  explicit BinaryIndexedTree(const vector<T>&\
    \ v) :\n    BinaryIndexedTree((int)v.size()) {\n    build(v);\n  }\n\n  void build(const\
    \ vector<T>& v) {\n    assert(n == (int)v.size());\n    for (int i = 1; i <= n;\
    \ i++) data[i] = v[i - 1];\n    for (int i = 1; i <= n; i++) {\n      int j =\
    \ i + (i & -i);\n      if (j <= n) data[j] += data[i];\n    }\n  }\n\n  void apply(int\
    \ k, const T& x) {\n    for (++k; k <= n; k += k & -k) data[k] += x;\n  }\n\n\
    \  T prod(int r) const {\n    T ret = T();\n    for (; r > 0; r -= r & -r) ret\
    \ += data[r];\n    return ret;\n  }\n\n  T prod(int l, int r) const {\n    return\
    \ prod(r) - prod(l);\n  }\n\n  int lower_bound(T x) const {\n    int i = 0;\n\
    \    for (int k = 1 << (__lg(n) + 1); k > 0; k >>= 1) {\n      if (i + k <= n\
    \ && data[i + k] < x) {\n        x -= data[i + k];\n        i += k;\n      }\n\
    \    }\n    return i;\n  }\n\n  int upper_bound(T x) const {\n    int i = 0;\n\
    \    for (int k = 1 << (__lg(n) + 1); k > 0; k >>= 1) {\n      if (i + k <= n\
    \ && data[i + k] <= x) {\n        x -= data[i + k];\n        i += k;\n      }\n\
    \    }\n    return i;\n  }\n};\n#line 5 \"Verify/AIZU_range_sum_query.test.cpp\"\
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
  timestamp: '2022-05-19 09:20:43+02:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: Verify/AIZU_range_sum_query.test.cpp
layout: document
redirect_from:
- /verify/Verify/AIZU_range_sum_query.test.cpp
- /verify/Verify/AIZU_range_sum_query.test.cpp.html
title: Verify/AIZU_range_sum_query.test.cpp
---
