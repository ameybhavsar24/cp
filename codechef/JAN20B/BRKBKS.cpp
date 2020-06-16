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


void solution(ll s, ll w1,ll w2,ll w3) {
	//cout << "HelloWorld!\n";
	//double s,w1,w2,w3;
	//cin >> s >> w1 >> w2 >> w3;
	cout << ceil((w1+w2+w3)/s) << "\n";
}


int main() {
	
	//ll t;
	//cin >> t;	
	//while(t--) {
		//solution();
	//}
	
	rep(s,1,9) {
		//s
		rep(w1,1,3) {
			//w1
			rep(w2,1,3) {
				//w2
				rep(w3,1,3) {
					//w3
					cout << s << " " << w1 << " " << w2 << " " << w3 << "\n";
					solution(s,w1,w2,w3);
				}
			}
		}
	}
	
	
	return 0;
}
