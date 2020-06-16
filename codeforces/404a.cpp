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
	FASTIO
	
	
	int n;
	cin >> n;
	
	
	vector<string> pattern;
	
	rep (i,0,n) {
		string x;
		cin >> x;
		pattern.pb(x);
	}
	bool ok = true;
	rep (i,0,n) {
		rep (j,0,n) {
			ok &= pattern [i][j] == pattern [i][n-1-j];
			if(i<n/2) {
				if (j<n/2) {
					ok &= pattern [i][j] == pattern [i+1][j+1];
					if (!ok) {
						cout << "OK=false at i:" << i << "j:" << j << "\n";
						cout << "Case 1-1";
						return 0;
					}
				}
				if (j>n/2) {
					ok &= pattern [i][j] == pattern [i+1][j-1];
					if (!ok) {
						cout << "OK=false at i:" << i << "j:" << j << "\n";
						cout << "Case 1-2";
						return 0;
					}
				}
			}
			if (i>n/2 && i != n-1) {
				if (j<n/2) {
					ok &= pattern [i][j] == pattern [i+1][j-1];
					if (!ok) {
						cout << "OK=false at i:" << i << "j:" << j << "\n";
						cout << "Case 2-1";
						return 0;
					}
				}
				if (j>n/2) {
					ok &= pattern [i][j] == pattern [i+1][j+1];
					if (!ok) {
						cout << "OK=false at i:" << i << "j:" << j << "\n";
						cout << "Case 2-2";
						return 0;
					}
				}
			}
			
		}
	}
	if (ok) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	
	

	return 0;
}


