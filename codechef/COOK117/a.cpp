// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: ---

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

#define MAXN 1000005
ll t,n;
string s,r;
bool tor[MAXN];

void solution() {
	cin >> s;
	cin >> r;
	n = s.size();
	//to replace	
	rep(i,0,n) {
		tor[i] = s[i] != r[i];
	}
	ll left = 0, right = n-1;
	rep(i,0,n) {
		if (tor[i]) {
			left = i;
			break;
		}
	}
	repD(i,n-1,0) {
		if (tor[i]) {
			right = i;
			break;
		}
	}
	
	
	//cout << s << "\n" << r << "\n";
	
	ll ans = 0;
	ll k = 0;
	ll l = 0;
	//rep(i,0,n) cout << tor[i] << " " ;
	//cout << "\n";
	rep(i,0,n) {
		ll cnt = 0;
		if (tor[i]) {
			while(i<n && tor[i]) {
				//cout << s[i] << " " << r[i] << "\n";
				i++;
				cnt ++;
				if (i<n && !tor[i]) {
					if (tor[i+1]) {
						i++;
						cnt ++;
					}
				}	
			}
			//cout << i << "\n";
			if (cnt > 1) {
				k++;
				l += cnt;
			}
			else {
				k++;
				l ++;
			}
			//cout << i << "\n";
		}
		
	}
	
	
	
	ans = min(right-left+1,k*l);
	//cout << ans << " " << k << " " << l <<  "\n";
	cout << ans << "\n";
}


int main() {
	
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	//ll t;
	cin >> t;	
	while(t--) {
		solution();
	}
	return 0;
}

