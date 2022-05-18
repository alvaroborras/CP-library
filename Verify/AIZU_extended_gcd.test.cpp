#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_E"

#include "../Template/template.hpp"
#include "../Math/extgcd.hpp"

int main() {
  int a, b;
  cin >> a >> b;
  int x, y;
  extgcd(a, b, x, y);
  cout << x << " " << y << nl;
}