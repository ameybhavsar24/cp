// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: CF

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef pair<ll, ll> pll;
typedef vector<pll> vll;

#define bpc __builtin_popcount
#define bpcl __builtin_popcountll
#define bpr __builtin_parity
#define bprl __builtin_parityll
#define ctz __builtin_ctz
#define ctzl __builtin_ctzll
#define rep(i,a,b) for(auto i=a;i<b;i++)
#define repD(i,a,b) for(auto i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second


// to be used with algorithms that processes a container Eg: find(all(c),42)
#define all(x) (x).begin(), (x).end() //Forward traversal
#define rall(x) (x).rbegin, (x).rend() //reverse traversal
// traversal function to avoid long template definition
#define tr(c,i) for(__typeof__((c)).begin() i = (c).begin(); i != (c).end(); i++)
//find version works for all containers. This is present in std namespace.
#define cpresent(c,x) (find(all(c),x) != (c).end())

void solution() {
	//cout << "HelloWorld!\n";
	ll n;
	cin >> n;
	ll a[n];
	rep(i,0,n) cin >> a[i];
	
	if (n == 1) {
		cout << "0\n";
		return;
	}
	
	map<int, int, greater<int> > data;
	rep(i,0,n) data[a[i]]++;
	
	ll cf = 0;
	tr(data,j)
		if (j->ss == 1) cf++;
	
	if (cf > 0) {
		//tr(data,i) cout << i->ff << " " << i->ss << "\n";
		tr(data,i) {
			if (i->ss >= 1) {
				ll co = i->ss;
				
				return;
			}
		}
	}
	
	cout << "0\n";
	
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	ll t;
	cin >> t;	
	while(t--) {
		solution();
	}
	return 0;
}
