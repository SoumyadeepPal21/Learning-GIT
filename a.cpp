#include<bits/stdc++.h>
using namespace std;
template <class T> ostream &operator << (ostream &os, const vector<T> &p) { os << "["; for (auto&it : p) os << it << " "; return os << "]";}
template <class S, class T> ostream &operator << (ostream &os, const pair<S, T> &p) { return os << "(" << p.first << "," << p.second << ")";}
#ifndef ONLINE_JUDGE
#define deb(...) dbs(#__VA_ARGS__,__VA_ARGS__)
template <class T> void dbs(string str, T t) { cerr << str << ":" << t << "\n";}
template<class T, class...S> void dbs(string str, T t, S... s) { int idx = str.find(','); cerr << str.substr(0, idx) << ":" << t << ","; dbs(str.substr(idx + 1), s...);}
#else
#define deb(...){}
#endif
#define int long long
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define ini(x, y) memset(x, y, sizeof(x))
#define pr(x) {cout << x << '\n'; return;}
#define nl cout<< '\n'
#define rep(i,n) for(int i = 0; i < n; i++)
#define re(i,n) for(int i = 1; i <= n; i++)
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
template<class T> inline T Bit(T x, int i) { return (x >> i) & 1;}
template<class T> bool umin(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool umax(T &a, T b) { return a < b ? (a = b, true) : false; }
const int N = 2e5 + 3; // check the limits

void solve(int tc) {

}

signed main() {
	ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t = 1;
	cin >> t;
	for (int i = 1; i <= t; i++) solve(i);
	return 0;
}