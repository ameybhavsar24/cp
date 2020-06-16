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

int n;
string a,b;
void solution() {
	cin >> n >> a >> b;
	
	map<char,int> ma, mb,data;
	rep(i,0,n) {
		ma[a[i]]++;
		mb[b[i]]++;
		
		if (a[i] != b[i]) {
			data[b[i]]++;
		}
	}
	
	
	for (auto& el : mb) {
		if (ma[el.first] == 0) {
			cout << "-1\n";
			return;
		}
	}
	set<char> out;
	for (auto& el : ma) {
		if (mb[el.first] == 0) {
			//~out.pb(el.first);
			out.insert(el.first);
		}
	}

	for (auto& el : mb) {
		map<char,int> mt = ma;
		set<int> op;
		index = 0;
		while (index < n && a[index] != el.first)
			index++;
		op.insert(index);
		rep(i,0,n) {
			if (a[i] != el.first && b[i] == el.first) {
				if (data[a[i]] > 0 && mt[a[i]] > 1) {
					mt[a[i]]--;
					op.insert(i);	
				}
			}
		}
		char c = a[index];
		for (auto& el : op) {
			
		}
		
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
