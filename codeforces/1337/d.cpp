// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: Codeforces

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

uint64_t fnc(ll x, ll y, ll z) {
	uint64_t p1 = x-y;
	uint64_t p2 = y-z;
	uint64_t p3 = z-x;
	return p1*p1 + p2*p2 + p3*p3;
}

void solution() {
	
	ll r,g,b;
	cin >> r >> g >> b;
	set<ll> ar,ag,ab;
	vector< pair<int,int> > data;
	rep(i,0LL,r) {
		ll ri;
		cin >> ri;
		ar.insert(ri);
		data.pb(mp(ri,1));
	}
	rep(i,0LL,g) {
		ll gi;
		cin >> gi;
		ag.insert(gi);
		data.pb(mp(gi,2));
	}
	rep(i,0LL,b) {
		ll bi;
		cin >> bi;
		ab.insert(bi);
		data.pb(mp(bi,3));
	}
	
	
	sort(all(data));
	
	ll dataSize = data.size();
	int smallestSet = data[0].ss;
	int z = 1;
	while(data[z].ss == smallestSet) {
		z++;
	}
	int secondSmallest = data[z].ss;
	
	//tr(ar,i) {
		//cout << *i << " ";
	//}
	//cout << "\n";
	//tr(ag,i) {
		//cout << *i << " ";
	//}
	//cout << "\n";
	//tr(ab,i) {
		//cout << *i << " ";
	//}
	//cout << "\n";
	
	
	
	
	
	uint64_t ans = 10000000000000;
	uint64_t newans;
	set <ll> :: iterator ia,ig,ib;
	ll bestr, bestg, bestb;
	if (smallestSet == 1) {
		ia = ar.begin();
		bestr = *ar.begin();
		if (secondSmallest == 2) {
			ig = ag.begin();
			bestg = *ag.begin();
			ib = ab.begin();
			bestb=*ab.begin();
		}
		else {
			ig = ab.begin();
			bestg = *ab.begin();
			ig = ag.begin();
			bestg=*ag.begin();
		}
	}
	if (smallestSet == 2) {
		ia = ag.begin();
		bestr = *ag.begin();
		if (secondSmallest == 1) {
			ig = ar.begin();
			bestg = *ig;
			ib = ab.begin();
			bestb = *ib;
		}
		else {
			ig = ab.begin();
			bestg = *ig;
			ib = ar.begin();
			bestb = *ib;
		}
	}
	if (smallestSet == 3) {
		ia = ab.begin();
		bestr = *ab.begin();
		if (secondSmallest == 1) {
			ig = ar.begin();
			bestg = *ig;
			ib = ag.begin();
			bestb = *ib;
		}
		else {
			ig = ag.begin();
			bestg = *ig;
			ib = ab.begin();
			bestb = *ib;
		}
	}
	
	

	//auto ia = ar.begin(), ig = ag.begin(), ib = ab.begin();
	//ll bestr=*ar.begin(), bestg=*ag.begin(), bestb=*ab.begin();
	//cout << bestr << " " << bestg << " " << bestb << "\n";
	while(ia != ar.end()) {
		//cout << *ia << " ";
		newans = fnc(*ia, bestg, bestb);
		//cout << newans << "\n";
		if (newans < ans) {
			ans = newans;
			bestr = *ia;
		} 
		ia++;
	}
	//cout << "\n1. "  << bestr << " " << bestg << " " << bestb << " " << ans << "\n";
	while(ig != ag.end()) {
		cout << *ig << " ";
		newans = fnc(bestr, *ig, bestb);
		if (newans < ans) {
			ans = newans;
			bestg = *ig;
		} 
		ig++;
	}
	//cout << "\n2. " << bestr << " " << bestg << " " << bestb << " " << ans << "\n";
	while(ib != ab.end()) {
		cout << *ib << " ";
		newans = fnc(bestr, bestg, *ib);
		if (newans < ans) {
			ans = newans;
			bestb = *ib;
		} 
		ib++;
	}
	//cout << "\n" <<  bestr << " " << bestg << " " << bestb << " " << ans << "\n";
	cout << ans << "\n";
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	ll t;
	cin >> t;	
	while(t--) {
		solution();
	}
	return 0;
}
