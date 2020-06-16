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
	unordered_map<char,int> chars;
	string s;
	cin >> s;
	int n = (int)s.size();

	rep(i,0,n) {
		chars[s[i]]++;
	}
	string comp;
	for(auto elem: chars) {
		comp+=elem.first+to_string(elem.second);
	}
	if((int)comp.size()<n) {
		puts("YES\n");
	}
	else {
		puts("NO\n");
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
