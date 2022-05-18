/*
  Given (a, b) find the solution (x, y) to the equation a x + b y = gcd(a, b)
  If there are many, this returns the one such that |x| + |y| is minimal, and x <= y
*/
template<typename T>
T extgcd(T a, T b, T& x, T& y) {
  T d = a;
  if (b != 0) {
    d = extgcd(b, a % b, y, x);
    y -= (a / b) * x;
  }
  else {
    x = 1;
    y = 0;
  }
  return d;
}