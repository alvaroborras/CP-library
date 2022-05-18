---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: Template/template.hpp
    title: Template/template.hpp
  - icon: ':heavy_check_mark:'
    path: Tools/bigint.hpp
    title: Tools/bigint.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/2/NTL_2_A
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/2/NTL_2_A
  bundledCode: "#line 1 \"Verify/AIZU_bigInt_addition.test.cpp\"\n#define PROBLEM\
    \ \"https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/2/NTL_2_A\"\n\n#line\
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
    \ MFP(F&& f) {\n  return FixPoint< F >{forward< F >(f)};\n}\n#line 1 \"Tools/bigint.hpp\"\
    \n\nstruct bigint {\n  using vll = vector<ll>;\n\n  inline static constexpr ll\
    \ base_digits = 9;\n  inline static constexpr ll base = 1000000000;\n\n  vll a;\n\
    \  ll sign;\n\n  bigint() :sign(1) {}\n\n  bigint(ll v) { *this = v; }\n\n  bigint(const\
    \ string& s) { read(s); }\n\n  static bigint add_identity() { return bigint(0);\
    \ }\n  static bigint mul_identity() { return bigint(1); }\n\n  void operator=(ll\
    \ v) {\n    sign = 1;\n    if (v < 0) sign = -1, v = -v;\n    for (;v > 0;v =\
    \ v / base) a.emplace_back(v % base);\n  }\n\n  bigint operator+(const bigint&\
    \ v) const {\n    if (sign == v.sign) {\n      bigint res = v;\n      for (ll\
    \ i = 0, carry = 0;i < (ll)max(a.size(), v.a.size()) or carry;++i) {\n       \
    \ if (i == (ll)res.a.size()) res.a.emplace_back(0);\n        res.a[i] += carry\
    \ + (i < (ll)a.size()?a[i]:0);\n        carry = res.a[i] >= base;\n        if\
    \ (carry) res.a[i] -= base;\n      }\n      return res;\n    }\n    return *this\
    \ - (-v);\n  }\n\n  bigint operator-(const bigint& v) const {\n    if (sign ==\
    \ v.sign) {\n      if (abs() >= v.abs()) {\n        bigint res = *this;\n    \
    \    for (ll i = 0, carry = 0;i < (ll)v.a.size() or carry;++i) {\n          res.a[i]\
    \ -= carry + (i < (ll)v.a.size()?v.a[i]:0);\n          carry = res.a[i] < 0;\n\
    \          if (carry) res.a[i] += base;\n        }\n        res.trim();\n    \
    \    return res;\n      }\n      return -(v - *this);\n    }\n    return *this\
    \ + (-v);\n  }\n\n  void operator*=(ll v) {\n    if (v < 0) sign = -sign, v =\
    \ -v;\n    for (ll i = 0, carry = 0;i < (ll)a.size() or carry;++i) {\n      if\
    \ (i == (ll)a.size()) a.emplace_back(0);\n      ll cur = a[i] * (ll)v + carry;\n\
    \      carry = (ll)(cur / base);\n      a[i] = (ll)(cur % base);\n      // asm(\"\
    divl %%ecx\" : \"=a\"(carry),\"=d\"(a[i]) : \"A\"(cur),\"c\"(base));\n    }\n\
    \    trim();\n  }\n\n  bigint operator*(ll v) const {\n    bigint res = *this;\n\
    \    res *= v;\n    return res;\n  }\n\n  friend pair<bigint, bigint> divmod(const\
    \ bigint& a1, const bigint& b1) {\n    ll norm = base / (b1.a.back() + 1);\n \
    \   bigint a = a1.abs() * norm;\n    bigint b = b1.abs() * norm;\n    bigint q,\
    \ r;\n    q.a.resize(a.a.size());\n\n    for (ll i = a.a.size() - 1;i >= 0;i--)\
    \ {\n      r *= base;\n      r += a.a[i];\n      ll s1 = r.a.size() <= b.a.size()?0:r.a[b.a.size()];\n\
    \      ll s2 = r.a.size() <= b.a.size() - 1?0:r.a[b.a.size() - 1];\n      ll d\
    \ = ((ll)base * s1 + s2) / b.a.back();\n      r -= b * d;\n      while (r < 0)\
    \ r += b, --d;\n      q.a[i] = d;\n    }\n\n    q.sign = a1.sign * b1.sign;\n\
    \    r.sign = a1.sign;\n    q.trim();\n    r.trim();\n    return make_pair(q,\
    \ r / norm);\n  }\n\n  bigint operator/(const bigint& v) const {\n    return divmod(*this,\
    \ v).first;\n  }\n\n  bigint operator%(const bigint& v) const {\n    return divmod(*this,\
    \ v).second;\n  }\n\n  void operator/=(ll v) {\n    if (v < 0) sign = -sign, v\
    \ = -v;\n    for (ll i = (ll)a.size() - 1, rem = 0;i >= 0;--i) {\n      ll cur\
    \ = a[i] + rem * (ll)base;\n      a[i] = (ll)(cur / v);\n      rem = (ll)(cur\
    \ % v);\n    }\n    trim();\n  }\n\n  bigint operator/(ll v) const {\n    bigint\
    \ res = *this;\n    res /= v;\n    return res;\n  }\n\n  ll operator%(ll v) const\
    \ {\n    if (v < 0) v = -v;\n    ll m = 0;\n    for (ll i = a.size() - 1;i >=\
    \ 0;--i) m = (a[i] + m * (ll)base) % v;\n    return m * sign;\n  }\n\n  void operator+=(const\
    \ bigint& v) {\n    *this = *this + v;\n  }\n\n  void operator-=(const bigint&\
    \ v) {\n    *this = *this - v;\n  }\n\n  void operator*=(const bigint& v) {\n\
    \    *this = *this * v;\n  }\n\n  void operator/=(const bigint& v) {\n    *this\
    \ = *this / v;\n  }\n\n  bool operator<(const bigint& v) const {\n    if (sign\
    \ != v.sign) return sign < v.sign;\n    if (a.size() != v.a.size()) return a.size()\
    \ * sign < v.a.size()* v.sign;\n    for (ll i = a.size() - 1;i >= 0;i--)\n   \
    \   if (a[i] != v.a[i]) return a[i] * sign < v.a[i] * sign;\n    return false;\n\
    \  }\n\n  bool operator>(const bigint& v) const {\n    return v < *this;\n  }\n\
    \n  bool operator<=(const bigint& v) const {\n    return !(v < *this);\n  }\n\n\
    \  bool operator>=(const bigint& v) const {\n    return !(*this < v);\n  }\n\n\
    \  bool operator==(const bigint& v) const {\n    return !(*this < v) and !(v <\
    \ *this);\n  }\n\n  bool operator!=(const bigint& v) const {\n    return *this\
    \ < v or v < *this;\n  }\n\n  void trim() {\n    while (!a.empty() and !a.back())\
    \ a.pop_back();\n    if (a.empty()) sign = 1;\n  }\n\n  bool isZero() const {\n\
    \    return a.empty() or (a.size() == 1 and !a[0]);\n  }\n\n  bigint operator-()\
    \ const {\n    bigint res = *this;\n    res.sign = -sign;\n    return res;\n \
    \ }\n\n  bigint abs() const {\n    bigint res = *this;\n    res.sign *= res.sign;\n\
    \    return res;\n  }\n\n  ll longValue() const {\n    ll res = 0;\n    for (ll\
    \ i = a.size() - 1;i >= 0;i--) res = res * base + a[i];\n    return res * sign;\n\
    \  }\n\n  friend bigint gcd(const bigint& a, const bigint& b) {\n    return b.isZero()?a:gcd(b,\
    \ a % b);\n  }\n\n  friend bigint lcm(const bigint& a, const bigint& b) {\n  \
    \  return a / gcd(a, b) * b;\n  }\n\n  void read(const string& s) {\n    sign\
    \ = 1;\n    a.clear();\n    ll pos = 0;\n    while (pos < (ll)s.size() and (s[pos]\
    \ == '-' or s[pos] == '+')) {\n      if (s[pos] == '-') sign = -sign;\n      ++pos;\n\
    \    }\n    for (ll i = s.size() - 1;i >= pos;i -= base_digits) {\n      ll x\
    \ = 0;\n      for (ll j = max(pos, i - base_digits + 1);j <= i;j++) x = x * 10\
    \ + s[j] - '0';\n      a.emplace_back(x);\n    }\n    trim();\n  }\n\n  friend\
    \ istream& operator>>(istream& stream, bigint& v) {\n    string s;\n    stream\
    \ >> s;\n    v.read(s);\n    return stream;\n  }\n\n  friend ostream& operator<<(ostream&\
    \ stream, const bigint& v) {\n    if (v.sign == -1) stream << '-';\n    stream\
    \ << (v.a.empty()?0:v.a.back());\n    for (ll i = (ll)v.a.size() - 2;i >= 0;--i)\n\
    \      stream << setw(base_digits) << setfill('0') << v.a[i];\n    return stream;\n\
    \  }\n\n  static vll convert_base(const vll& a, ll old_digits, ll new_digits)\
    \ {\n    vll p(max(old_digits, new_digits) + 1);\n    p[0] = 1;\n    for (ll i\
    \ = 1;i < (ll)p.size();i++) p[i] = p[i - 1] * 10;\n    vll res;\n    ll cur =\
    \ 0;\n    ll cur_digits = 0;\n    for (ll i = 0;i < (ll)a.size();i++) {\n    \
    \  cur += a[i] * p[cur_digits];\n      cur_digits += old_digits;\n      while\
    \ (cur_digits >= new_digits) {\n        res.emplace_back(signed(cur % p[new_digits]));\n\
    \        cur /= p[new_digits];\n        cur_digits -= new_digits;\n      }\n \
    \   }\n    res.emplace_back((signed)cur);\n    while (!res.empty() and !res.back())\
    \ res.pop_back();\n    return res;\n  }\n\n  static vll karatsubaMultiply(vll&\
    \ a, vll& b) {\n    {\n      while (a.size() < b.size()) a.emplace_back(0);\n\
    \      while (b.size() < a.size()) b.emplace_back(0);\n      while (a.size() &\
    \ (a.size() - 1)) a.emplace_back(0), b.emplace_back(0);\n    }\n\n    ll n = a.size();\n\
    \    vll res(n + n);\n    if (n <= 32) {\n      for (ll i = 0;i < n;i++)\n   \
    \     for (ll j = 0;j < n;j++)\n          res[i + j] += a[i] * b[j];\n      return\
    \ res;\n    }\n\n    ll k = n >> 1;\n    vll a1(a.begin(), a.begin() + k);\n \
    \   vll a2(a.begin() + k, a.end());\n    vll b1(b.begin(), b.begin() + k);\n \
    \   vll b2(b.begin() + k, b.end());\n\n    vll a1b1 = karatsubaMultiply(a1, b1);\n\
    \    vll a2b2 = karatsubaMultiply(a2, b2);\n\n    for (ll i = 0;i < k;i++) a2[i]\
    \ += a1[i];\n    for (ll i = 0;i < k;i++) b2[i] += b1[i];\n\n    vll r = karatsubaMultiply(a2,\
    \ b2);\n    for (ll i = 0;i < (ll)a1b1.size();i++) r[i] -= a1b1[i];\n    for (ll\
    \ i = 0;i < (ll)a2b2.size();i++) r[i] -= a2b2[i];\n\n    for (ll i = 0;i < (ll)r.size();i++)\
    \ res[i + k] += r[i];\n    for (ll i = 0;i < (ll)a1b1.size();i++) res[i] += a1b1[i];\n\
    \    for (ll i = 0;i < (ll)a2b2.size();i++) res[i + n] += a2b2[i];\n    return\
    \ res;\n  }\n\n  bigint operator*(const bigint& v) const {\n    constexpr static\
    \ ll nbase = 10000;\n    constexpr static ll nbase_digits = 4;\n\n    vll a =\
    \ convert_base(this->a, base_digits, nbase_digits);\n    vll b = convert_base(v.a,\
    \ base_digits, nbase_digits);\n\n    if (a.empty() or b.empty()) return bigint(0);\n\
    \n    vll c = karatsubaMultiply(a, b);\n    // vll c=FFT::multiply(a,b);\n\n \
    \   bigint res;\n    res.sign = sign * v.sign;\n    for (ll i = 0, carry = 0;i\
    \ < (ll)c.size();i++) {\n      ll cur = c[i] + carry;\n      res.a.emplace_back((ll)(cur\
    \ % nbase));\n      carry = (ll)(cur / nbase);\n      if (i + 1 == (int)c.size()\
    \ and carry > 0) c.emplace_back(0);\n    }\n\n    res.a = convert_base(res.a,\
    \ nbase_digits, base_digits);\n    res.trim();\n    return res;\n  }\n};\n#line\
    \ 5 \"Verify/AIZU_bigInt_addition.test.cpp\"\n\nint main() {\n  bigint A, B;\n\
    \  cin >> A >> B;\n  cout << A + B << endl;\n  return 0;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/2/NTL_2_A\"\
    \n\n#include \"../Template/template.hpp\"\n#include \"../Tools/bigint.hpp\"\n\n\
    int main() {\n  bigint A, B;\n  cin >> A >> B;\n  cout << A + B << endl;\n  return\
    \ 0;\n}"
  dependsOn:
  - Template/template.hpp
  - Tools/bigint.hpp
  isVerificationFile: true
  path: Verify/AIZU_bigInt_addition.test.cpp
  requiredBy: []
  timestamp: '2022-05-18 08:11:38+02:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Verify/AIZU_bigInt_addition.test.cpp
layout: document
redirect_from:
- /verify/Verify/AIZU_bigInt_addition.test.cpp
- /verify/Verify/AIZU_bigInt_addition.test.cpp.html
title: Verify/AIZU_bigInt_addition.test.cpp
---
