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

ll fe (ll x, ll y) {
	ll ans = 1;
	while (y>0) {
		if (y&1) {
			ans = (x*ans) % MOD;
		}
		y /= 2;
		x = (x*x) % MOD;
	}
	return (ans % MOD);
}

int n,p,x;
vector<vector<int>> a;
void solution() {
	cin >> n >> p;
	a.assign(n, vector<int> (n,0));
	
	//~ask n^2 queries
	rep(i,1,n+1) {
		rep(j,1,n+1) {
			cout << 1 << " " << i << " " << j << " " << i << " " << j << endl;
			cin >> x;
			if (x == -1)
				exit(0);
			if (x) {
				a[i-1][j-1] = 1;
			}
		}
	}
	
	cout << 2 << endl;
	for (auto& e:a) {
		for (auto& c:e) {
			cout << c << " ";
		}
		cout << endl;
	}
	
	cin >> x;
	if (x == -1)
		exit(0);
	
	
	
}

int main() {
	//~ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin >> t;	
	while(t--) {
		solution();
	}
	return 0;
}
