// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: COOK118B

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
#define MAXN 305

int t,n,m, a[MAXN][MAXN], b[MAXN][MAXN];
//~ll fe (ll x, ll y) {
	//~ll ans = 1;
	//~while (y>0) {
		//~if (y&1) {
			//~ans = (x*ans) % MOD;
		//~}
		//~y /= 2;
		//~x = (x*x) % MOD;
	//~}
	//~return (ans % MOD);
//~}
void solution() {
	cin >> n >> m;
	
	vector<map<int,int>> mp(n);
	
	rep(i,0,n) {
		rep(j,0,m) {
			b[i][j] = 0;
			cin >> a[i][j];
			mp[i][a[i][j]]++;
		}
	}
	
	bool palin = true;
	rep(i,0,n) {
		rep(j,0,m/2+1) {
			palin &= a[i][j] == a[i][m-j-1];
		}
	}
	if (palin) {
		//~!!!
		rep(i,0,n) {
			rep(j,0,m) {
				cout << a[i][j];
			}
		}
		return;
	}
	
	//~bool pos = true;
	rep(i,0,n) {
		//~!!!
		int odd = 0;
		tr(mp[i],it) {
			if (it->ss & 1)
				odd++;
		}
		if ((m&1 && odd != 1) || (m%2 == 0 && odd != 0)) {
			cout << -1 << "\n";
			return;
		}
	}
	
	//~rep(i,0,n) {
		//~tr(mp[i],it) {
			//~cout << it->ff << ":" << it->ss << "\n";
		//~}
		//~cout << "\n";
	//~}
	
	if (m & 1) {
		rep(i,0,n) {
			rep(j,0,m/2 + 1) {
				if (j == m/2) {
					tr(mp[i],it) {
						if (it->ss & 1 && it->ss > 0) {
							it->ss--;
							b[i][j] = it->ff;
						}
					}
					break;
				}
				tr(mp[i],it) {
					if (it->ss % 2 == 0 && it->ss > 0) {
						it->ss -=2;
						b[i][j] = it->ff;
						b[i][m-j-1] = it->ff;
						break;
					}
				}				
			}
		}		
	}
	else {
		rep(i,0,n) {
			rep(j,0,m/2) {
				tr(mp[i],it) {
					if (it->ss % 2 == 0 && it->ss > 0) {
						it->ss -=2;
						b[i][j] = it->ff;
						b[i][m-j-1] = it->ff;
						break;
					}
				}
			}
		}
	}
	
	
	
	
	rep(i,0,n) {
		rep(j,0,m) {
			cout << b[i][j] << " ";
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
