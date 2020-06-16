
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
	ll n,m,x,y;
	cin >> n >> m >> x >> y;
	
	if ((n==1 || m==1) && (n!=1 || m!=1)) {
		cout << "Pofik\n";
	}
	
	//if( (n==1 && m!=1) || (n=!1 && m==1) ) {
		//cout << "Pofik\n";
	//}
	else {
		if( ((n-1)%x == 0 && (m-1)%y == 0) || ((n)%x == 1 && (m)%y == 1) || ((n-2)%x == 0 && (m-2)%y == 0)) {
			cout << "Chefirnemo\n";
		}
		else {
			cout << "Pofik\n";
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




