#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define pb push_back


bool palin(string x, int n) {
	
	bool ok = true;
	rep(i,0,n/2+1) {
		ok &= x[i]==x[n-i-1];
	}
	return ok;
	
}

int main() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	
	rep(i,0,n/2+1) {
		
	}
	
	
	return 0;	
}
