---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: Math/modint.hpp
    title: Math/modint.hpp
  - icon: ':x:'
    path: Math/number-theoretic-transform.hpp
    title: Math/number-theoretic-transform.hpp
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
    PROBLEM: https://judge.yosupo.jp/problem/convolution_mod
    links:
    - https://judge.yosupo.jp/problem/convolution_mod
  bundledCode: "#line 1 \"Verify/LC_convolution_mod_2.test.cpp\"\n#define PROBLEM\
    \ \"https://judge.yosupo.jp/problem/convolution_mod\"\n\n#line 1 \"Template/template.hpp\"\
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
    }\n#line 1 \"Math/modint.hpp\"\ntemplate<int mod>\nstruct ModInt {\n  int x;\n\
    \n  ModInt() : x(0) {}\n\n  ModInt(int64_t y) : x(y >= 0?y % mod:(mod - (-y) %\
    \ mod) % mod) {}\n\n  ModInt& operator+=(const ModInt& p) {\n    if ((x += p.x)\
    \ >= mod) x -= mod;\n    return *this;\n  }\n\n  ModInt& operator-=(const ModInt&\
    \ p) {\n    if ((x += mod - p.x) >= mod) x -= mod;\n    return *this;\n  }\n\n\
    \  ModInt& operator*=(const ModInt& p) {\n    x = (int)(1LL * x * p.x % mod);\n\
    \    return *this;\n  }\n\n  ModInt& operator/=(const ModInt& p) {\n    *this\
    \ *= p.inverse();\n    return *this;\n  }\n\n  ModInt operator-() const { return\
    \ ModInt(-x); }\n\n  ModInt operator+(const ModInt& p) const { return ModInt(*this)\
    \ += p; }\n\n  ModInt operator-(const ModInt& p) const { return ModInt(*this)\
    \ -= p; }\n\n  ModInt operator*(const ModInt& p) const { return ModInt(*this)\
    \ *= p; }\n\n  ModInt operator/(const ModInt& p) const { return ModInt(*this)\
    \ /= p; }\n\n  bool operator==(const ModInt& p) const { return x == p.x; }\n\n\
    \  bool operator!=(const ModInt& p) const { return x != p.x; }\n\n  ModInt inverse()\
    \ const {\n    int a = x, b = mod, u = 1, v = 0, t;\n    while (b > 0) {\n   \
    \   t = a / b;\n      swap(a -= t * b, b);\n      swap(u -= t * v, v);\n    }\n\
    \    return ModInt(u);\n  }\n\n  ModInt pow(int64_t n) const {\n    ModInt ret(1),\
    \ mul(x);\n    while (n > 0) {\n      if (n & 1) ret *= mul;\n      mul *= mul;\n\
    \      n >>= 1;\n    }\n    return ret;\n  }\n\n  friend ostream& operator<<(ostream&\
    \ os, const ModInt& p) {\n    return os << p.x;\n  }\n\n  friend istream& operator>>(istream&\
    \ is, ModInt& a) {\n    int64_t t;\n    is >> t;\n    a = ModInt<mod>(t);\n  \
    \  return (is);\n  }\n\n  static int get_mod() { return mod; }\n};\n\nusing modint\
    \ = ModInt<mod>;\n#line 1 \"Math/number-theoretic-transform.hpp\"\n\ntemplate<int\
    \ mod>\nstruct NumberTheoreticTransform {\n\n  vector< int > rev, rts;\n  int\
    \ base, max_base, root;\n\n  NumberTheoreticTransform() : base(1), rev{ 0, 1 },\
    \ rts{ 0, 1 } {\n    assert(mod >= 3 && mod % 2 == 1);\n    auto tmp = mod - 1;\n\
    \    max_base = 0;\n    while (tmp % 2 == 0) tmp >>= 1, max_base++;\n    root\
    \ = 2;\n    while (mod_pow(root, (mod - 1) >> 1) == 1) ++root;\n    assert(mod_pow(root,\
    \ mod - 1) == 1);\n    root = mod_pow(root, (mod - 1) >> max_base);\n  }\n\n \
    \ inline int mod_pow(int x, int n) {\n    int ret = 1;\n    while (n > 0) {\n\
    \      if (n & 1) ret = mul(ret, x);\n      x = mul(x, x);\n      n >>= 1;\n \
    \   }\n    return ret;\n  }\n\n  inline int inverse(int x) {\n    return mod_pow(x,\
    \ mod - 2);\n  }\n\n  inline unsigned add(unsigned x, unsigned y) {\n    x +=\
    \ y;\n    if (x >= mod) x -= mod;\n    return x;\n  }\n\n  inline unsigned mul(unsigned\
    \ a, unsigned b) {\n    return 1ull * a * b % (unsigned long long) mod;\n  }\n\
    \n  void ensure_base(int nbase) {\n    if (nbase <= base) return;\n    rev.resize(1\
    \ << nbase);\n    rts.resize(1 << nbase);\n    for (int i = 0; i < (1 << nbase);\
    \ i++) {\n      rev[i] = (rev[i >> 1] >> 1) + ((i & 1) << (nbase - 1));\n    }\n\
    \    assert(nbase <= max_base);\n    while (base < nbase) {\n      int z = mod_pow(root,\
    \ 1 << (max_base - 1 - base));\n      for (int i = 1 << (base - 1); i < (1 <<\
    \ base); i++) {\n        rts[i << 1] = rts[i];\n        rts[(i << 1) + 1] = mul(rts[i],\
    \ z);\n      }\n      ++base;\n    }\n  }\n\n  void ntt(vector<int>& a) {\n  \
    \  const int n = (int)a.size();\n    assert((n & (n - 1)) == 0);\n    int zeros\
    \ = __builtin_ctz(n);\n    ensure_base(zeros);\n    int shift = base - zeros;\n\
    \    for (int i = 0; i < n; i++) {\n      if (i < (rev[i] >> shift)) {\n     \
    \   swap(a[i], a[rev[i] >> shift]);\n      }\n    }\n    for (int k = 1; k < n;\
    \ k <<= 1) {\n      for (int i = 0; i < n; i += 2 * k) {\n        for (int j =\
    \ 0; j < k; j++) {\n          int z = mul(a[i + j + k], rts[j + k]);\n       \
    \   a[i + j + k] = add(a[i + j], mod - z);\n          a[i + j] = add(a[i + j],\
    \ z);\n        }\n      }\n    }\n  }\n\n  vector<int> multiply(vector<int> a,\
    \ vector<int> b) {\n    int need = a.size() + b.size() - 1;\n    int nbase = 1;\n\
    \    while ((1 << nbase) < need) nbase++;\n    ensure_base(nbase);\n    int sz\
    \ = 1 << nbase;\n    a.resize(sz, 0);\n    b.resize(sz, 0);\n    ntt(a);\n   \
    \ ntt(b);\n    int inv_sz = inverse(sz);\n    for (int i = 0; i < sz; i++) {\n\
    \      a[i] = mul(a[i], mul(b[i], inv_sz));\n    }\n    reverse(a.begin() + 1,\
    \ a.end());\n    ntt(a);\n    a.resize(need);\n    return a;\n  }\n};\n#line 6\
    \ \"Verify/LC_convolution_mod_2.test.cpp\"\n\nconst int MOD = 998244353;\n\nint\
    \ main() {\n  fastio;\n  int N, M;\n  cin >> N >> M;\n\n  vector<int> A(N), B(M);\n\
    \  for (auto& a : A)\n    cin >> a;\n  for (auto& b : B)\n    cin >> b;\n  NumberTheoreticTransform<MOD>\
    \ ntt;\n  for (auto& c : ntt.multiply(A, B))\n    cout << c << \" \";\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/convolution_mod\"\n\n#include\
    \ \"../Template/template.hpp\"\n#include \"../Math/modint.hpp\"\n#include \"../Math/number-theoretic-transform.hpp\"\
    \n\nconst int MOD = 998244353;\n\nint main() {\n  fastio;\n  int N, M;\n  cin\
    \ >> N >> M;\n\n  vector<int> A(N), B(M);\n  for (auto& a : A)\n    cin >> a;\n\
    \  for (auto& b : B)\n    cin >> b;\n  NumberTheoreticTransform<MOD> ntt;\n  for\
    \ (auto& c : ntt.multiply(A, B))\n    cout << c << \" \";\n}"
  dependsOn:
  - Template/template.hpp
  - Math/modint.hpp
  - Math/number-theoretic-transform.hpp
  isVerificationFile: true
  path: Verify/LC_convolution_mod_2.test.cpp
  requiredBy: []
  timestamp: '2022-05-19 09:20:43+02:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: Verify/LC_convolution_mod_2.test.cpp
layout: document
redirect_from:
- /verify/Verify/LC_convolution_mod_2.test.cpp
- /verify/Verify/LC_convolution_mod_2.test.cpp.html
title: Verify/LC_convolution_mod_2.test.cpp
---
