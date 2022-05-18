#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_D"

#include "../Template/template.hpp"
#include "../Math/euler-phi.hpp"

int main() {

  uint32_t N;
  cin >> N;
  cout << euler_phi(N) << nl;

  return 0;
}