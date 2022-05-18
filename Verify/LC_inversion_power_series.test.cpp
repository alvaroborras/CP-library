#define PROBLEM "https://judge.yosupo.jp/problem/inv_of_formal_power_series"

#include "../Template/template.hpp"

#include "../Math/modint.hpp"
#include "../Math/formal-power-series-friendly-ntt.hpp"

const int MOD = 998244353;
using mint = ModInt< MOD >;

int main() {
  int N;
  cin >> N;
  FPS<mint> F(N);
  cin >> F;
  cout << F.inv() << endl;
}