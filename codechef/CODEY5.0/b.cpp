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

int n,q;
vector<int> a;
void solution() {
	cin >> n;
	a.assign(n+1, 0);
	ll p = 1;
	rep(i,1,n+1) {
		cin >> a[i];
		p = (p*a[i]) % MOD;
		p %= MOD;
	}
	
	vector<pair<int,int>> zero;
	
	cin >> q;
	rep(i,0,q) {
		int qx;
		cin >> qx;
		if (qx == 0) {
			int id, v;
			cin >> id >> v;
			
			if (v == 0) {
				
			}
			
			p = (p/a[id])%MOD;
			p = (p*v)%MOD;
			a[id] = v;
		}
		else {
			int id;
			cin >> id;
			cout << (p/a[id])%MOD << "\n";
		}
	}
	
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	solution();
	//~int t;
	//~cin >> t;	
	//~while(t--) {
		//~solution();
	//~}
	return 0;
}
