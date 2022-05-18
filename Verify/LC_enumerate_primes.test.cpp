#define PROBLEM "https://judge.yosupo.jp/problem/enumerate_primes"

#include "../Template/template.hpp"
#include "../Math/enumerate_primes.hpp"

int main() {
  fastio;
  int N, A, B;
  cin >> N >> A >> B;
  vector<int> d = enumerate_primes(N);
  vector<int> ans;
  for (size_t i = B; i < d.size(); i += A) {
    ans.emplace_back(d[i]);
  }
  cout << d.size() << " " << ans.size() << nl;
  for (auto x : ans)
    cout << x << " ";
  cout << nl;
}