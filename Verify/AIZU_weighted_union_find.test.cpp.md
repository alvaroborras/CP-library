---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: DataStructures/weighted-union-find.hpp
    title: DataStructures/weighted-union-find.hpp
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
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_B
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_B
  bundledCode: "#line 1 \"Verify/AIZU_weighted_union_find.test.cpp\"\n#define PROBLEM\
    \ \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_B\"\n\n#line\
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
    }\n#line 1 \"DataStructures/weighted-union-find.hpp\"\ntemplate<typename T>\n\
    struct WeightedUnionFind {\n  vector<int> data;\n  vector<T> ws;\n\n  WeightedUnionFind()\
    \ {}\n\n  WeightedUnionFind(int sz) : data(sz, -1), ws(sz) {}\n\n  int find(int\
    \ k) {\n    if (data[k] < 0) return k;\n    auto par = find(data[k]);\n    ws[k]\
    \ += ws[data[k]];\n    return data[k] = par;\n  }\n\n  T weight(int t) {\n   \
    \ find(t);\n    return ws[t];\n  }\n\n  bool unite(int x, int y, T w) {\n    w\
    \ += weight(x);\n    w -= weight(y);\n    x = find(x), y = find(y);\n    if (x\
    \ == y) return false;\n    if (data[x] > data[y]) {\n      swap(x, y);\n     \
    \ w *= -1;\n    }\n    data[x] += data[y];\n    data[y] = x;\n    ws[y] = w;\n\
    \    return true;\n  }\n\n  T diff(int x, int y) {\n    return weight(y) - weight(x);\n\
    \  }\n};\n#line 5 \"Verify/AIZU_weighted_union_find.test.cpp\"\n\nint main() {\n\
    \  fastio;\n\n  int N, M;\n  cin >> N >> M;\n  WeightedUnionFind<int> tree(N);\n\
    \  while (M--) {\n    int A, B, C, D;\n    cin >> A >> B >> C;\n    if (A == 0)\
    \ {\n      cin >> D;\n      tree.unite(B, C, D);\n    }\n    else {\n      if\
    \ (tree.find(B) == tree.find(C)) {\n        cout << tree.diff(B, C) << endl;\n\
    \      }\n      else {\n        cout << \"?\" << endl;\n      }\n    }\n  }\n\
    }\n"
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
  timestamp: '2022-05-19 09:20:43+02:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: Verify/AIZU_weighted_union_find.test.cpp
layout: document
redirect_from:
- /verify/Verify/AIZU_weighted_union_find.test.cpp
- /verify/Verify/AIZU_weighted_union_find.test.cpp.html
title: Verify/AIZU_weighted_union_find.test.cpp
---
