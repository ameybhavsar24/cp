// gfg

#include "/home/amey/stdc++.h"
using namespace std;

// macros
typedef long long ll;
#define vi vector<int>
#define vll vector<ll>
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MAX 1000


ll count(ll n, ll DP[]) {
	if(n<0) return 0;
	if(n==0) return 1;

	if(DP[n]!=-1) {
		return DP[n];
	}

	return DP[n-1] + DP[n-3] + DP[n-5];
}

int main() {
	// FASTIO
	ll x;
	cout << "Input sum to be made:\n";
	cin >> x;
	ll DP[MAX+1];
rep(i,0,MAX+1) {
	DP[i] = -1;
}
	cout << count(x, DP);

	return 0;
}