// ***
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
vector<int> a(MAXN);
vector<int> adj[MAXN];
vector<int> parent(MAXN);
vector<int> depth(MAXN);
vector<bool> vst(MAXN);

void dfs(int at, int prev, int d) {
	if (vst[at]) {
		return;
	}
	//~cout << at << " ";
	vst[at] = true;
	parent[at] = prev;
	depth[at] = d;
	
	for (auto& nb : adj[at]) {
		dfs(nb,at, d+1);
	}
}

void solution() {
	cin >> n >> q;
	//~clear variables
	parent.assign(n+1, -1);
	depth.assign(n+1, 0);
	vst.assign(n+1, false);
	rep(i,0,n+1) 
		adj[i].clear();
		
	//~input node vals	
	rep(i,1,n+1) {
		cin >> a[i];
	}
	
	rep(i,0,n-1) {
		int u,v;
		cin >> u >> v;
		adj[u].pb(v);
		adj[v].pb(u);
	}
	
	
	//~root the tree at node 1 - arbitary
	//~precompute parents and depth for all nodes
	dfs(1,-1,0);
	//~rep(i,1,n+1) {
		//~cout << i << ":" << parent[i] << " " << depth[i] << "\n";
	//~}
	
	//~input queries
	rep(i,0,q) {
		int u,v;
		cin >> u >> v;	
		vector<int> path;
		bool zero = false;
		while (u != v) {
			if (depth[u] > depth[v]) {
				path.pb(a[u]);
				u = parent[u];
			}
			else {
				path.pb(a[v]);
				v = parent[v];
			}
			if ((int) path.size() > 100) {
				zero = true;
				break;
			}
		}
		path.pb(a[u]);
		if (zero || (int) path.size() > 100) {
			cout << "0\n";
			continue;
		}
		
		sort(all(path));
		int ans = 2e9;
		rep(j,0,(int) path.size() - 1) {
			ans = min(ans, path[j+1] - path[j]);
		}
			
		cout << ans << "\n";
		
		
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
