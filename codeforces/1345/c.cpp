// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: CF

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
#define MAXN 30000
ll t,n,len;
vector<ll> a(MAXN);
void solution() {
	cin >> n;
	len = n;
	ll pos = lower_bound(all(a),n)-a.begin();
	if (pos-1 < 0) {
		cout << "0\n";
		return;
	}
	
	ll cnt = 0;
	while (pos > 0 && n > 1) {
		pos = lower_bound(all(a),n)-a.begin();
		if (pos >=0 && a[pos] == n) {
			//~cout << "making pyramid with cards " << a[pos] << "\n";
			cnt++;
			break;
		}
		
		if (pos - 1 >=0)
			n -= a[pos-1];
		else
			break;
		//~cout << "making pyramid with cards " << a[pos-1] << "\n";
		
		
		if (a[pos-1] >=2) {
			cnt ++;
		}	
	}
	
	cout << cnt << "\n";
}

int main() {
	
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	
	ll iter = 0;
	ll v = 2;
	while (v <= 1LL*1e9) {
		a[iter] = v;
		iter++;
		v = (7*iter + 3*iter*iter)/2 + 2;
	}

	//~rep(i,0,5) {
		//~cout << a[i] << "  ";
	//~}
	cin >> t;	
	while(t--) {
		solution();
	}
	return 0;
}

