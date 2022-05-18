#define PROBLEM "https://judge.yosupo.jp/problem/scc"

#include "../Template/template.hpp"
#include "../Graphs/strongly-connected-components.hpp"

int main() {
  fastio;

  int N, M;
  cin >> N >> M;
  StronglyConnectedComponents<> g(N);

  g.read(M, 0, false, true);
  g.build();
  cout << g.group.size() << nl;
  for (auto& p : g.group) {
    cout << p.size() << " " << p << nl;
  }
}