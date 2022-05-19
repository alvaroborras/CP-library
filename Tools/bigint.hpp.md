---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: Verify/AIZU_bigInt_addition.test.cpp
    title: Verify/AIZU_bigInt_addition.test.cpp
  - icon: ':x:'
    path: Verify/AIZU_bigInt_difference.test.cpp
    title: Verify/AIZU_bigInt_difference.test.cpp
  - icon: ':x:'
    path: Verify/AIZU_bigInt_division.test.cpp
    title: Verify/AIZU_bigInt_division.test.cpp
  - icon: ':x:'
    path: Verify/AIZU_bigInt_modulo.test.cpp
    title: Verify/AIZU_bigInt_modulo.test.cpp
  - icon: ':x:'
    path: Verify/AIZU_bigInt_multiplication.test.cpp
    title: Verify/AIZU_bigInt_multiplication.test.cpp
  - icon: ':x:'
    path: Verify/AIZU_bigInt_multiplication2.test.cpp
    title: Verify/AIZU_bigInt_multiplication2.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Tools/bigint.hpp\"\n\nstruct bigint {\n  using vll = vector<ll>;\n\
    \n  inline static constexpr ll base_digits = 9;\n  inline static constexpr ll\
    \ base = 1000000000;\n\n  vll a;\n  ll sign;\n\n  bigint() :sign(1) {}\n\n  bigint(ll\
    \ v) { *this = v; }\n\n  bigint(const string& s) { read(s); }\n\n  static bigint\
    \ add_identity() { return bigint(0); }\n  static bigint mul_identity() { return\
    \ bigint(1); }\n\n  void operator=(ll v) {\n    sign = 1;\n    if (v < 0) sign\
    \ = -1, v = -v;\n    for (;v > 0;v = v / base) a.emplace_back(v % base);\n  }\n\
    \n  bigint operator+(const bigint& v) const {\n    if (sign == v.sign) {\n   \
    \   bigint res = v;\n      for (ll i = 0, carry = 0;i < (ll)max(a.size(), v.a.size())\
    \ or carry;++i) {\n        if (i == (ll)res.a.size()) res.a.emplace_back(0);\n\
    \        res.a[i] += carry + (i < (ll)a.size()?a[i]:0);\n        carry = res.a[i]\
    \ >= base;\n        if (carry) res.a[i] -= base;\n      }\n      return res;\n\
    \    }\n    return *this - (-v);\n  }\n\n  bigint operator-(const bigint& v) const\
    \ {\n    if (sign == v.sign) {\n      if (abs() >= v.abs()) {\n        bigint\
    \ res = *this;\n        for (ll i = 0, carry = 0;i < (ll)v.a.size() or carry;++i)\
    \ {\n          res.a[i] -= carry + (i < (ll)v.a.size()?v.a[i]:0);\n          carry\
    \ = res.a[i] < 0;\n          if (carry) res.a[i] += base;\n        }\n       \
    \ res.trim();\n        return res;\n      }\n      return -(v - *this);\n    }\n\
    \    return *this + (-v);\n  }\n\n  void operator*=(ll v) {\n    if (v < 0) sign\
    \ = -sign, v = -v;\n    for (ll i = 0, carry = 0;i < (ll)a.size() or carry;++i)\
    \ {\n      if (i == (ll)a.size()) a.emplace_back(0);\n      ll cur = a[i] * (ll)v\
    \ + carry;\n      carry = (ll)(cur / base);\n      a[i] = (ll)(cur % base);\n\
    \      // asm(\"divl %%ecx\" : \"=a\"(carry),\"=d\"(a[i]) : \"A\"(cur),\"c\"(base));\n\
    \    }\n    trim();\n  }\n\n  bigint operator*(ll v) const {\n    bigint res =\
    \ *this;\n    res *= v;\n    return res;\n  }\n\n  friend pair<bigint, bigint>\
    \ divmod(const bigint& a1, const bigint& b1) {\n    ll norm = base / (b1.a.back()\
    \ + 1);\n    bigint a = a1.abs() * norm;\n    bigint b = b1.abs() * norm;\n  \
    \  bigint q, r;\n    q.a.resize(a.a.size());\n\n    for (ll i = a.a.size() - 1;i\
    \ >= 0;i--) {\n      r *= base;\n      r += a.a[i];\n      ll s1 = r.a.size()\
    \ <= b.a.size()?0:r.a[b.a.size()];\n      ll s2 = r.a.size() <= b.a.size() - 1?0:r.a[b.a.size()\
    \ - 1];\n      ll d = ((ll)base * s1 + s2) / b.a.back();\n      r -= b * d;\n\
    \      while (r < 0) r += b, --d;\n      q.a[i] = d;\n    }\n\n    q.sign = a1.sign\
    \ * b1.sign;\n    r.sign = a1.sign;\n    q.trim();\n    r.trim();\n    return\
    \ make_pair(q, r / norm);\n  }\n\n  bigint operator/(const bigint& v) const {\n\
    \    return divmod(*this, v).first;\n  }\n\n  bigint operator%(const bigint& v)\
    \ const {\n    return divmod(*this, v).second;\n  }\n\n  void operator/=(ll v)\
    \ {\n    if (v < 0) sign = -sign, v = -v;\n    for (ll i = (ll)a.size() - 1, rem\
    \ = 0;i >= 0;--i) {\n      ll cur = a[i] + rem * (ll)base;\n      a[i] = (ll)(cur\
    \ / v);\n      rem = (ll)(cur % v);\n    }\n    trim();\n  }\n\n  bigint operator/(ll\
    \ v) const {\n    bigint res = *this;\n    res /= v;\n    return res;\n  }\n\n\
    \  ll operator%(ll v) const {\n    if (v < 0) v = -v;\n    ll m = 0;\n    for\
    \ (ll i = a.size() - 1;i >= 0;--i) m = (a[i] + m * (ll)base) % v;\n    return\
    \ m * sign;\n  }\n\n  void operator+=(const bigint& v) {\n    *this = *this +\
    \ v;\n  }\n\n  void operator-=(const bigint& v) {\n    *this = *this - v;\n  }\n\
    \n  void operator*=(const bigint& v) {\n    *this = *this * v;\n  }\n\n  void\
    \ operator/=(const bigint& v) {\n    *this = *this / v;\n  }\n\n  bool operator<(const\
    \ bigint& v) const {\n    if (sign != v.sign) return sign < v.sign;\n    if (a.size()\
    \ != v.a.size()) return a.size() * sign < v.a.size()* v.sign;\n    for (ll i =\
    \ a.size() - 1;i >= 0;i--)\n      if (a[i] != v.a[i]) return a[i] * sign < v.a[i]\
    \ * sign;\n    return false;\n  }\n\n  bool operator>(const bigint& v) const {\n\
    \    return v < *this;\n  }\n\n  bool operator<=(const bigint& v) const {\n  \
    \  return !(v < *this);\n  }\n\n  bool operator>=(const bigint& v) const {\n \
    \   return !(*this < v);\n  }\n\n  bool operator==(const bigint& v) const {\n\
    \    return !(*this < v) and !(v < *this);\n  }\n\n  bool operator!=(const bigint&\
    \ v) const {\n    return *this < v or v < *this;\n  }\n\n  void trim() {\n   \
    \ while (!a.empty() and !a.back()) a.pop_back();\n    if (a.empty()) sign = 1;\n\
    \  }\n\n  bool isZero() const {\n    return a.empty() or (a.size() == 1 and !a[0]);\n\
    \  }\n\n  bigint operator-() const {\n    bigint res = *this;\n    res.sign =\
    \ -sign;\n    return res;\n  }\n\n  bigint abs() const {\n    bigint res = *this;\n\
    \    res.sign *= res.sign;\n    return res;\n  }\n\n  ll longValue() const {\n\
    \    ll res = 0;\n    for (ll i = a.size() - 1;i >= 0;i--) res = res * base +\
    \ a[i];\n    return res * sign;\n  }\n\n  friend bigint gcd(const bigint& a, const\
    \ bigint& b) {\n    return b.isZero()?a:gcd(b, a % b);\n  }\n\n  friend bigint\
    \ lcm(const bigint& a, const bigint& b) {\n    return a / gcd(a, b) * b;\n  }\n\
    \n  void read(const string& s) {\n    sign = 1;\n    a.clear();\n    ll pos =\
    \ 0;\n    while (pos < (ll)s.size() and (s[pos] == '-' or s[pos] == '+')) {\n\
    \      if (s[pos] == '-') sign = -sign;\n      ++pos;\n    }\n    for (ll i =\
    \ s.size() - 1;i >= pos;i -= base_digits) {\n      ll x = 0;\n      for (ll j\
    \ = max(pos, i - base_digits + 1);j <= i;j++) x = x * 10 + s[j] - '0';\n     \
    \ a.emplace_back(x);\n    }\n    trim();\n  }\n\n  friend istream& operator>>(istream&\
    \ stream, bigint& v) {\n    string s;\n    stream >> s;\n    v.read(s);\n    return\
    \ stream;\n  }\n\n  friend ostream& operator<<(ostream& stream, const bigint&\
    \ v) {\n    if (v.sign == -1) stream << '-';\n    stream << (v.a.empty()?0:v.a.back());\n\
    \    for (ll i = (ll)v.a.size() - 2;i >= 0;--i)\n      stream << setw(base_digits)\
    \ << setfill('0') << v.a[i];\n    return stream;\n  }\n\n  static vll convert_base(const\
    \ vll& a, ll old_digits, ll new_digits) {\n    vll p(max(old_digits, new_digits)\
    \ + 1);\n    p[0] = 1;\n    for (ll i = 1;i < (ll)p.size();i++) p[i] = p[i - 1]\
    \ * 10;\n    vll res;\n    ll cur = 0;\n    ll cur_digits = 0;\n    for (ll i\
    \ = 0;i < (ll)a.size();i++) {\n      cur += a[i] * p[cur_digits];\n      cur_digits\
    \ += old_digits;\n      while (cur_digits >= new_digits) {\n        res.emplace_back(signed(cur\
    \ % p[new_digits]));\n        cur /= p[new_digits];\n        cur_digits -= new_digits;\n\
    \      }\n    }\n    res.emplace_back((signed)cur);\n    while (!res.empty() and\
    \ !res.back()) res.pop_back();\n    return res;\n  }\n\n  static vll karatsubaMultiply(vll&\
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
    \ nbase_digits, base_digits);\n    res.trim();\n    return res;\n  }\n};\n"
  code: "\nstruct bigint {\n  using vll = vector<ll>;\n\n  inline static constexpr\
    \ ll base_digits = 9;\n  inline static constexpr ll base = 1000000000;\n\n  vll\
    \ a;\n  ll sign;\n\n  bigint() :sign(1) {}\n\n  bigint(ll v) { *this = v; }\n\n\
    \  bigint(const string& s) { read(s); }\n\n  static bigint add_identity() { return\
    \ bigint(0); }\n  static bigint mul_identity() { return bigint(1); }\n\n  void\
    \ operator=(ll v) {\n    sign = 1;\n    if (v < 0) sign = -1, v = -v;\n    for\
    \ (;v > 0;v = v / base) a.emplace_back(v % base);\n  }\n\n  bigint operator+(const\
    \ bigint& v) const {\n    if (sign == v.sign) {\n      bigint res = v;\n     \
    \ for (ll i = 0, carry = 0;i < (ll)max(a.size(), v.a.size()) or carry;++i) {\n\
    \        if (i == (ll)res.a.size()) res.a.emplace_back(0);\n        res.a[i] +=\
    \ carry + (i < (ll)a.size()?a[i]:0);\n        carry = res.a[i] >= base;\n    \
    \    if (carry) res.a[i] -= base;\n      }\n      return res;\n    }\n    return\
    \ *this - (-v);\n  }\n\n  bigint operator-(const bigint& v) const {\n    if (sign\
    \ == v.sign) {\n      if (abs() >= v.abs()) {\n        bigint res = *this;\n \
    \       for (ll i = 0, carry = 0;i < (ll)v.a.size() or carry;++i) {\n        \
    \  res.a[i] -= carry + (i < (ll)v.a.size()?v.a[i]:0);\n          carry = res.a[i]\
    \ < 0;\n          if (carry) res.a[i] += base;\n        }\n        res.trim();\n\
    \        return res;\n      }\n      return -(v - *this);\n    }\n    return *this\
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
    \ nbase_digits, base_digits);\n    res.trim();\n    return res;\n  }\n};"
  dependsOn: []
  isVerificationFile: false
  path: Tools/bigint.hpp
  requiredBy: []
  timestamp: '2022-05-17 16:42:23+02:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - Verify/AIZU_bigInt_addition.test.cpp
  - Verify/AIZU_bigInt_multiplication.test.cpp
  - Verify/AIZU_bigInt_division.test.cpp
  - Verify/AIZU_bigInt_difference.test.cpp
  - Verify/AIZU_bigInt_modulo.test.cpp
  - Verify/AIZU_bigInt_multiplication2.test.cpp
documentation_of: Tools/bigint.hpp
layout: document
redirect_from:
- /library/Tools/bigint.hpp
- /library/Tools/bigint.hpp.html
title: Tools/bigint.hpp
---
