#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_A"

#include "../Template/template.hpp"
#include "../DataStructures/union-find.hpp"

int main() {
  fastio;

  uint32_t N, Q;
  cin >> N >> Q;
  UnionFind uf(N);
  while (Q--) {
    int t, x, y;
    cin >> t >> x >> y;
    if (t == 0)
      uf.unite(x, y);
    else
      cout << (uf.find(x) == uf.find(y)) << nl;
  }
}