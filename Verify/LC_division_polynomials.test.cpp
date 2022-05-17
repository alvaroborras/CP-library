#define PROBLEM "https://judge.yosupo.jp/problem/division_of_polynomials"

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
  pair<FPS<mint>, FPS<mint>> D = F.div_mod(G);
  cout << D.first.size() << " " << D.second.size() << nl;
  for (size_t i = 0; i < D.first.size(); ++i)
    cout << D.first[i] << (i + 1 == D.first.size()?"":" ");
  cout << nl;
  for (size_t i = 0; i < D.second.size(); ++i)
    cout << D.second[i] << (i + 1 == D.second.size()?"":" ");
  cout << nl;
}