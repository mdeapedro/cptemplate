#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;


template <typename T> using iset = __gnu_pbds::tree<T, __gnu_pbds::null_type, less<T>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update>;
using ll = long long;
using str = string;
using pi = pair<int, int>;
using pl = pair<ll, ll>;
using vi = vector<int>;
using vb = vector<bool>;
using vl = vector<ll>;
using vs = vector<str>;
using vpi = vector<pi>;
using vpl = vector<pl>;


#define iab(i, a, b) for (int i = (a); i < (b); i++)
#define iba(i, b, a) for (int i = (b)-1; i >= (a); i--)
#define i0n(i, n) iab(i, 0, n)
#define in0(i, n) iba(i, n, 0)
#define rep(n) i0n(_, n)
#define each(x, X) for (auto &x : X)
#define mp make_pair
#define F first
#define S second
#define B begin()
#define E end()
#define all(x) x.B,x.E
#define pb push_back


inline namespace Constants {
    const ll MOD = LLONG_MAX;
    // const int MOD = 1000000007;
    // const int MOD = 998244353;
}


inline namespace Functions {
    template <typename ...T> void pr(T ...t) { ((cout << t << ' '), ...); }
    template <typename ...T> void prn(T ...t) { pr(t...); cout << '\n'; }
    template <typename ...T> void re(T &...t) { (cin >> ... >> t); }
    void yes() { cout << "YES\n"; }
    void no() { cout << "NO\n"; }
    ll divup(ll a, ll b) { return a/b + (a%b>0); }
    ll divnear(ll a, ll b) { return a/b + ((2*a/b)&1); }
    ll pwr(ll a, ll x) { ll r = 1; while (x > 1) { if (x&1) r = r*a%MOD; a = a*a%MOD; x /= 2; } return a*r%MOD; }
    ll fact(ll x) { if (x == 0) return 1; return x*fact(x-1)%MOD; }
    ll comb(ll n, ll p) { auto mm = minmax(p, n-p); ll r = 1; iab(i, mm.S+1, n+1) r = r*i%MOD; return r/fact(mm.F); }
}


#define def(type, Args...) type Args; re(Args)


void solve(int ti) {}


#define USE_TESTCASES
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifdef USE_TESTCASES
        def(int, t); iab(ti, 1, t+1) solve(ti);
    #else
        solve(0);
    #endif
}
