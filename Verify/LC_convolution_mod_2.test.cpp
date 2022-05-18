#define PROBLEM "https://judge.yosupo.jp/problem/convolution_mod"

#include "../Template/template.hpp"
#include "../Math/modint.hpp"
#include "../Math/number-theoretic-transform.hpp"

const int MOD = 998244353;

int main() {
  fastio;
  int N, M;
  cin >> N >> M;

  vector<int> A(N), B(M);
  for (auto& a : A)
    cin >> a;
  for (auto& b : B)
    cin >> b;
  NumberTheoreticTransform<MOD> ntt;
  for (auto& c : ntt.multiply(A, B))
    cout << c << " ";
}