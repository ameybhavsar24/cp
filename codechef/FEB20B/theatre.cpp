// Author: Amey Bhavsar
// License: CC
// IDE: Geany
// Platform: Codechef

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
	ll n;
	cin >> n;
	if(n!=0) {
		
		vector< pair<char,ll> > requests;
		rep(i,0,n) {
			char m;
			ll t;
			cin >> m >> t;
			requests.pb(mp(m,t));
		}
		
		vector< tuple<char,ll,ll> > data;
		
		//cout << m << " " << t << "\n";
	}
}


int main() {
	//FASTIO
	ll tests;
	cin >> tests;	
	while(tests--) {
		solution();
	}
	
	return 0;
}
