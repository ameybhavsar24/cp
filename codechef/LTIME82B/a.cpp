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


bool count(string x, int p) {
	map<char,int> data;
	rep(i,0,(ll) x.size()) {
		if (!data[x[i]]) data[x[i]] = 1;
		else {
			data[x[i]] ++;
		}
	}
	bool ok = true;
	for (auto i = data.begin(); i != data.end(); i++) {
		ok &= i->second <= p;
	}
	
	return ok;
}

void solution() {
	//cout << "HelloWorld!\n";
	string s;
	cin >> s;
	ll n = (ll) s.size();
	
	int x,k;
	cin >> k >> x;
	ll cnt = 0;
	rep(i,1,n) {
		if(count(s.substr(0,i),x, &k)) cnt++;
	}
	//cout << cnt << "\n";
	//if (cnt < n-1) {
		////some prefix failed
		
	//}
	
	cout << cnt << "\n";
	
	
}


int main() {
	
	ll t;
	cin >> t;	
	while(t--) {
		solution();
	}
	
	return 0;
}
