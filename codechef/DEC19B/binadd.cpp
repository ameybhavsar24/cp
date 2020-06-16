// binadd.cpp

#include "/home/amey/stdc++.h"
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);    
#define dbyte bitset<16>
int main() {
	// your code goes here
	FASTIO
	ll t;
	cin >> t;
	while(t--) {
		string x,y;
		cin >> x >> y;
		ull a = dbyte(x).to_ullong();
		ull b = dbyte(y).to_ullong();
		ull u,v;
		ull c=0;
		while(b>0) {
			u = a ^ b;
			v = a & b;
			a = u;
			b = 2*v;
			c++;
		}

		cout << c << "\n";
	}

	return 0;

}