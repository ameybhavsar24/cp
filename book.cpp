#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,a,b) for(auto i=a;i<b;i++)

const int mxN = 1e5 + 10;

vector<vector<int>> adj(mxN);
vector<bool> vst(mxN, false);

void dfs(int at) {
	if (vst[at])
		return;
	vst[at] = true;
	for (auto nb : adj[at]) {
		dfs(nb);
	}
}

int main() {
    int n,m,k,u,v;
    cin >> n >> m >> k;
    rep(i,0,m) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int cnt = 0;
    for (int i=1; i<=n; i++) {
		if (!vst[i]) {
			cnt++;
			dfs(i);
		}
    }
    if (cnt > k) {
		cout << "-1\n";
	}
	else {
		cout << m-(n-k) << "\n";
	}

    return 0;
}
