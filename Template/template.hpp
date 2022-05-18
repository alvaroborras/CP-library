#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <cassert>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <bitset>
#include <string>
#include <algorithm>
#include <utility>
#include <complex>
#include <array>
#include <random>
#include <climits>
#include <unordered_set>
#include <unordered_map>
using namespace std;

#define rep(x, s, t) for (ll x = (s); (x) <= (t); (x)++)
#define per(x, s, t) for (ll x = (s); (x) >= (t); (x)--)
#define reps(x, s) for (ll x = 0; (x) < (ll)(s).size(); (x)++)
#define chmin(x, y) (x) = min((x), (y))
#define chmax(x, y) (x) = max((x), (y))
#define sz(x) ((ll)(x).size())
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

const int mod = 1e9 + 7;

template< typename T1, typename T2 >
ostream& operator<<(ostream& os, const pair< T1, T2 >& p) {
  os << p.first << " " << p.second;
  return os;
}

template< typename T1, typename T2 >
istream& operator>>(istream& is, pair< T1, T2 >& p) {
  is >> p.first >> p.second;
  return is;
}

template< typename T >
ostream& operator<<(ostream& os, const vector< T >& v) {
  for (size_t i = 0; i < v.size(); i++) {
    os << v[i] << (i + 1 != v.size()?" ":"");
  }
  return os;
}

template< typename T >
istream& operator>>(istream& is, vector< T >& v) {
  for (T& in : v) is >> in;
  return is;
}

template< typename T = int64_t >
vector< T > make_v(size_t a) {
  return vector< T >(a);
}

template< typename T, typename... Ts >
auto make_v(size_t a, Ts... ts) {
  return vector< decltype(make_v< T >(ts...)) >(a, make_v< T >(ts...));
}

template< typename T, typename V >
typename enable_if< is_class< T >::value == 0 >::type fill_v(T& t, const V& v) {
  t = v;
}

template< typename T, typename V >
typename enable_if< is_class< T >::value != 0 >::type fill_v(T& t, const V& v) {
  for (auto& e : t) fill_v(e, v);
}

template< typename F >
struct FixPoint : F {
  explicit FixPoint(F&& f) : F(forward< F >(f)) {}

  template< typename... Args >
  decltype(auto) operator()(Args &&... args) const {
    return F::operator()(*this, forward< Args >(args)...);
  }
};

template< typename F >
inline decltype(auto) MFP(F&& f) {
  return FixPoint< F >{forward< F >(f)};
}