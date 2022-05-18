#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_B"

#include "../Template/template.hpp"
#include "../DataStructures/binary-indexed-tree.hpp"

int main() {
  uint32_t N, Q;
  cin >> N >> Q;

  BinaryIndexedTree<uint32_t> bit(N);

  uint32_t T, X, Y;
  while (Q--) {
    cin >> T >> X >> Y;
    if (T == 0)
      bit.apply(X - 1, Y);
    else
      cout << bit.prod(X - 1, Y) << nl;
  }
}