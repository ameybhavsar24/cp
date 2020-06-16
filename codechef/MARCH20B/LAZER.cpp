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
	
	ll n,q;
	cin >> n >> q;
	ll a[n];
	rep (i,0,n) cin >> a[i];
	
	float x1, x2, y;
	float xInter;
	rep(i,0,q) {
		ll interCount = 0;
		cin >> x1 >> x2 >> y;
		rep(j,0,n-1) {
			if( ((a[j] >= y && a[j+1] <= y ) || (a[j+1] >= y && a[j] <= y)) && x1<=(j+1)  && x2>=(j+2)) {
				interCount++;;
			//if( (a[j] >= y && a[j+1] <= y ) || (a[j+1] >= y && a[j] <= y)) {
				//xInter = 
				//if(xInter >= x1 && xInter <= x2) {
					//cout << "(" << j+1 << "," << a[j] << ")" << "to (" << j+2 << "," << a[j+1] << ") intersection x: " << xInter << "\n";
					//interCount++;
				//}
			//}
		}
	}
		cout << interCount << "\n";
	}

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
