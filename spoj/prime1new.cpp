// Author: Amey Bhavsar
// License: CC
// IDE: Geany
// Platform: 

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define rep(i,a,b) for(ll i=a;i<b;i++)
#define repd(i,a,b) for(ll i=a;i>=b;i--)
#define rept(i,a,b,c) for(ll i=a;i<b;i+=c)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);



void simpleSieve(ll limit, vi& prime) {
	bool mark[limit + 1];
	memset(mark,false, sizeof(mark));
	
	rep(i,2,limit+1) {
		if(mark[i]==false) {
			prime.pb(mark[i]);
			rept(j,i,limit+1,i)
				mark[j] = true;
		}
	}
}

void solution() {
	//cout << "HelloWorld!\n";
	ll low,high;
	cin >> low >> high;
	ll limit = floor(sqrt(high)) + 1;
	vi prime;
	simpleSieve(limit,prime);
	
	ll n = high - (low - 1);
	bool mark[n+1];
	memset(mark,false,sizeof(mark));
	
	ll len = prime.size();
	rep(i,0,len) {
		ll loMultiple = floor(low / prime[i]) * prime[i];
		if(loMultiple < low)
			loMultiple += prime[i];
		if(loMultiple == prime[i])
			loMultiple += prime[i];
			
		rept(j,loMultiple,high+1,prime[i]) {
			mark[j-low] = true;
		}
	}
	
	rep(i,low,high+1) {
		if(!mark[i-low])
			cout << i << " ";
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
