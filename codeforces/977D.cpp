// Author: Amey Bhavsar
// License: CC
// IDE: Geany
// Platform: Codeforces

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
#define all(v) v.begin(),v.end()


int main() {
	
	int n;
	cin >> n;
	//ull a[n];
	vector<ull> a;
	rep(i,0,n) {
		ull x;
		cin >> x;
		a.pb(x);
	}
	int i=0;
	for(i=0; i<n; i++) {
		if (a[i] % 3 == 0) {
			if ( find(all(a), 2*a[i])==a.end() && find(all(a), a[i]/3)==a.end() ) break;
		}
		else {
			if (find(all(a), 2*a[i]) == a.end()) break;
		}
	}
	
	//last element of correct seq is stored in i
	//cout << i << "\n";
	
	vector<int> seq;
	seq.pb(i);
	int jumps = 0;
	stack<int> posSeq;
	while(jumps<n-1) {
		
		if (find(all(seq), j) == seq.end()) {
			if(a[i] % 2 == 0) {
				if (a[i]/2 == a[j] || a[i]*3 == a[j]) 
					posSeq.push(i);
			}
			else if (a[i]*3 == a[j])
					posSeq.push(i);
					
			j = i;
			jumps++;
		}
		else {
			posSeq.pop();
			j = posSeq.top();
			jumps-;
		}
	}
	
	
	return 0;
}



