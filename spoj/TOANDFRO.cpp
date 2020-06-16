// Author: Amey Bhavsar
// License: CC
// IDE: Geany
// Platform: 

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define rep(i,a,b) for(auto i=(a);i<(b);i++)
#define repD(i,a,b) for(auto i=(a);i>=(b);i--)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);


int main() {
	//cout << "\n\n";
	int n;
	while (cin >> n && n != 0) {
		string s;
		cin >> s;
		
		vector<string> data;
		data.reserve(n);
		
		for (int i=0; i<(int) s.size()/n; i+=2) {
			data.pb(s.substr(n*i,n));
			data.pb(s.substr(n*(i+1),n));
			reverse(data[data.size()-1].begin(),data[data.size()-1].end());
		}
		
		rep(j,0,n) {
			rep (i,0,(ll) data.size()) {
				cout << data[i][j];
			}
		}
		cout << "\n";
		
		
		//rep (k,0,n) {
			//rep (i,0,(ll) data.size()) {
				//cout << data[i][k];
			//}
		//}
		
		//cout << data[0][0];
		
	}
	return 0;
}
