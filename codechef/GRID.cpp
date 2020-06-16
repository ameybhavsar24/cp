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
	ll n;
	cin >> n;
	char a[n][n];
	rep(i,0,n) {
		rep(j,0,n) {
			cin >> a[i][j];
		}
	}
	
	ll c=0;
	
	rep (i,0,n) {
		rep(j,0,n) {
			if(a[i][j] != '#') {
				bool pos = true;
				rep(k,j,n) {
					pos &= a[i][k] == '.';
				}
				rep(k,i,n) {
					pos &= a[k][j] == '.';
				}
				if (pos) c++;
			}
		}
	}
	
	
	cout << c << "\n";
	
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
