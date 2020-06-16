// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: Codeforces

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef pair<ll, ll> pll;
typedef vector<pll> vpll;

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


int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	
	int n, time;
	cin >> n >> time;	
	
	
	string x;
	cin >> x;
	
	
	bool pre = false;
	
	for(int i=0; i<n-1; i++) {
		if (x[i] < x[i+1] && !pre && time > 0) {
			x[i] = 'G';
			x[i+1] = 'B';
			pre = true;
			time--;
		}
		else if (time <=  0) {
			break;
		}
		else {
			pre = false;
		}
	}
	
	
	cout << x << "\n";	
	
	
	
	return 0;
}





