#define PROBLEM "https://judge.yosupo.jp/problem/partition_function"

#include "../Template/template.hpp"
#include "../Math/modint.hpp"
#include "../Math/formal-power-series-friendly-ntt.hpp"
#include "../Math/partition.hpp"

const int MOD = 998244353;
using mint = ModInt<MOD>;

int main() {
  fastio;
  int N;
  cin >> N;
  cout << partition<FPS, mint>(N) << endl;
}