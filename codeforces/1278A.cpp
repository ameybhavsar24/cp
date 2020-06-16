// Author: Amey Bhavsar
// License: CC
// IDE: Geany
// Platform: 

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define rep(i,a,b) for(ll i=a;i<b;i++)
#define repD(i,a,b) for(ll i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);


void solution() {
	//cout << "HelloWorld!\n";
	string pass,cipher;
	cin >> pass >> cipher;
	map<char,int> passC,cipherC;
	int passLen = pass.size();
	int cipherLen = cipher.size();
	rep(i,0,passLen) {
		if(passC.find(pass[i])!=passC.end()) {
			//found
			passC[pass[i]]++;
		}
		else {
			passC.insert(pair<char,int>(pass[i],1));
		}
	}
	rep(i,0,cipherLen) {
		if(cipherC.find(cipher[i])!=cipherC.end()) {
			//found
			cipherC[cipher[i]]++;
		}
		else {
			cipherC.insert(pair<char,int>(cipher[i],1));
		}
	}
	bool correct = true;
	for( auto iter = cipherC.begin(); iter != cipherC.end(); iter++) {
		if(passC.find(iter->first)!=passC.end()) {
			//found cipher's key in pass
			correct &= iter->second >= passC.find(iter->first)->second;
		}
	}
	if (correct) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
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
