map<uint64_t, int> prime_factor(uint64_t n) {
  map<uint64_t, int> ret;
  for (uint64_t i = 2; i * i <= n; i++) {
    while (n % i == 0) {
      ret[i]++;
      n /= i;
    }
  }
  if (n != 1) ret[n] = 1;
  return ret;
}