#define PROBLEM "https://judge.yosupo.jp/problem/static_range_sum"

#include "../Template/template.hpp"
#include "../Utility/fastIO.hpp"

int main() {
  int N, Q;
  cin >> N >> Q;
  vector<ll> a(N + 1);
  for (int i = 1; i <= N; ++i) {
    cin >> a[i];
    a[i] += a[i - 1];
  }
  for (int i = 0, l, r; i < Q; ++i) {
    cin >> l >> r;
    cout << a[r] - a[l] << nl;
  }
}