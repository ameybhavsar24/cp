// ZCO15002.cpp
#include "/home/amey/stdc++.h"
// #include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define pb push_back


void solve() {
	// solution here
	ll n,k;
	cin >> n >> k;
	vector<ll> seq;
	rep(i,0,n) {
		ll x;
		cin >> x;
		seq.pb(x);
	}

	ll pairs_i = 0;
	rep(i,1,n) {	
		rep(j,0,i) {	
			if(abs(seq[j]-seq[i])>=k) {
				pairs_i++;
			}
		}
	}
	cout << pairs_i;

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}