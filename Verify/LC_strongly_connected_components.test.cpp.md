---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: Graphs/graph-template.hpp
    title: Graphs/graph-template.hpp
  - icon: ':x:'
    path: Graphs/strongly-connected-components.hpp
    title: Graphs/strongly-connected-components.hpp
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
    PROBLEM: https://judge.yosupo.jp/problem/scc
    links:
    - https://judge.yosupo.jp/problem/scc
  bundledCode: "#line 1 \"Verify/LC_strongly_connected_components.test.cpp\"\n#define\
    \ PROBLEM \"https://judge.yosupo.jp/problem/scc\"\n\n#line 1 \"Template/template.hpp\"\
    \n#include <bits/stdc++.h>\nusing namespace std;\n\n#define reps(x, s) for (ll\
    \ x = 0; (x) < (ll)(s).size(); (x)++)\n#define chmin(x, y) (x) = min((x), (y))\n\
    #define chmax(x, y) (x) = max((x), (y))\n#define all(x) (x).begin(), (x).end()\n\
    #define rall(x) (x).rbegin(), (x).rend()\n#define outl(...) dump_func(__VA_ARGS__)\n\
    #define outf(x) cout << fixed << setprecision(16) << (x) << nl\n#define fastio\
    \ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)\n#define nl \"\\n\"\n#define\
    \ pb push_back\n#define fi first\n#define se second\n#define inf 2e18\n#define\
    \ eps 1e-9\nconst double PI = 3.1415926535897932384626433;\n\ntypedef long long\
    \ ll;\ntypedef unsigned long long ull;\ntypedef pair<ll, ll> P;\ntypedef vector<int>\
    \ vi;\ntypedef vector<vi> vvi;\ntypedef vector<pair<int, int>> vpii;\n\nconst\
    \ int mod = 1e9 + 7;\n\ntemplate <class S, class T>\npair<S, T>& operator+=(pair<S,\
    \ T>& s, const pair<S, T>& t) {\n  s.first += t.first, s.second += t.second;\n\
    \  return s;\n}\ntemplate <class S, class T>\npair<S, T>& operator-=(pair<S, T>&\
    \ s, const pair<S, T>& t) {\n  s.first -= t.first, s.second -= t.second;\n  return\
    \ s;\n}\ntemplate <class S, class T>\npair<S, T> operator+(const pair<S, T>& s,\
    \ const pair<S, T>& t) {\n  return pair<S, T>(s.first + t.first, s.second + t.second);\n\
    }\ntemplate <class S, class T>\npair<S, T> operator-(const pair<S, T>& s, const\
    \ pair<S, T>& t) {\n  return pair<S, T>(s.first - t.first, s.second - t.second);\n\
    }\ntemplate <class T> T dot(const pair<T, T>& s, const pair<T, T>& t) {\n  return\
    \ s.first * t.first + s.second * t.second;\n}\ntemplate <class T> T cross(const\
    \ pair<T, T>& s, const pair<T, T>& t) {\n  return s.first * t.second - s.second\
    \ * t.first;\n}\n\ntemplate <typename T> ostream& operator<<(ostream& os, vector<T>&\
    \ vec) {\n  reps(i, vec) os << vec[i] << \" \";\n  return os;\n}\ntemplate <typename\
    \ T> ostream& operator<<(ostream& os, const vector<T>& vec) {\n  reps(i, vec)\
    \ os << vec[i] << \" \";\n  return os;\n}\ntemplate <typename T> ostream& operator<<(ostream&\
    \ os, list<T>& ls) {\n  for (auto x : ls)\n    os << x << \" \";\n  return os;\n\
    }\ntemplate <typename T> ostream& operator<<(ostream& os, const list<T>& ls) {\n\
    \  for (auto x : ls)\n    os << x << \" \";\n  return os;\n}\ntemplate <typename\
    \ T> ostream& operator<<(ostream& os, deque<T>& deq) {\n  reps(i, deq) os << deq[i]\
    \ << \" \";\n  return os;\n}\ntemplate <typename T, typename U>\nostream& operator<<(ostream&\
    \ os, pair<T, U>& ope) {\n  os << \"(\" << ope.first << \", \" << ope.second <<\
    \ \")\";\n  return os;\n}\ntemplate <typename T, typename U>\nostream& operator<<(ostream&\
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
    }\n#line 2 \"Graphs/graph-template.hpp\"\n\ntemplate<typename T = int>\nstruct\
    \ Edge {\n  int from, to;\n  T cost;\n  int idx;\n\n  Edge() = default;\n\n  Edge(int\
    \ from, int to, T cost = 1, int idx = -1) : from(from), to(to), cost(cost), idx(idx)\
    \ {}\n\n  operator int() const { return to; }\n};\n\ntemplate<typename T = int>\n\
    struct Graph {\n  vector<vector<Edge<T>>> g;\n  int es;\n\n  Graph() = default;\n\
    \n  explicit Graph(int n) : g(n), es(0) {}\n\n  size_t size() const {\n    return\
    \ g.size();\n  }\n\n  void add_directed_edge(int from, int to, T cost = 1) {\n\
    \    g[from].emplace_back(from, to, cost, es++);\n  }\n\n  void add_edge(int from,\
    \ int to, T cost = 1) {\n    g[from].emplace_back(from, to, cost, es);\n    g[to].emplace_back(to,\
    \ from, cost, es++);\n  }\n\n  void read(int M, int padding = -1, bool weighted\
    \ = false, bool directed = false) {\n    for (int i = 0; i < M; i++) {\n     \
    \ int a, b;\n      cin >> a >> b;\n      a += padding;\n      b += padding;\n\
    \      T c = T(1);\n      if (weighted) cin >> c;\n      if (directed) add_directed_edge(a,\
    \ b, c);\n      else add_edge(a, b, c);\n    }\n  }\n\n  inline vector<Edge<T>>&\
    \ operator[](const int& k) {\n    return g[k];\n  }\n\n  inline const vector<Edge<T>>&\
    \ operator[](const int& k) const {\n    return g[k];\n  }\n};\n\ntemplate<typename\
    \ T = int>\nusing Edges = vector<Edge<T>>;\n#line 2 \"Graphs/strongly-connected-components.hpp\"\
    \ntemplate<typename T = int>\nstruct StronglyConnectedComponents : Graph<T> {\n\
    public:\n  using Graph<T>::Graph;\n  using Graph<T>::g;\n  vector<int> comp;\n\
    \  Graph<T> dag;\n  vector<vector<int>> group;\n\n  void build() {\n    rg = Graph<T>(g.size());\n\
    \    for (size_t i = 0; i < g.size(); i++) {\n      for (auto& e : g[i]) {\n \
    \       rg.add_directed_edge(e.to, e.from, e.cost);\n      }\n    }\n    comp.assign(g.size(),\
    \ -1);\n    used.assign(g.size(), 0);\n    for (size_t i = 0; i < g.size(); i++)\
    \ dfs(i);\n    reverse(begin(order), end(order));\n    int ptr = 0;\n    for (int\
    \ i:order) if (comp[i] == -1) rdfs(i, ptr), ptr++;\n    dag = Graph< T >(ptr);\n\
    \    for (size_t i = 0; i < g.size(); i++) {\n      for (auto& e : g[i]) {\n \
    \       int x = comp[e.from], y = comp[e.to];\n        if (x == y) continue;\n\
    \        dag.add_directed_edge(x, y, e.cost);\n      }\n    }\n    group.resize(ptr);\n\
    \    for (size_t i = 0; i < g.size(); i++) {\n      group[comp[i]].emplace_back(i);\n\
    \    }\n  }\n\n  int operator[](int k) const {\n    return comp[k];\n  }\n\nprivate:\n\
    \  vector< int > order, used;\n  Graph<T> rg;\n\n  void dfs(int idx) {\n    if\
    \ (exchange(used[idx], true)) return;\n    for (auto& to : g[idx]) dfs(to);\n\
    \    order.push_back(idx);\n  }\n\n  void rdfs(int idx, int cnt) {\n    if (comp[idx]\
    \ != -1) return;\n    comp[idx] = cnt;\n    for (auto& to : rg.g[idx]) rdfs(to,\
    \ cnt);\n  }\n};\n#line 5 \"Verify/LC_strongly_connected_components.test.cpp\"\
    \n\nint main() {\n  fastio;\n\n  int N, M;\n  cin >> N >> M;\n  StronglyConnectedComponents<>\
    \ g(N);\n\n  g.read(M, 0, false, true);\n  g.build();\n  cout << g.group.size()\
    \ << nl;\n  for (auto& p : g.group) {\n    cout << p.size() << \" \" << p << nl;\n\
    \  }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/scc\"\n\n#include \"../Template/template.hpp\"\
    \n#include \"../Graphs/strongly-connected-components.hpp\"\n\nint main() {\n \
    \ fastio;\n\n  int N, M;\n  cin >> N >> M;\n  StronglyConnectedComponents<> g(N);\n\
    \n  g.read(M, 0, false, true);\n  g.build();\n  cout << g.group.size() << nl;\n\
    \  for (auto& p : g.group) {\n    cout << p.size() << \" \" << p << nl;\n  }\n\
    }"
  dependsOn:
  - Template/template.hpp
  - Graphs/strongly-connected-components.hpp
  - Graphs/graph-template.hpp
  isVerificationFile: true
  path: Verify/LC_strongly_connected_components.test.cpp
  requiredBy: []
  timestamp: '2022-05-19 09:20:43+02:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: Verify/LC_strongly_connected_components.test.cpp
layout: document
redirect_from:
- /verify/Verify/LC_strongly_connected_components.test.cpp
- /verify/Verify/LC_strongly_connected_components.test.cpp.html
title: Verify/LC_strongly_connected_components.test.cpp
---
