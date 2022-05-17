#define PROBLEM "https://judge.yosupo.jp/problem/stirling_number_of_the_second_kind"

#include "Template/template.hpp"

#include "Math/modint.hpp"
#include "Math/formal-power-series-friendly-ntt.hpp"
#include "Math/stirling-second.hpp"

const int MOD = 998244353;
using mint = ModInt< MOD >;

int main() {
  fastio;
  int N;
  cin >> N;
  cout << stirling_second< FPS, mint >(N) << endl;
}