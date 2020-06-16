// Author: Amey Bhavsar
// License: CC
// IDE: Geany
// Platform: CodeChef MARCH20B 

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
	ll n,q;
	cin >> n >> q;
	ll a[n];
	unordered_map<int, pair<int, int> > ans;
	
	rep(i,0,n) {
		cin >> a[i];
		//a[i] = rand()*100;
	}	
	
	rep(i,0,q) {
		ll even=0,odd=0,x;
		cin >> x;
		//x=(q*11 + i*q)*(100);
		if (ans.find(x) != ans.end()) {
			cout << ans[x].first << " " << ans[x].second << "\n";
		}
		else {
			//x=i+1;
			string xbin = bitset<8>(x).to_string();
			rep(j,0,n) {
				string bin = bitset<8>(a[j]).to_string();
				ll z = x^a[j];
				string zbin = bitset<8>(z).to_string();
				//cout << bin << ":" << a[j] << "\n" << xbin << ":" << x << "\n" << zbin << ":" << z;
				
				//cout << "\n\n";
				if((bpc(x^a[j]))&1) odd++;
				else even++;
				
				
			}
			cout << even << " " << odd << "\n";
			ans[x] = mp(even, odd);
		}
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
