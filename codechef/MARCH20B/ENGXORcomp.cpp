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
	ll n, q, feven=0, fodd=0;
	cin >> n >> q;
	ll a[n],b[n];
	rep(i,0,n) {
		//cin >> a[i];
		a[i] = rand() % 100000 + 10001;
		b[i] = bpc(a[i]);
	}
	
	rep(i,0,q) {
		
		ll p,a11,a12,a21,a22;
		//cin >> p;
		p = rand() % 100000 + 10001;
		int bp = bpc(p);
		if(i==0) {
			rep(j,0,n) {
				if((b[j]+bp) & 1) fodd++;
				else feven++;
			}
			//cout << feven << " " << fodd << "\n";
			a11 = feven; a12 = fodd;
		}
		else {
			//if((bp+b[0]) & 1) cout << feven << " " << fodd << "\n";
			//else cout << fodd << " " << feven << "\n";
			if((bp+b[0]) & 1)  {
				a11 = fodd; a12 = feven;
			}
			else {
				a11 = feven; a12 = fodd;
			}
			
		}
		//cout << p << ":" << a11 << " " << a12 << "\n";
		ll even=0,odd=0;
		string xbin = bitset<8>(p).to_string();
		rep(j,0,n) {
			string bin = bitset<8>(a[j]).to_string();
			ll z = p^a[j];
			if((bpc(z))&1) odd++;
			else even++;
		}
		a21 = even; a22 = odd;
		//cout  << "p=" << p <<  " ENGXOR3.cpp " << a11 << " " <<  a12 << " ENGXOR.cpp " << a21 << " " << a22;
		if(a11 != a21 || a12 != a22) {	
			cout  << "p=" << p <<  " ENGXOR3.cpp " << a11 << " " <<  a12 << " ENGXOR.cpp " << a21 << " " << a22;
			cout << " WA";
			cout << "\n";
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
