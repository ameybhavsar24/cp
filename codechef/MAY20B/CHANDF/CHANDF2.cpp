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
#define MOD 1000000007

//make sure to change MAXN according to constraints
#define MAXN 100001
#define M 42



template<std::size_t N>
bool operator<(const std::bitset<N>& x, const std::bitset<N>& y)
{
    for (int i = N-1; i >= 0; i--) {
        if (x[i] ^ y[i]) return y[i];
    }
    return false;
}
template<std::size_t N>
bool operator>(const std::bitset<N>& x, const std::bitset<N>& y)
{
    if (x < y || x == y)
		return false;
	return true;
}



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


ll checkval (bitset<M> ans, ll pos, ll l, ll r) {
	ans.set(pos);
	ll ansl = ans.to_ullong();
	if (ansl >= l && ansl <= r)
		return true;
	return false;
	//~if ((ans > lbit || ans == lbit) && (ans < rbit || ans == rbit))
		//~return true;
	//~return false;
}

ll t,n,x,y,l,r;
void solution() {
	cin >> x >> y >> l >> r;
	bitset<M> xny(x&y), xry(x|y), xbit(x), ybit(y);
	//~cout << "x:" << xbit << "\ny:" << ybit << "\n" << xry << "\n" << xny << "\n";
	rep(i, 0LL, (ll)M) {
		if (xry[i] && !xny[i] && checkval(xny, i, l,r))
			xny.set(i);
	}
	//~cout << xny << " " << xny.to_ullong() << "\n";
	//~cout << xny.to_ullong() << "\n";
	
	//~above block will only work for cases when x & y falls in [l,r]
	
	//~two things can happens
	//~xny was less than l
	//~xny was greater than r
	ansl = l;
	rep(j,l,r+1) {
		ans = bitset<M> (j);
		rep(i, 0LL, (ll)M) {
		if (xry[i] && !ans[i] && checkval(ans, i, l,r))
			xny.set(i);
		}
		
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
