#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_D"

#include "../Template/template.hpp"
#include "../DataStructures/dualsegtree.hpp"

int main() {
  int N, Q;
  cin >> N >> Q;
  auto h = [](int32_t a, int32_t b) { return b; };
  auto seg = get_dual_segment_tree(N, h, INT32_MAX);

  int32_t T, X, L, R, K;
  while (Q--) {
    cin >> T;
    if (T == 0) {
      // Update seg[l ... r] = x
      cin >> L >> R >> X;
      seg.update(L, R + 1, X);
    }
    else if (T == 1) {
      // Obtain element seg[k]
      cin >> K;
      cout << seg[K] << "\n";
    }
  }
  return 0;
}