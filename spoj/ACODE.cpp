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
	string x;
	while (cin >> x && x != "0") {
		ll n = x.size();
		vector<ll> dp(n+1,0);
		dp[1] = 1;
		x = "0"+x;
		for (ll i=2; i<=n; i++) {
			dp[i] = dp[i-1];
			ll ch = (x[i-1]-'0')*10 + (x[i]-'0');
			if (ch>=10 && ch =< 26)
				dp[i] += dp[i-2];
			else if (ch<10) {
				
			}
		}
		cout << dp[n] << "\n";
	}
	return 0;
}
