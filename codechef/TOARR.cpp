// Author: Amey Bhavsar
// License: CC
// IDE: Geany
// Platform: 

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
	ll count=1;
	// first element is always common
	ll p,q;
	cin >> p;
	ll a[p];
	rep(i,0,p) cin >> a[i];
	
	cin >> q;
	ll b[q];
	rep(i,0,q) cin >> b[i];
	
	
	if(p==1 || q==1) {
		cout << "1\n";
	}
	else {
		ll m=a[1]-a[0];
		ll n=b[1]-b[0];
		ll n1 = max(p,q);
		 ll n2 = min(p,q);
		 ll c = b[0]-a[0]-n+m;
		rep (j,1,n2+1) {
			if( (c+n2*n)%m == 0) {
				if((c+n2*n)/m <=n1) count++;
			}
		}
		
		
		rep (j,1,n1+1) {
			if( (n1*m-c)%n == 0) {
				if (((n1*m - c)/n) <= n2) count++;
			}
		}
		
		cout << count << "\n";
		
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
