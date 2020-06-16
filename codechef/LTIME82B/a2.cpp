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
	
	
	string s;
	cin >> s;
	int k, x;
	int n = (int) s.size();
	cin >> k >> x;
	
	
	vector<int> ig;
	map<char,int> data;
	
	ll skips = 0;
	int i;
	for (i=0; i<n-1; i++) {
		if (!data[s[i]]) data[s[i]] = 1;
		else data[s[i]] ++;
		
		
		if (data[s[i]] > x) {
			if (k>0) {
				k--;
				skips++;
			}
			else {
				break;
			}
		}
		
	}
;
	cout << i - skips << "\n";
}

int main() {
	
	ll t;
	cin >> t;	
	while(t--) {
		solution();
	}
	
	return 0;
}









