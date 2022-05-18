#define PROBLEM "https://judge.yosupo.jp/problem/factorize"

#include "../Template/template.hpp"
#include "../Math/fast_prime_factorization.hpp"

int main() {
  fastio;
  int Q;
  cin >> Q;

  uint64_t X;
  for (int q = 0; q < Q; ++q) {
    cin >> X;
    auto ret = fast_factorize::factorize(X);
    sort(ret.begin(), ret.end());
    cout << ret.size();
    for (auto& x : ret) cout << ' ' << x;
    cout << '\n';
  }
}
