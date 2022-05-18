#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_A"

#include "../Template/template.hpp"
#include "../DataStructures/segment-tree.hpp"

int main() {
  fastio;

  uint32_t N, Q;
  cin >> N >> Q;

  auto seg = get_segment_tree(N, [](uint32_t a, uint32_t b) { return min(a, b); }, INT_MAX);

  uint32_t T, X, Y;
  while (Q--) {
    cin >> T >> X >> Y;
    if (T == 0)
      seg.set(X, Y);
    else
      cout << seg.prod(X, Y + 1) << nl;
  }
}