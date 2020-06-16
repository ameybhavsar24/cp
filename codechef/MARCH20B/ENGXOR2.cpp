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
#define bpc(dec) __builtin_popcount(dec) 


int returnAns(int p) {
	//pattern
	//0: even odd
	//1: odd even
	//2: odd even
	//3: even odd
	//4: odd even
	//5: even odd
	//6: even odd
	//7: odd even
	
	// return 1 if ans is "odd even"
	// return 0  is ans is "even odd"
	
	switch(p) {
		case 1:
		case 2:
		case 4:
		case 7:
		case 8:
		case 11:
		case 13:
		case 14:
		case 16:
		case 19: return 1; break;
	}
	
	return 0;
}


void solution() {
	ll n,q;
	cin >> n >> q;
	ll a[n];
	
	//ll arrXor = 0;
	
	rep(i,0,n) {
		cin >> a[i];
		//arrXor ^=x;
	}
	
	ll odd=0,even=0;
	rep(i,0,n) {
			if((bpc(0^a[i]))&1) odd++;
			else even++;
	}	
	rep(i,0,q) {
		ll x;
		cin >> x;
		if(returnAns(x)) {
			// returnAns(x) is 1 then print "even odd"
			cout <<x  << ": "<< even << " " << odd << "\n";
		}
		else {
			cout <<x  << ": "<< odd << " " << even << "\n";
		}
	}
	
	
	
	
}


int main() {
	
	ll t;
	cin >> t;	
	while(t--) {
		solution();
	}
	
	return 0;
}
