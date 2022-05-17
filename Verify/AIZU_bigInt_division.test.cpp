#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/2/NTL_2_D"

#include "../Template/template.hpp"
#include "../Tools/bigint.hpp"

int main() {
  bigint A, B;
  cin >> A >> B;
  cout << A / B << endl;
  return 0;
}