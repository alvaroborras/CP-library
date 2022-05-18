#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_B"

#include "../Template/template.hpp"
#include "../Math/modint.hpp"

const int MOD = 1000000007;
using mint = ModInt<MOD>;

int main() {
  fastio;

  mint n;
  int64_t m;
  cin >> n >> m;

  cout << n.pow(m) << nl;
  return 0;
}