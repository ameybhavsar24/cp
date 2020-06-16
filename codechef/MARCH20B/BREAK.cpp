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




void solution(ll s) {
	ll n;
	cin >> n;
	ll a[n],b[n];
	rep(i,0,n) cin >> a[i];
	rep(i,0,n) cin >> b[i];
	sort(a,a+n);
	sort(b,b+n);
	
	
	ll j=0, ai=0, bi=0, aCount=n,bCount=n;
	bool pos = true;
	while(j<n) {
		ll currA = a[ai];
		ll currB = b[bi];
		if(currB>currA) {
			ai++;bi++;
			aCount--;
			bCount--;
		}
		else {
			
			while(bi<n) {
				if(b[bi]>a[ai]) {
					ai++; bi++;
					aCount--;
					bCount--;
				}
				bi++;
			}
			//pos = false;
			//break;
		}
		j++;
	}
	if(aCount==0 && bCount == 0) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}
	//cout << ai << " " << bi << "\n";
	//if(pos) {
		//cout << "YES\n";
	//}
	//else {
		//cout << "NO\n";
	//}
}


int main() {
	FASTIO
	ll t,s;
	cin >> t >> s;
	while(t--) {
		solution(s);
	}
	
	return 0;
}
