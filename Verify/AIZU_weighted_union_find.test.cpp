#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_B"

#include "../Template/template.hpp"
#include "../DataStructures/weighted-union-find.hpp"

int main() {
  fastio;

  int N, M;
  cin >> N >> M;
  WeightedUnionFind<int> tree(N);
  while (M--) {
    int A, B, C, D;
    cin >> A >> B >> C;
    if (A == 0) {
      cin >> D;
      tree.unite(B, C, D);
    }
    else {
      if (tree.find(B) == tree.find(C)) {
        cout << tree.diff(B, C) << endl;
      }
      else {
        cout << "?" << endl;
      }
    }
  }
}