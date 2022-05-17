---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Verify/LC_partition_function.test.cpp
    title: Verify/LC_partition_function.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Math/modint.hpp\"\ntemplate<int mod>\nstruct ModInt {\n\
    \  int x;\n\n  ModInt() : x(0) {}\n\n  ModInt(int64_t y) : x(y >= 0?y % mod:(mod\
    \ - (-y) % mod) % mod) {}\n\n  ModInt& operator+=(const ModInt& p) {\n    if ((x\
    \ += p.x) >= mod) x -= mod;\n    return *this;\n  }\n\n  ModInt& operator-=(const\
    \ ModInt& p) {\n    if ((x += mod - p.x) >= mod) x -= mod;\n    return *this;\n\
    \  }\n\n  ModInt& operator*=(const ModInt& p) {\n    x = (int)(1LL * x * p.x %\
    \ mod);\n    return *this;\n  }\n\n  ModInt& operator/=(const ModInt& p) {\n \
    \   *this *= p.inverse();\n    return *this;\n  }\n\n  ModInt operator-() const\
    \ { return ModInt(-x); }\n\n  ModInt operator+(const ModInt& p) const { return\
    \ ModInt(*this) += p; }\n\n  ModInt operator-(const ModInt& p) const { return\
    \ ModInt(*this) -= p; }\n\n  ModInt operator*(const ModInt& p) const { return\
    \ ModInt(*this) *= p; }\n\n  ModInt operator/(const ModInt& p) const { return\
    \ ModInt(*this) /= p; }\n\n  bool operator==(const ModInt& p) const { return x\
    \ == p.x; }\n\n  bool operator!=(const ModInt& p) const { return x != p.x; }\n\
    \n  ModInt inverse() const {\n    int a = x, b = mod, u = 1, v = 0, t;\n    while\
    \ (b > 0) {\n      t = a / b;\n      swap(a -= t * b, b);\n      swap(u -= t *\
    \ v, v);\n    }\n    return ModInt(u);\n  }\n\n  ModInt pow(int64_t n) const {\n\
    \    ModInt ret(1), mul(x);\n    while (n > 0) {\n      if (n & 1) ret *= mul;\n\
    \      mul *= mul;\n      n >>= 1;\n    }\n    return ret;\n  }\n\n  friend ostream&\
    \ operator<<(ostream& os, const ModInt& p) {\n    return os << p.x;\n  }\n\n \
    \ friend istream& operator>>(istream& is, ModInt& a) {\n    int64_t t;\n    is\
    \ >> t;\n    a = ModInt<mod>(t);\n    return (is);\n  }\n\n  static int get_mod()\
    \ { return mod; }\n};\n\nusing modint = ModInt<mod>;\n"
  code: "template<int mod>\nstruct ModInt {\n  int x;\n\n  ModInt() : x(0) {}\n\n\
    \  ModInt(int64_t y) : x(y >= 0?y % mod:(mod - (-y) % mod) % mod) {}\n\n  ModInt&\
    \ operator+=(const ModInt& p) {\n    if ((x += p.x) >= mod) x -= mod;\n    return\
    \ *this;\n  }\n\n  ModInt& operator-=(const ModInt& p) {\n    if ((x += mod -\
    \ p.x) >= mod) x -= mod;\n    return *this;\n  }\n\n  ModInt& operator*=(const\
    \ ModInt& p) {\n    x = (int)(1LL * x * p.x % mod);\n    return *this;\n  }\n\n\
    \  ModInt& operator/=(const ModInt& p) {\n    *this *= p.inverse();\n    return\
    \ *this;\n  }\n\n  ModInt operator-() const { return ModInt(-x); }\n\n  ModInt\
    \ operator+(const ModInt& p) const { return ModInt(*this) += p; }\n\n  ModInt\
    \ operator-(const ModInt& p) const { return ModInt(*this) -= p; }\n\n  ModInt\
    \ operator*(const ModInt& p) const { return ModInt(*this) *= p; }\n\n  ModInt\
    \ operator/(const ModInt& p) const { return ModInt(*this) /= p; }\n\n  bool operator==(const\
    \ ModInt& p) const { return x == p.x; }\n\n  bool operator!=(const ModInt& p)\
    \ const { return x != p.x; }\n\n  ModInt inverse() const {\n    int a = x, b =\
    \ mod, u = 1, v = 0, t;\n    while (b > 0) {\n      t = a / b;\n      swap(a -=\
    \ t * b, b);\n      swap(u -= t * v, v);\n    }\n    return ModInt(u);\n  }\n\n\
    \  ModInt pow(int64_t n) const {\n    ModInt ret(1), mul(x);\n    while (n > 0)\
    \ {\n      if (n & 1) ret *= mul;\n      mul *= mul;\n      n >>= 1;\n    }\n\
    \    return ret;\n  }\n\n  friend ostream& operator<<(ostream& os, const ModInt&\
    \ p) {\n    return os << p.x;\n  }\n\n  friend istream& operator>>(istream& is,\
    \ ModInt& a) {\n    int64_t t;\n    is >> t;\n    a = ModInt<mod>(t);\n    return\
    \ (is);\n  }\n\n  static int get_mod() { return mod; }\n};\n\nusing modint = ModInt<mod>;"
  dependsOn: []
  isVerificationFile: false
  path: Math/modint.hpp
  requiredBy: []
  timestamp: '2022-05-17 17:12:10+02:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Verify/LC_partition_function.test.cpp
documentation_of: Math/modint.hpp
layout: document
redirect_from:
- /library/Math/modint.hpp
- /library/Math/modint.hpp.html
title: Math/modint.hpp
---
