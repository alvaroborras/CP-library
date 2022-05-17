#define PROBLEM "https://judge.yosupo.jp/problem/polynomial_taylor_shift"

#include "Template/template.hpp"
#include "Math/modint.hpp"
#include "Math/formal-power-series-friendly-ntt.hpp"

const int MOD = 998244353;
using mint = ModInt<MOD>;

int main() {
  fastio;

  uint32_t N, c;
  cin >> N >> c;

  FPS<mint> F(N);
  cin >> F;
  cout << F.taylor_shift(c) << nl;

  return 0;
}