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



int main() {
	
	
	ll n,k;
	cin >> n >> k;
	int a[n];
	rep(i,0,n) cin >> a[i];
	int c=0;
	
	for(int i=0;i<n-k+1; i++) {
		ll ones=a[i];
		int j=0;
		for(j=1;j<k;j++) {
			ones^=a[i+j];
		}
		if(!(ones)) {
			//cout << i << "to" << i+k-1 << "\n";
			//even no, of 1s
			c++;
			if(a[i+j-1]) a[i+j-1]=0;
			else a[i+j-1]=1;
		}
		
		//cout << ones << "\n";
	}
	cout << c << "\n";
	
	//rep(i,0,n) cout << a[i] << " ";
	
	return 0;
}
