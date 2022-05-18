#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_A"

#include "../Template/template.hpp"
#include "../Math/prime_factor.hpp"

int main() {
  fastio;

  uint32_t N;
  cin >> N;

  auto factors = prime_factor(N);
  cout << N << ":";
  for (auto& [t, cnt] : factors) {
    while (cnt--)
      cout << " " << t;
  }
  cout << nl;

  return 0;
}
