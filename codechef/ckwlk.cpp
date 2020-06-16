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
	
	int n, m, k, l, r;
	cin >> n >> m >> k >> l >> r;
	
	vector< pair<ll, ll> > cans;
	rep (i,0,n) {
		ll tmp, price;
		cin >> tmp >> price;
		cans.pb(mp(price, tmp));
	}
	
	sort(cans.begin(), cans.end());
	
	
	for (auto x : cans) {
		//pair<ll, ll> x = cans[i];
		if  (k > x.ss) {
			if (m>=k) {
				x.ss += k;
			}
			else {
				x.ss += m;
			}
		}
		
		else if (k < x.ss) {
			if (m>=k) {
				x.ss -= k;
			}
			else {
				x.ss -= m;
			}
		}
		
		if (x.ss >= l && x.ss <=r) {
			cout << x.ff << "\n";
			return;
		}
			
	}
	cout << "-1\n";
	
}


int main() {
	
	ll t;
	cin >> t;	
	while(t--) {
		solution();
	}
	
	return 0;
}
