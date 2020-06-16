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
	
	ll n;
	cin >> n;
	int a[n];
	rep(i,0,n) cin >> a[i];
	
	bool ok = false;
	
	rep(i,0,n) {
		rep(j,i+1,n) {
			ok |= (a[i]+a[j])%2 !=0;
		}
	}
	if(ok) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
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
