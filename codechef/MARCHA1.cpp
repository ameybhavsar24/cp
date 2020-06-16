
// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
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

#define bpc(x) __builtin_popcount(x) 


void solution() {
	int n,p;
	cin >> n >> p;
	int notes[n];
	rep(i,0,n) cin >> notes[i];
	
	rep(i,0,pow(2,n)) {
		
		ll sum = 0;
		rep(j,0,n) {
			string x = bitset<8>(i).to_string();	
			if (x[8-j]-'0') {
				sum += notes[j];
			}
		}
		
		if(sum==p) {
			cout << "Yes\n";
			return;
		}
	}
	cout << "No\n";
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




