#define PROBLEM "https://judge.yosupo.jp/problem/counting_primes"

#include "../Template/template.hpp"
#include "../Math/primecount.hpp"

int main(){
  ll n;
  cin >> n;
  PrimeCount pc(n);
  cout << pc.pi(n) << nl;
  return 0;
}