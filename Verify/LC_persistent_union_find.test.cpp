#define PROBLEM "https://judge.yosupo.jp/problem/persistent_unionfind"

#include "Template/template.hpp"
#include "DataStructures/persistent-array.hpp"
#include "DataStructures/persistent-union-find.hpp"

int main() {
  fastio;
  int N, Q;
  cin >> N >> Q;
  vector<PersistentUnionFind> uf(Q + 1);
  uf[0] = PersistentUnionFind(N);
  for (int i = 1; i <= Q; i++) {
    int t, k, u, v;
    cin >> t >> k >> u >> v;
    ++k;
    if (t == 0) {
      uf[i] = uf[k];
      uf[i].unite(u, v);
    }
    else {
      cout << (uf[k].find(u) == uf[k].find(v)) << "\n";
    }
  }
}