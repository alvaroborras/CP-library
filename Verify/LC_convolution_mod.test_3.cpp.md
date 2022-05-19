---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: Math/montgomery-mod-int.hpp
    title: Math/montgomery-mod-int.hpp
  - icon: ':x:'
    path: Math/number-theoretic-transform-friendly-mod-int.hpp
    title: Math/number-theoretic-transform-friendly-mod-int.hpp
  - icon: ':x:'
    path: Template/template.hpp
    title: Template/template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links:
    - https://judge.yosupo.jp/problem/convolution_mod
  bundledCode: "#line 1 \"Verify/LC_convolution_mod.test_3.cpp\"\n#define PROBLEM\
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
    }\n#line 1 \"Math/montgomery-mod-int.hpp\"\n\ntemplate<uint32_t mod, bool fast\
    \ = false>\nstruct MontgomeryModInt {\n  using mint = MontgomeryModInt;\n  using\
    \ i32 = int32_t;\n  using i64 = int64_t;\n  using u32 = uint32_t;\n  using u64\
    \ = uint64_t;\n\n  static constexpr u32 get_r() {\n    u32 ret = mod;\n    for\
    \ (i32 i = 0; i < 4; i++) ret *= 2 - mod * ret;\n    return ret;\n  }\n\n  static\
    \ constexpr u32 r = get_r();\n  static constexpr u32 n2 = -u64(mod) % mod;\n\n\
    \  static_assert(r* mod == 1, \"invalid, r * mod != 1\");\n  static_assert(mod\
    \ < (1 << 30), \"invalid, mod >= 2 ^ 30\");\n  static_assert((mod & 1) == 1, \"\
    invalid, mod % 2 == 0\");\n\n  u32 x;\n\n  MontgomeryModInt() : x{} {}\n\n  MontgomeryModInt(const\
    \ i64& a)\n    : x(reduce(u64(fast?a:(a % mod + mod))* n2)) {}\n\n  static constexpr\
    \ u32 reduce(const u64& b) {\n    return u32(b >> 32) + mod - u32((u64(u32(b)\
    \ * r) * mod) >> 32);\n  }\n\n  mint& operator+=(const mint& p) {\n    if (i32(x\
    \ += p.x - 2 * mod) < 0) x += 2 * mod;\n    return *this;\n  }\n\n  mint& operator-=(const\
    \ mint& p) {\n    if (i32(x -= p.x) < 0) x += 2 * mod;\n    return *this;\n  }\n\
    \n  mint& operator*=(const mint& p) {\n    x = reduce(u64(x) * p.x);\n    return\
    \ *this;\n  }\n\n  mint& operator/=(const mint& p) {\n    *this *= p.inverse();\n\
    \    return *this;\n  }\n\n  mint operator-() const { return mint() - *this; }\n\
    \n  mint operator+(const mint& p) const { return mint(*this) += p; }\n\n  mint\
    \ operator-(const mint& p) const { return mint(*this) -= p; }\n\n  mint operator*(const\
    \ mint& p) const { return mint(*this) *= p; }\n\n  mint operator/(const mint&\
    \ p) const { return mint(*this) /= p; }\n\n  bool operator==(const mint& p) const\
    \ { return (x >= mod?x - mod:x) == (p.x >= mod?p.x - mod:p.x); }\n\n  bool operator!=(const\
    \ mint& p) const { return (x >= mod?x - mod:x) != (p.x >= mod?p.x - mod:p.x);\
    \ }\n\n  u32 get() const {\n    u32 ret = reduce(x);\n    return ret >= mod?ret\
    \ - mod:ret;\n  }\n\n  mint pow(u64 n) const {\n    mint ret(1), mul(*this);\n\
    \    while (n > 0) {\n      if (n & 1) ret *= mul;\n      mul *= mul;\n      n\
    \ >>= 1;\n    }\n    return ret;\n  }\n\n  mint inverse() const {\n    return\
    \ pow(mod - 2);\n  }\n\n  friend ostream& operator<<(ostream& os, const mint&\
    \ p) {\n    return os << p.get();\n  }\n\n  friend istream& operator>>(istream&\
    \ is, mint& a) {\n    i64 t;\n    is >> t;\n    a = mint(t);\n    return is;\n\
    \  }\n\n  static u32 get_mod() { return mod; }\n};\n\nusing modint = MontgomeryModInt<mod>;\n\
    #line 1 \"Math/number-theoretic-transform-friendly-mod-int.hpp\"\ntemplate <typename\
    \ Mint>\nstruct NumberTheoreticTransformFriendlyModInt {\n  static vector<Mint>\
    \ roots, iroots, rate3, irate3;\n  static int max_base;\n\n  NumberTheoreticTransformFriendlyModInt()\
    \ = default;\n\n  static void init() {\n    if (roots.empty()) {\n      const\
    \ unsigned mod = Mint::get_mod();\n      assert(mod >= 3 && mod % 2 == 1);\n \
    \     auto tmp = mod - 1;\n      max_base = 0;\n      while (tmp % 2 == 0) tmp\
    \ >>= 1, max_base++;\n      Mint root = 2;\n      while (root.pow((mod - 1) >>\
    \ 1) == 1) {\n        root += 1;\n      }\n      assert(root.pow(mod - 1) == 1);\n\
    \n      roots.resize(max_base + 1);\n      iroots.resize(max_base + 1);\n    \
    \  rate3.resize(max_base + 1);\n      irate3.resize(max_base + 1);\n\n      roots[max_base]\
    \ = root.pow((mod - 1) >> max_base);\n      iroots[max_base] = Mint(1) / roots[max_base];\n\
    \      for (int i = max_base - 1; i >= 0; i--) {\n        roots[i] = roots[i +\
    \ 1] * roots[i + 1];\n        iroots[i] = iroots[i + 1] * iroots[i + 1];\n   \
    \   }\n      {\n        Mint prod = 1, iprod = 1;\n        for (int i = 0; i <=\
    \ max_base - 3; i++) {\n          rate3[i] = roots[i + 3] * prod;\n          irate3[i]\
    \ = iroots[i + 3] * iprod;\n          prod *= iroots[i + 3];\n          iprod\
    \ *= roots[i + 3];\n        }\n      }\n    }\n  }\n\n  static void ntt(vector<Mint>&\
    \ a) {\n    init();\n    const int n = (int)a.size();\n    assert((n & (n - 1))\
    \ == 0);\n    int h = __builtin_ctz(n);\n    assert(h <= max_base);\n    int len\
    \ = 0;\n    Mint imag = roots[2];\n    if (h & 1) {\n      int p = 1 << (h - 1);\n\
    \      for (int i = 0; i < p; i++) {\n        auto r = a[i + p];\n        a[i\
    \ + p] = a[i] - r;\n        a[i] += r;\n      }\n      len++;\n    }\n    for\
    \ (; len + 1 < h; len += 2) {\n      int p = 1 << (h - len - 2);\n      {\n  \
    \      for (int i = 0; i < p; i++) {\n          auto a0 = a[i];\n          auto\
    \ a1 = a[i + p];\n          auto a2 = a[i + 2 * p];\n          auto a3 = a[i +\
    \ 3 * p];\n          auto a1na3imag = (a1 - a3) * imag;\n          auto a0a2 =\
    \ a0 + a2;\n          auto a1a3 = a1 + a3;\n          auto a0na2 = a0 - a2;\n\
    \          a[i] = a0a2 + a1a3;\n          a[i + 1 * p] = a0a2 - a1a3;\n      \
    \    a[i + 2 * p] = a0na2 + a1na3imag;\n          a[i + 3 * p] = a0na2 - a1na3imag;\n\
    \        }\n      }\n      Mint rot = rate3[0];\n      for (int s = 1; s < (1\
    \ << len); s++) {\n        int offset = s << (h - len);\n        Mint rot2 = rot\
    \ * rot;\n        Mint rot3 = rot2 * rot;\n        for (int i = 0; i < p; i++)\
    \ {\n          auto a0 = a[i + offset];\n          auto a1 = a[i + offset + p]\
    \ * rot;\n          auto a2 = a[i + offset + 2 * p] * rot2;\n          auto a3\
    \ = a[i + offset + 3 * p] * rot3;\n          auto a1na3imag = (a1 - a3) * imag;\n\
    \          auto a0a2 = a0 + a2;\n          auto a1a3 = a1 + a3;\n          auto\
    \ a0na2 = a0 - a2;\n          a[i + offset] = a0a2 + a1a3;\n          a[i + offset\
    \ + 1 * p] = a0a2 - a1a3;\n          a[i + offset + 2 * p] = a0na2 + a1na3imag;\n\
    \          a[i + offset + 3 * p] = a0na2 - a1na3imag;\n        }\n        rot\
    \ *= rate3[__builtin_ctz(~s)];\n      }\n    }\n  }\n\n  static void intt(vector<Mint>&\
    \ a, bool f = true) {\n    init();\n    const int n = (int)a.size();\n    assert((n\
    \ & (n - 1)) == 0);\n    int h = __builtin_ctz(n);\n    assert(h <= max_base);\n\
    \    int len = h;\n    Mint iimag = iroots[2];\n    for (; len > 1; len -= 2)\
    \ {\n      int p = 1 << (h - len);\n      {  // s = 0\n        for (int i = 0;\
    \ i < p; i++) {\n          auto a0 = a[i];\n          auto a1 = a[i + 1 * p];\n\
    \          auto a2 = a[i + 2 * p];\n          auto a3 = a[i + 3 * p];\n      \
    \    auto a2na3iimag = (a2 - a3) * iimag;\n          auto a0na1 = a0 - a1;\n \
    \         auto a0a1 = a0 + a1;\n          auto a2a3 = a2 + a3;\n          a[i]\
    \ = a0a1 + a2a3;\n          a[i + 1 * p] = (a0na1 + a2na3iimag);\n          a[i\
    \ + 2 * p] = (a0a1 - a2a3);\n          a[i + 3 * p] = (a0na1 - a2na3iimag);\n\
    \        }\n      }\n      Mint irot = irate3[0];\n      for (int s = 1; s < (1\
    \ << (len - 2)); s++) {\n        int offset = s << (h - len + 2);\n        Mint\
    \ irot2 = irot * irot;\n        Mint irot3 = irot2 * irot;\n        for (int i\
    \ = 0; i < p; i++) {\n          auto a0 = a[i + offset];\n          auto a1 =\
    \ a[i + offset + 1 * p];\n          auto a2 = a[i + offset + 2 * p];\n       \
    \   auto a3 = a[i + offset + 3 * p];\n          auto a2na3iimag = (a2 - a3) *\
    \ iimag;\n          auto a0na1 = a0 - a1;\n          auto a0a1 = a0 + a1;\n  \
    \        auto a2a3 = a2 + a3;\n          a[i + offset] = a0a1 + a2a3;\n      \
    \    a[i + offset + 1 * p] = (a0na1 + a2na3iimag) * irot;\n          a[i + offset\
    \ + 2 * p] = (a0a1 - a2a3) * irot2;\n          a[i + offset + 3 * p] = (a0na1\
    \ - a2na3iimag) * irot3;\n        }\n        irot *= irate3[__builtin_ctz(~s)];\n\
    \      }\n    }\n    if (len >= 1) {\n      int p = 1 << (h - 1);\n      for (int\
    \ i = 0; i < p; i++) {\n        auto ajp = a[i] - a[i + p];\n        a[i] += a[i\
    \ + p];\n        a[i + p] = ajp;\n      }\n    }\n    if (f) {\n      Mint inv_sz\
    \ = Mint(1) / n;\n      for (int i = 0; i < n; i++) a[i] *= inv_sz;\n    }\n \
    \ }\n\n  static vector<Mint> multiply(vector<Mint> a, vector<Mint> b) {\n    int\
    \ need = a.size() + b.size() - 1;\n    int nbase = 1;\n    while ((1 << nbase)\
    \ < need) nbase++;\n    int sz = 1 << nbase;\n    a.resize(sz, 0);\n    b.resize(sz,\
    \ 0);\n    ntt(a);\n    ntt(b);\n    Mint inv_sz = Mint(1) / sz;\n    for (int\
    \ i = 0; i < sz; i++) a[i] *= b[i] * inv_sz;\n    intt(a, false);\n    a.resize(need);\n\
    \    return a;\n  }\n};\n\ntemplate <typename Mint>\nvector<Mint> NumberTheoreticTransformFriendlyModInt<Mint>::roots\
    \ =\n    vector<Mint>();\ntemplate <typename Mint>\nvector<Mint> NumberTheoreticTransformFriendlyModInt<Mint>::iroots\
    \ =\n    vector<Mint>();\ntemplate <typename Mint>\nvector<Mint> NumberTheoreticTransformFriendlyModInt<Mint>::rate3\
    \ =\n    vector<Mint>();\ntemplate <typename Mint>\nvector<Mint> NumberTheoreticTransformFriendlyModInt<Mint>::irate3\
    \ =\n    vector<Mint>();\ntemplate <typename Mint>\nint NumberTheoreticTransformFriendlyModInt<Mint>::max_base\
    \ = 0;\n#line 6 \"Verify/LC_convolution_mod.test_3.cpp\"\n\nconst int MOD = 998244353;\n\
    using mint = MontgomeryModInt<MOD, true>;\n\nint main() {\n  fastio;\n  int N,\
    \ M;\n  cin >> N >> M;\n\n  vector<mint> A(N), B(M);\n  for (auto& a : A)\n  \
    \  cin >> a;\n  for (auto& b : B)\n    cin >> b;\n  NumberTheoreticTransformFriendlyModInt<mint>\
    \ ntt;\n  for (auto& c : ntt.multiply(A, B))\n    cout << c << \" \";\n  cout\
    \ << nl;\n\n  return 0;\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/convolution_mod\"\n\n#include\
    \ \"../Template/template.hpp\"\n#include \"../Math/montgomery-mod-int.hpp\"\n\
    #include \"../Math/number-theoretic-transform-friendly-mod-int.hpp\"\n\nconst\
    \ int MOD = 998244353;\nusing mint = MontgomeryModInt<MOD, true>;\n\nint main()\
    \ {\n  fastio;\n  int N, M;\n  cin >> N >> M;\n\n  vector<mint> A(N), B(M);\n\
    \  for (auto& a : A)\n    cin >> a;\n  for (auto& b : B)\n    cin >> b;\n  NumberTheoreticTransformFriendlyModInt<mint>\
    \ ntt;\n  for (auto& c : ntt.multiply(A, B))\n    cout << c << \" \";\n  cout\
    \ << nl;\n\n  return 0;\n}"
  dependsOn:
  - Template/template.hpp
  - Math/montgomery-mod-int.hpp
  - Math/number-theoretic-transform-friendly-mod-int.hpp
  isVerificationFile: false
  path: Verify/LC_convolution_mod.test_3.cpp
  requiredBy: []
  timestamp: '2022-05-19 09:20:43+02:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Verify/LC_convolution_mod.test_3.cpp
layout: document
redirect_from:
- /library/Verify/LC_convolution_mod.test_3.cpp
- /library/Verify/LC_convolution_mod.test_3.cpp.html
title: Verify/LC_convolution_mod.test_3.cpp
---
