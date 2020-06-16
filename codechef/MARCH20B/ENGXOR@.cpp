// Author: Amey Bhavsar
// License: CC
// IDE: Geany
// Platform: CodeChef MARCH20B 

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

int overlapping(ll a, ll b) {
	int c=0;
	while(a>0 && b>0) {
		if(a&1 && b&1) c++;
		a>>=1;
		b>>=1;		
	}
	return c;
}

void solution() {
	ll n,q,even=0,odd=0;
	cin >> n >> q;
	ll a[n];
	vector<int> binsCount;
	
	rep(i,0,n) {
		cin >> a[i];
		//a[i] = rand()*100;
		binsCount.pb(bpc(a[i]));
	}		
	rep(i,0,q) {
		ll x;
		cin >> x;
		//x=(q*11 + i*q)*(100-i);
		int xbinCount = bpc(x);
		rep(j,0,n) {
			if( (xbinCount+binsCount[j]-overlapping(x,a[j]))&1 ) odd++;
			else even++;
		}
	}
	
	cout << even << " " << odd << "\n";
	
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
