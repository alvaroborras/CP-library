#define PROBLEM "https://judge.yosupo.jp/problem/counting_primes"

#include "../Template/template.hpp"
#include "../Math/prime-count.hpp"

int main() {
  int64_t n;
  cin >> n;
  PrimeCount<> pc;
  cout << pc.pi(n) << nl;
}