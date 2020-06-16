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
	int n,t,k,d;
	cin >> n >> t >> k >> d;
	int currCakes1 = n;
	int currCakes2 = n;
	int t1 = 0;
	int t2 = d;
	while(currCakes1>0) {
		t1 += t;
		currCakes1 -= k;
	}
	while (currCakes2 > 0) {
		t2 += t;
		currCakes2 -= 2*k;
	}
	if(t1<t2) cout << "YES\n";
	else cout << "NO\n";
	
	
	
	return 0;
}
