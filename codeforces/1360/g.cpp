// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: CF-Div.3 #644

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef pair<ll, ll> pll;
typedef vector<pll> vll;

#define bpc __builtin_popcount
#define bpcl __builtin_popcountll
#define bpr __builtin_parity
#define bprl __builtin_parityll
#define ctz __builtin_ctz
#define ctzl __builtin_ctzll
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
#define MAXN 55

int t,n,m,a,b;
bool z[MAXN][MAXN];
int row[MAXN], col[MAXN];
void solution() {
	cin >> n >> m >> a >> b;
	
	if (n/m != b/a) {
		cout << "NO\n";
		return;
	}
	
	cout << "YES\n";
	rep(i,1,n+1) {
		row[i] = 0;
	}
	rep(i,1,m+1) {
		col[i] = 0;
	}
	
	rep(i,1,n+1) {
		int c = 1;
		while (c <=m && row[i] < a) {
			if (col[c] < b) {
				z[i][c] = 1;
				c++;
				row[i]++;
				col[c]++;
			}
			c++;
		}
		
	}
	
	
	bool ok = true;
	rep(i,1,n+1) {
		ok &= row[i] == a;;
	}
	rep(i,1,m+1) {
		ok &= col[i] == b;
	}
	
	
	rep(i,1,n+1) {
		rep(j,1,n+1) {
			cout << z[i][j];
		}
		cout << "\n";
	}
	
	if (!ok) {
		cout << "NO\n";
		return;
	}
	cout << "YES\n";
	r
	ep(i,1,n+1) {
		rep(j,1,n+1) {
			cout << z[i][j];
		}
		cout << "\n";
	}
	
	
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	cin >> t;	
	while(t--) {
		solution();
	}
	return 0;
}
