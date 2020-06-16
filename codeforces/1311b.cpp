
// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: Codechef

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define rep(i,a,b) for(auto i=a;i<b;i++)
#define repD(i,a,b) for(auto i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);

#define bpc(x) __builtin_popcount(x) 


int max(ll a, ll b) {
	return a>b?a:b;
}

void solution() {
	ll n,m;
	cin >> n >> m;
	
	ll a[n],p[m];
	rep(i,0,n) cin >> a[i];
	rep(i,0,m) cin >> p[i];
	
	//rep (i,0,n) {
		//ll s = smallest(i,n);
	//}
	
	
	
}

int main() {
	FASTIO
	
	ll t;
	cin >> t;
	while(t--) {
		solution();
	}
	
	return 0;
}




