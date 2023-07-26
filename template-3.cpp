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
using namespace std;
using ll = long long;
using str = string;
#define iab(i, a, b) for (int i = a; i < b; i++)
#define iba(i, b, a) for (int i = b-1; i >= a; i--)
#define i0n(i, n) iab(i, 0, n)
#define in0(i, n) iba(i, n, 0)
#define each(x, X) for (auto &x:X)
#define all(x) x.begin(),x.end()
#define len(x) (int)(x).size()
template <typename ...T> void pr(T ...t) { ((cout << t << ' '), ...); }
template <typename ...T> void prn(T ...t) { pr(t...); cout << '\n'; }
template <typename ...T> void re(T &...t) { (cin >> ... >> t); }
#define inp(type, Args...) type Args; re(Args)
ll cdiv(ll a, ll b) { return a/b + ((a^b)>0 && a%b); }
ll fdiv(ll a, ll b) { return a/b - ((a^b)<0 && a%b); }


// #define USETC
void solve(int tci) {}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    #ifdef USETC
        inp(int, ntc); iab(tci, 1, ntc+1) solve(tci);
    #else
        solve(0);
    #endif
}
