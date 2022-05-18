#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_2_A"

#include "../Template/template.hpp"
#include "../Graphs/prim-mst.hpp"

int main() {
  fastio;

  int V, E;
  cin >> V >> E;
  Graph<> g(V);
  g.read(E, 0, true);
  cout << prim(g).cost << nl;
}