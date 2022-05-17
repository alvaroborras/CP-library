#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_D"

#include "Template/template.hpp"
#include "DataStructures/dualsegtree.hpp"

int f(int a, int b) {
  if (b != INT32_MAX)
    return b;
  else
    return a;
}
int e() { return INT32_MAX; }

int main() {
  int n, q;
  cin >> n >> q;

  DualSegmentTree<int, f, e> seg(n);
  int c, L, R, x;
  while (q--) {
    cin >> c;
    if (c == 0) {
      cin >> L >> R >> x;
      R++;
      seg.update(L, R, x);
    } else {
      cin >> x;
      cout << seg.query(x) << endl;
    }
  }
  return 0;
}