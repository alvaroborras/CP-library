#define PROBLEM "https://judge.yosupo.jp/problem/convolution_mod"

#include "../Template/template.hpp"
#include "../Math/modint.hpp"
#include "../Math/formal-power-series-friendly-ntt.hpp"

const int MOD = 998244353;
using mint = ModInt<MOD>;

int main() {
  fastio;
  int N, M;
  cin >> N >> M;
  FPS<mint> F(N), G(M);
  cin >> F;
  cin >> G;
  cout << F * G << endl;
}