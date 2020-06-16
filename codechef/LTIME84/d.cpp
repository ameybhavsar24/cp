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
#define MAXN 200010

int n,q;
vector<int> a(MAXN,0);
vector<vector<int>> adj(MAXN);
vector<int> vst(MAXN, false);

bool found = false;
void dfs(stack<int>& path, int s, int f) {
	path.push(s);
	if (s == f) {
		found = true;
		return;
	}
	vst[s] = true;
	for (auto& nb : adj[s]) {
		if (!vst[nb]) {
			dfs(path, nb, f);
			if (found) {
				return;
			}
			else {
				path.pop();
			}
		}
	}
}


void solution() {
	cin >> n >> q;
	rep(i,1,n+1) {
		adj[i].clear();
	}
	rep(i,1,n+1) {
		cin >> a[i];
		vst[i] = false;
	}
	
	rep(i,0,n-1) {
		int u,v;
		cin >> u >> v;
		adj[u].pb(v);
		adj[v].pb(u);
	}
	
	//~cout << q << "\n";
	rep(i,0,q) {
		//~cout << "query:" << i <<  "\n";
		found = false;
		vst.assign(n+1, false);
		int u,v;
		cin >> u >> v;
		stack<int> path;
		dfs(path,u,v);
		
		if ((int) path.size() > 100) {
			cout << "0\n";
			continue;
		}
		
		vector<int> pathv((int)path.size());
		for (auto& el : pathv) {
			el = path.top();
			path.pop();
		}
		
		int mi = 1e9;
		bool got = false;
		map<int,int> pm;
		rep(i,0,(int)pathv.size()) {
			pm[a[pathv[i]]]++;
			if (pm[a[pathv[i]]] > 1) {
				cout << 0 << "\n";
				got = true;
				break;
			}
		}
		if (!got) {
			for (auto it = pm.begin()
		}
			
		
		
		
		
		cout << mi << "\n";
		
	}
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
