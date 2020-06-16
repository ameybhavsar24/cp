// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: Google Code Jam 2020

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


void solution(int test) {
	//cout << "HelloWorld!\n";
	string s;
	cin >> s;
	
	ll n = (ll) s.size();
	
	string ans = "";
	
	
	//char d = '0';
	
	rep(i,0,n) {
		if (s[i] != '0') {
			if (i==0) {
				rep(j,0,s[i]-'0') ans+='(';
			}
			else {
				rep(j,0,s[i]-s[i-1]) ans+='(';
			}

			
			ll iter = i;
			while(s[iter] == s[i]) {
				ans += s[i];
				iter++;
			}
			iter --;
			if (iter + 1 < n) {
				if (s[iter+1] < s[iter]) {
					rep(j,0,s[iter] - s[iter+1]) ans += ')';
				}
			}
			else if (s[iter] > '0') {
				rep(j,0,s[iter]-'0') ans += ')';
			}
			
			i = iter;
			
		}
		else {
			ans += s[i];
		}
		

		
	}
	
	
	cout << "Case #" << test << ": " << ans << "\n";
	
	
	
}





int main() {
	FASTIO
	ll t;
	cin >> t;	
	rep(i,1,t+1) solution(i);
	
	return 0;
}
