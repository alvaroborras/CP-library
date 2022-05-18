#define PROBLEM "https://judge.yosupo.jp/problem/kth_root_integer"

#include "../Template/template.hpp"
#include "../Math/kth-root-integer.hpp"

int main() {
  int T;
  cin >> T;
  while (T--) {
    uint64_t a;
    int k;
    cin >> a >> k;
    cout << kth_root_integer(a, k) << nl;
  }
}