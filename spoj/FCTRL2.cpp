// Author: Amey Bhavsar
// License: CC
// IDE: Geany
// Platform: Spoj

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


int fac [160];

void solution() {
	//cout << "HelloWorld!\n";
	rep(i,0,160) fac[i]=0;
	
	ll n;
	cin >> n;
	
	ll tmp = n;
	ll i=0;
	while(tmp > 0) {
		fac[i] = tmp%10;
		tmp /= 10;
		i++;
	}
	
	ll mf = n-1;
	i=0;
	while(mf>0) {
		// multiply array fac by mf
		ll tmp2  = fac[i]*mf;
	}
	
	
	
	
	
	
	
	
	
	
	
}




int main() {
	
	ll t;
	cin >> t;	
	while(t--) {
		solution();
	}
	
	return 0;
}
