// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: Codechef/MAY20B

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
#define MAXN 10
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


//left means more significant
int getleftmostpos(bitset<M> nbit) {
	repD(i,M-1,0) {
		if (nbit[i])
			return i;
	}
	return -1;
}

int getrightmostpos(bitset<M> nbit) {
	rep(i,0,M) {
		if (nbit[i])
			return i;
	}
	return -1;
}

ll t,x,y,l,r,xny,xry;

//to set kth bit
//(1 << k) | n

//to check kth bit
//n & (1 << (k - 1))
ull val;
bool checkval (bitset<M> nbit, int pos, bitset<M> L, bitset<M> R) {
	// this function check if after setting a bit at pos in nbit,
	// value of nbit still belongs the range or not
	nbit.set(pos+1);
	cout << nbit << "\n";
	if ((nbit > L || nbit == L) && (nbit < R || nbit == R))
		return true;
	return false;
}

void solution() {
	cin >> x >> y >> l >> r;
	
	xny = x&y;
	xry = x|y;	
	//cout << xry << "\n";
	bitset<M> lbit(l), rbit(r);
	bitset<M> xbit (x);
	bitset<M> ybit (y);
	bitset<M> xnybit (xny);
	bitset<M> xrybit (xry);
	
	int xnyposL = getleftmostpos(xnybit);
	int xnyposR = getrightmostpos(xnybit);
	
	int xryposL = getleftmostpos(xrybit);
	int xryposR = getrightmostpos(xrybit);
	
	// check if we can set the left most bit
	// i.e. it comes into the range
	//cout << lbit << "\n" << rbit << "\n" << xrybit << "\n" << xryposL << "\n";
	
	cout << xnybit << "\n";
	
	bool setleft = checkval(xnybit, xryposL, lbit, rbit);
	while (setleft) {
		xnybit.set(xryposL);
		if (xryposL > 0)
			xryposL--;
		else
			break;
		
		setleft = checkval(xnybit, xryposL, lbit, rbit);
	}
	
	cout << xnybit << "\n";
	//cout << setleft << "\n";
	
	
	
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	cin >> t;	
	while(t--) {
		solution();
	}
	return 0;
}
