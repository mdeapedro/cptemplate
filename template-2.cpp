#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define iab(i, a, b) for (int i = a; i < b; i++)
#define iba(i, b, a) for (int i = b-1; i >= a; i--)
#define i0n(i, n) iab(i, 0, n)
#define in0(i, n) iba(i, n, 0)
#define each(x, X) for (auto &x:X)
#define all(x) x.begin(),x.end()
template <typename ...T> void pr(T ...t) { ((cout << t << ' '), ...); }
template <typename ...T> void prn(T ...t) { pr(t...); cout << '\n'; }
template <typename ...T> void re(T &...t) { (cin >> ... >> t); }
#define def(type, Args...) type Args; re(Args)
#define TESTCASE def(int, ntc); iab(tci, 1, ntc+1)
void solution();
int main() { ios_base::sync_with_stdio(false); cin.tie(nullptr); solution(); return 0; }

void solution() {}
