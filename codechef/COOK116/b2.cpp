// Author: Amey Bhavsar
// License: CC
// IDE: Geany
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


void solution() {
	//cout << "HelloWorld!\n";
	
	
	ll n;
	cin >> n;
	//ll w[n];

	//ll mx = -1;

	
	vector<ll> mxIndex;	
	ll mx = -1;
	ll w[n];
	rep (i,0,n) {
		cin >> w[i];
		if (w[i] > mx) {
			mx = w[i];
			mxIndex = {};
		}
		if (w[i] == mx) {
			mxIndex.pb(i);
		}
	}
	
	ll mxSize = (ll) mxIndex.size();
		
		
	//rep (i,0,mxSize) {
		//cout << mxIndex[i] << " ";
	//}
	
	
	ll ways = 0;
	rep (i,0,n) {
		//bool ok = true;
		ll l = i;
		ll r = (n/2)+i-1;
		//cout << l << " " << r << "\n";
		bool ok = true;
		rep (j,0,mxSize) {
			ok &= !(mxIndex[j] <=r && mxIndex[j] >=l);
		}
		if (ok) {
			ways++;
		}
		//rep (j,i,(n/2)+i) {
			////ok &= w[j%n] != mx;
		//}
		//if (ok) ways++;
		if (ways==0) ways++;
	}
	
	cout << ways << "\n";

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
