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


void solution() {
	//cout << "HelloWorld!\n";
	
	ll s;
	cin >> s;
	ll ans=0;
	if(s<10) {
		ans = s;
	}
	else {
		
		int times = s/9;
		
		//while(s>=10) {
		if(s%9!=0) {
			ans+=10*times;}
		else {
			ans+=(10*times)-1;
		}
			s-=9*times;
		//}
		
		ans+=s;
	}
	cout << ans << "\n";
	
}


int main() {
	
	ll t;
	cin >> t;	
	while(t--) {
		solution();
	}
	
	return 0;
}
