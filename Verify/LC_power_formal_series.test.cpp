#define PROBLEM "https://judge.yosupo.jp/problem/pow_of_formal_power_series"

#include "../Template/template.hpp"
#include "../Math/modint.hpp"
#include "../Math/formal-power-series-friendly-ntt.hpp"

const int MOD = 998244353;
using mint = ModInt<MOD>;

int main() {
  fastio;

  uint32_t N, M;
  cin >> N >> M;

  FPS<mint> F(N);
  cin >> F;
  cout << F.pow(M, N) << nl;

  return 0;
}