// Author: Amey Bhavsar
// License: CC
// IDE: Geany
// Platform: 

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define rep(i,a,b) for(auto i=(a);i<(b);i++)
#define repD(i,a,b) for(auto i=(a);i>=(b);i--)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);

int main() {
	
	int n;
	cin >> n;
	
	vector<int> factors;
	
	rep(i,2,sqrt(n)) {
		if (n%i == 0) {
			if (n/i == i) {
				factors.pb(i);			
			}
			else {
				factors.pb(i);
				factors.pb(n/i);
			}
		}
	}
	
	int cnt = 0;
	
	rep(i,0,(int)factors.size()) {
		rep(j,i+1, (int)factors.size()) {
			if (factors[i] * factors[j] == n) cnt ++;
		}
	}
	
	cnt += n + (int)floor(sqrt(n)) - 1;
	cout << cnt << "\n";
	
	return 0;
}
