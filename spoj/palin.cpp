// Author: Amey Bhavsar
// License: CC
// IDE: Geany
// Platform: spoj

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define rep(i,a,b) for(ll i=a;i<b;i++)
#define repD(i,a,b) for(ll i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);



bool palin(ll x) {
	//string s = to_string(x);
	ll x_og = x;
	ll x_palin = 0;
	while(x>0) {
		x_palin*=10;
		x_palin+=x%10;
		x/=10;
	}
	return x_og == x_palin;
}

void solution() {
	ll x;
	cin >> x;
	x++;
	while(!palin(x)) {
		x++;
	}
	cout << x << "\n";
}


int main() {
	
	ll t;
	cin >> t;	
	while(t--) {
		solution();
	}
	return 0;
}

