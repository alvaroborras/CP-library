---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: Math/enumerate_primes.hpp
    title: Math/enumerate_primes.hpp
  - icon: ':x:'
    path: Math/prime-table.hpp
    title: Math/prime-table.hpp
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
    PROBLEM: https://judge.yosupo.jp/problem/enumerate_primes
    links:
    - https://judge.yosupo.jp/problem/enumerate_primes
  bundledCode: "#line 1 \"Verify/LC_enumerate_primes.test.cpp\"\n#define PROBLEM \"\
    https://judge.yosupo.jp/problem/enumerate_primes\"\n\n#line 1 \"Template/template.hpp\"\
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
    }\n#line 1 \"Math/enumerate_primes.hpp\"\n\n#line 1 \"Math/prime-table.hpp\"\n\
    vector<bool> prime_table(int n) {\n  vector<bool> prime(n + 1, true);\n  if (n\
    \ >= 0) prime[0] = false;\n  if (n >= 1) prime[1] = false;\n  for (int i = 2;\
    \ i * i <= n; i++) {\n    if (!prime[i]) continue;\n    for (int j = i * i; j\
    \ <= n; j += i) {\n      prime[j] = false;\n    }\n  }\n  return prime;\n}\n#line\
    \ 3 \"Math/enumerate_primes.hpp\"\nvector<int> enumerate_primes(int n) {\n  if\
    \ (n <= 1) return {};\n  auto d = prime_table(n);\n  vector<int> primes;\n  primes.reserve(count(d.begin(),\
    \ d.end(), true));\n  for (size_t i = 0; i < d.size(); i++) {\n    if (d[i]) primes.push_back(i);\n\
    \  }\n  return primes;\n}\n#line 5 \"Verify/LC_enumerate_primes.test.cpp\"\n\n\
    int main() {\n  fastio;\n  int N, A, B;\n  cin >> N >> A >> B;\n  vector<int>\
    \ d = enumerate_primes(N);\n  vector<int> ans;\n  for (size_t i = B; i < d.size();\
    \ i += A) {\n    ans.emplace_back(d[i]);\n  }\n  cout << d.size() << \" \" <<\
    \ ans.size() << nl;\n  for (auto x : ans)\n    cout << x << \" \";\n  cout <<\
    \ nl;\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/enumerate_primes\"\n\n\
    #include \"../Template/template.hpp\"\n#include \"../Math/enumerate_primes.hpp\"\
    \n\nint main() {\n  fastio;\n  int N, A, B;\n  cin >> N >> A >> B;\n  vector<int>\
    \ d = enumerate_primes(N);\n  vector<int> ans;\n  for (size_t i = B; i < d.size();\
    \ i += A) {\n    ans.emplace_back(d[i]);\n  }\n  cout << d.size() << \" \" <<\
    \ ans.size() << nl;\n  for (auto x : ans)\n    cout << x << \" \";\n  cout <<\
    \ nl;\n}"
  dependsOn:
  - Template/template.hpp
  - Math/enumerate_primes.hpp
  - Math/prime-table.hpp
  isVerificationFile: true
  path: Verify/LC_enumerate_primes.test.cpp
  requiredBy: []
  timestamp: '2022-05-19 09:20:43+02:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: Verify/LC_enumerate_primes.test.cpp
layout: document
redirect_from:
- /verify/Verify/LC_enumerate_primes.test.cpp
- /verify/Verify/LC_enumerate_primes.test.cpp.html
title: Verify/LC_enumerate_primes.test.cpp
---