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
	
	
	vector<ll> mxIndex;	
	vector<ll> ways;
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
	
	
	
	
	ll mi = 1e9;
	rep(i,0,(ll)mxIndex.size()) {
		
		
		
		if (mxIndex[i] < n/2) {
			mi = min(mi, n/2);
		}
		else {
			mi = min(mi, (n-1)-mxIndex[i]);
		}
		//cout << mi << " " << i << " "  << mxIndex[i] << "\n";
	}
	
	bool alreadyOk  = true;
	rep (i,0,n/2) {
		alreadyOk &= w[i] != mx;
	}
	
	if (alreadyOk) mi++;
	
	cout << mi << "\n";
}


int main() {
	
	ll t;
	cin >> t;	
	while(t--) {
		solution();
	}
	
	return 0;
}
