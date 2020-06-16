// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: ---

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define rep(i,a,b) for(auto i=a;i<b;i++)
#define repD(i,a,b) for(auto i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

// to be used with algorithms that processes a container Eg: find(all(c),42)
#define all(x) (x).begin(), (x).end() //Forward traversal
#define rall(x) (x).rbegin, (x).rend() //reverse traversal
// traversal function to avoid long template definition
#define tr(c,i) for(__typeof__((c)).begin() i = (c).begin(); i != (c).end(); i++)
//find version works for all containers. This is present in std namespace.
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define MOD 1000000007
//make sure to change MAXN according to constraints
#define MAXN 100001

void solution() {
	vector<int> t1(3);
	vector<int> t2(3);
	rep(i,0,3)
		cin >> t1[i];
	rep(i,0,3)
		cin >> t2[i];
	
	int ans = 3, n = 3;
	
	if (t1 == t2) {
		cout << 0 << "\n";
		return;
	}
	
	for (int d1 = -10; d1 <= 10; d1++) {
		for (int i = 0; i < 1<<n; i++) {
			vector<int> s1;
			
			for (int j=0; j<n; j++) {
				if (i&(1<<j)) {
					s1.pb(t1[j]+d1);
				}
				else {
					s1.pb(t1[j]);
				}
			}
			
			if (s1 == t2) {
				cout << 1 << "\n";
				return;
			}
		}
	}
	
	
	for (int d1 = -10; d1 <= 10; d1++) {
		for (int i = 0; i < 1<<n; i++) {
			vector<int> s1;
			
			for (int j=0; j<n; j++) {
				if (i&(1<<j)) {
					s1.pb(t1[j]+d1);
				}
				else {
					s1.pb(t1[j]);
				}
			}
			
			if (s1 == t2) {
				cout << 1 << "\n";
				return;
			}
			else {
				for (int d2 = -10; d2 <= 10; d2++) {
					for (int k = 0; k < 1<<n; k++) {
						vector<int> s2;
						for (int l = 0; l < n; l++) {
							if (k&(1<<l)) {
								s2.pb(s1[l]+d2);
							}
							else {
								s2.pb(s1[l]);
							}
						}
						if (s2 == t2) {
							cout << 2 << "\n";
							return;
						}
					}
				}
			}
			
			
		}
	}
	
	cout << ans << "\n";
	return;
	
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin >> t;	
	while(t--) {
		solution();
	}
	return 0;
}
