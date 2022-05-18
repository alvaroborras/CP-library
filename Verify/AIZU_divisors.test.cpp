#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_3_D"

#include "../Template/template.hpp"
#include "../Math/divisors.hpp"

int main() {
  fastio;

  uint64_t A, B, C;
  cin >> A >> B >> C;
  uint32_t ret = 0;
  for (uint64_t& p : divisor(C)) {
    ret += A <= p and p <= B;
  }
  cout << ret << nl;
}