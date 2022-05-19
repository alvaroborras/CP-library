#include <bits/stdc++.h>
using namespace std;

#define reps(x, s) for (ll x = 0; (x) < (ll)(s).size(); (x)++)
#define chmin(x, y) (x) = min((x), (y))
#define chmax(x, y) (x) = max((x), (y))
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define outl(...) dump_func(__VA_ARGS__)
#define outf(x) cout << fixed << setprecision(16) << (x) << nl
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define nl "\n"
#define pb push_back
#define fi first
#define se second
#define inf 2e18
#define eps 1e-9
const double PI = 3.1415926535897932384626433;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> P;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pair<int, int>> vpii;

const int mod = 1e9 + 7;

template <class S, class T>
pair<S, T>& operator+=(pair<S, T>& s, const pair<S, T>& t) {
  s.first += t.first, s.second += t.second;
  return s;
}
template <class S, class T>
pair<S, T>& operator-=(pair<S, T>& s, const pair<S, T>& t) {
  s.first -= t.first, s.second -= t.second;
  return s;
}
template <class S, class T>
pair<S, T> operator+(const pair<S, T>& s, const pair<S, T>& t) {
  return pair<S, T>(s.first + t.first, s.second + t.second);
}
template <class S, class T>
pair<S, T> operator-(const pair<S, T>& s, const pair<S, T>& t) {
  return pair<S, T>(s.first - t.first, s.second - t.second);
}
template <class T> T dot(const pair<T, T>& s, const pair<T, T>& t) {
  return s.first * t.first + s.second * t.second;
}
template <class T> T cross(const pair<T, T>& s, const pair<T, T>& t) {
  return s.first * t.second - s.second * t.first;
}

template <typename T> ostream& operator<<(ostream& os, vector<T>& vec) {
  reps(i, vec) os << vec[i] << " ";
  return os;
}
template <typename T> ostream& operator<<(ostream& os, const vector<T>& vec) {
  reps(i, vec) os << vec[i] << " ";
  return os;
}
template <typename T> ostream& operator<<(ostream& os, list<T>& ls) {
  for (auto x : ls)
    os << x << " ";
  return os;
}
template <typename T> ostream& operator<<(ostream& os, const list<T>& ls) {
  for (auto x : ls)
    os << x << " ";
  return os;
}
template <typename T> ostream& operator<<(ostream& os, deque<T>& deq) {
  reps(i, deq) os << deq[i] << " ";
  return os;
}
template <typename T, typename U>
ostream& operator<<(ostream& os, pair<T, U>& ope) {
  os << "(" << ope.first << ", " << ope.second << ")";
  return os;
}
template <typename T, typename U>
ostream& operator<<(ostream& os, const pair<T, U>& ope) {
  os << "(" << ope.first << ", " << ope.second << ")";
  return os;
}
template <typename T, typename U>
ostream& operator<<(ostream& os, map<T, U>& ope) {
  for (auto p : ope)
    os << "(" << p.first << ", " << p.second << "),";
  return os;
}
template <typename T> ostream& operator<<(ostream& os, set<T>& ope) {
  for (auto x : ope)
    os << x << " ";
  return os;
}
template <typename T> ostream& operator<<(ostream& os, multiset<T>& ope) {
  for (auto x : ope)
    os << x << " ";
  return os;
}
template <typename T> void outa(T a[], ll s, ll t) {
  rep(i, s, t) {
    cout << a[i];
    if (i < t)
      cout << " ";
  }
  cout << nl;
}
template <typename T, size_t N>
ostream& operator<<(ostream& os, array<T, N>& arr) {
  reps(i, arr) os << arr[i] << " ";
  return os;
}
template <typename T, size_t N>
ostream& operator<<(ostream& os, const array<T, N>& arr) {
  reps(i, arr) os << arr[i] << " ";
  return os;
}
void dump_func() { cout << nl; }
template <class Head, class... Tail>
void dump_func(Head&& head, Tail &&...tail) {
  cout << head;
  if (sizeof...(Tail) > 0)
    cout << " ";
  dump_func(std::move(tail)...);
}