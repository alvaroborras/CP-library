#include <bits/stdc++.h>

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
#define nl "\n"
#define pb push_back
#define fi first
#define se second
#define inf 2e18
#define eps 1e-9
const double PI = 3.1415926535897932384626433;

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> P;

template<typename T1, typename T2>
ostream& operator<<(ostream& os, const pair< T1, T2 >& p) {
  os << p.first << " " << p.second;
  return os;
}

template<typename T1, typename T2>
istream& operator>>(istream& is, pair< T1, T2 >& p) {
  is >> p.first >> p.second;
  return is;
}

template<typename T>
ostream& operator<<(ostream& os, const vector< T >& v) {
  for (int i = 0; i < (int)v.size(); i++) {
    os << v[i] << (i + 1 != (int)v.size()?" ":"");
  }
  return os;
}

template<typename T>
istream& operator>>(istream& is, vector< T >& v) {
  for (T& in : v) is >> in;
  return is;
}