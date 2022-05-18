---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: Verify/LC_convolution_mod.test_3.cpp
    title: Verify/LC_convolution_mod.test_3.cpp
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Math/montgomery-mod-int.hpp\"\n\ntemplate<uint32_t mod,\
    \ bool fast = false>\nstruct MontgomeryModInt {\n  using mint = MontgomeryModInt;\n\
    \  using i32 = int32_t;\n  using i64 = int64_t;\n  using u32 = uint32_t;\n  using\
    \ u64 = uint64_t;\n\n  static constexpr u32 get_r() {\n    u32 ret = mod;\n  \
    \  for (i32 i = 0; i < 4; i++) ret *= 2 - mod * ret;\n    return ret;\n  }\n\n\
    \  static constexpr u32 r = get_r();\n  static constexpr u32 n2 = -u64(mod) %\
    \ mod;\n\n  static_assert(r* mod == 1, \"invalid, r * mod != 1\");\n  static_assert(mod\
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
    \  }\n\n  static u32 get_mod() { return mod; }\n};\n\nusing modint = MontgomeryModInt<mod>;\n"
  code: "\ntemplate<uint32_t mod, bool fast = false>\nstruct MontgomeryModInt {\n\
    \  using mint = MontgomeryModInt;\n  using i32 = int32_t;\n  using i64 = int64_t;\n\
    \  using u32 = uint32_t;\n  using u64 = uint64_t;\n\n  static constexpr u32 get_r()\
    \ {\n    u32 ret = mod;\n    for (i32 i = 0; i < 4; i++) ret *= 2 - mod * ret;\n\
    \    return ret;\n  }\n\n  static constexpr u32 r = get_r();\n  static constexpr\
    \ u32 n2 = -u64(mod) % mod;\n\n  static_assert(r* mod == 1, \"invalid, r * mod\
    \ != 1\");\n  static_assert(mod < (1 << 30), \"invalid, mod >= 2 ^ 30\");\n  static_assert((mod\
    \ & 1) == 1, \"invalid, mod % 2 == 0\");\n\n  u32 x;\n\n  MontgomeryModInt() :\
    \ x{} {}\n\n  MontgomeryModInt(const i64& a)\n    : x(reduce(u64(fast?a:(a % mod\
    \ + mod))* n2)) {}\n\n  static constexpr u32 reduce(const u64& b) {\n    return\
    \ u32(b >> 32) + mod - u32((u64(u32(b) * r) * mod) >> 32);\n  }\n\n  mint& operator+=(const\
    \ mint& p) {\n    if (i32(x += p.x - 2 * mod) < 0) x += 2 * mod;\n    return *this;\n\
    \  }\n\n  mint& operator-=(const mint& p) {\n    if (i32(x -= p.x) < 0) x += 2\
    \ * mod;\n    return *this;\n  }\n\n  mint& operator*=(const mint& p) {\n    x\
    \ = reduce(u64(x) * p.x);\n    return *this;\n  }\n\n  mint& operator/=(const\
    \ mint& p) {\n    *this *= p.inverse();\n    return *this;\n  }\n\n  mint operator-()\
    \ const { return mint() - *this; }\n\n  mint operator+(const mint& p) const {\
    \ return mint(*this) += p; }\n\n  mint operator-(const mint& p) const { return\
    \ mint(*this) -= p; }\n\n  mint operator*(const mint& p) const { return mint(*this)\
    \ *= p; }\n\n  mint operator/(const mint& p) const { return mint(*this) /= p;\
    \ }\n\n  bool operator==(const mint& p) const { return (x >= mod?x - mod:x) ==\
    \ (p.x >= mod?p.x - mod:p.x); }\n\n  bool operator!=(const mint& p) const { return\
    \ (x >= mod?x - mod:x) != (p.x >= mod?p.x - mod:p.x); }\n\n  u32 get() const {\n\
    \    u32 ret = reduce(x);\n    return ret >= mod?ret - mod:ret;\n  }\n\n  mint\
    \ pow(u64 n) const {\n    mint ret(1), mul(*this);\n    while (n > 0) {\n    \
    \  if (n & 1) ret *= mul;\n      mul *= mul;\n      n >>= 1;\n    }\n    return\
    \ ret;\n  }\n\n  mint inverse() const {\n    return pow(mod - 2);\n  }\n\n  friend\
    \ ostream& operator<<(ostream& os, const mint& p) {\n    return os << p.get();\n\
    \  }\n\n  friend istream& operator>>(istream& is, mint& a) {\n    i64 t;\n   \
    \ is >> t;\n    a = mint(t);\n    return is;\n  }\n\n  static u32 get_mod() {\
    \ return mod; }\n};\n\nusing modint = MontgomeryModInt<mod>;"
  dependsOn: []
  isVerificationFile: false
  path: Math/montgomery-mod-int.hpp
  requiredBy:
  - Verify/LC_convolution_mod.test_3.cpp
  timestamp: '2022-05-18 15:15:37+02:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Math/montgomery-mod-int.hpp
layout: document
redirect_from:
- /library/Math/montgomery-mod-int.hpp
- /library/Math/montgomery-mod-int.hpp.html
title: Math/montgomery-mod-int.hpp
---
