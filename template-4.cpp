#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <climits>
#include <cmath>
#include <complex>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;

// TYPES
                                using ll   = long long;
                                using str  = string;
template <typename T>           using vt   = vector<T>;
                                using vi   = vt<int>;
                                using vl   = vt<ll>;
template <typename T, size_t U> using ar   = array<T, U>;
template <typename T,
typename Cmp_Fn = std::less<T>> using iset = __gnu_pbds::tree<T,
                                             __gnu_pbds::null_type,Cmp_Fn,
                                             __gnu_pbds::rb_tree_tag,
                                             __gnu_pbds::tree_order_statistics_node_update>;

// MACROS
#define iab(i, a, b) for (int i = a; i < b; i++)
#define iba(i, b, a) for (int i = b-1; i >= a; i--)
#define i0n(i, n)    iab(i, 0, n)
#define in0(i, n)    iba(i, n, 0)
#define rep(n)       i0n(_, n)
#define each(x, X)   for (auto x:X)
#define all(x)       x.begin(),x.end()
#define len(x)       ((int)(x).size())
#define pb           push_back

// FUNCTIONS
//     INPUT
template <typename ...T> void re(T &...t) { (cin >> ... >> t); }
#define                       inp(type, Args...) type Args; re(Args)
#define                       iin(Args...) inp(int, Args)
#define                       ill(Args...) inp(ll, Args)
#define                       ivi(var, size) vi var(size); i0n(i,size) cin>>var[i]
#define                       ivl(var, size) vl var(size); i0n(i,size) cin>>var[i]
#define                       ivvi(var,x,y) vt<vi> var(y, vi(x)); i0n(i,y) i0n(j,x) cin>>var[i][j]
#define                       ivvl(var,x,y) vt<vl> var(y, vl(x)); i0n(i,y) i0n(j,x) cin>>var[i][j]
//     PRINT
template <typename ...T> void pr(T ...t) { ((cout << t << ' '), ...); }
template <typename ...T> void prn(T ...t) { pr(t...); cout << '\n'; }
#define                       pall(X) each(x, X) pr(x)
#define                       paln(X) {each(x, X) pr(x); prn();}
                         void no() { cout << "NO\n"; }
                         void yes() { cout << "YES\n"; }
//     HELPERS
                           ll cdiv(ll a, ll b) { return a/b + ((a^b)>0 && a%b); }
                           ll fdiv(ll a, ll b) { return a/b - ((a^b)<0 && a%b); }
                          str upper(str s) { each(c,s) c=toupper(c); return s; }
                          str lower(str s) { each(c,s) c=tolower(c); return s; }

// CONSTANTS
const int dx[4] = { 1, 0, -1, 0 };
const int dy[4] = { 0, 1, 0, -1 };
const int M1 = 1e9+7;
const int M9 = 998244353;

// MAIN
// #define USETC
void solve(int tci);
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    auto _clock = clock();
#endif
#ifdef USETC
    inp(int, ntc); iab(tci, 1, ntc+1) solve(tci);
#else
    solve(0);
#endif
#ifndef ONLINE_JUDGE
    cerr << "Run time: " << 1000*((double)clock()-_clock)/CLOCKS_PER_SEC << "ms\n";
#endif
}

// SOLUTION 
void solve(int tci) {}
