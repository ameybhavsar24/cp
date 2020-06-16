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
//make sure to change MAXN according to constraints
#define MAXN 200005
int t, n, k, iter, m, arr[MAXN];
void solution() {
	cin >> n >> k;
	map <int, bool> sorted;
	rep(i,1,n+1) cin >> arr[i];
	
	
	m = 0;iter = 1;
	while (iter <= n && m < k) {
		if (iter != arr[iter]) {
			//~int a = arr[iter];
			//~int b = arr[arr[iter]];
			//~int c = arr[arr[arr[iter]]];
			
			int tmp = iter;
			cout << arr[iter] << " " << arr[arr[iter]] << " " << arr[arr[arr[tmp]]] << "\n";
			
			if (arr[iter] == arr[arr[arr[iter]]]) {
				//~bi swap and not tri swap
				tmp ++;
			}
			//~cout << iter << " " << tmp << "\n";
			cout << arr[iter] << " " << arr[arr[iter]] << " " << arr[arr[arr[tmp]]] << "\n";
			
			//~a and b
			if (arr[iter]>arr[arr[iter]])
				swap(arr[iter], arr[arr[iter]]);
			//~b and c
			if (arr[arr[iter]]>arr[arr[arr[tmp]]])
				swap(arr[arr[iter]], arr[arr[arr[tmp]]]);
			//~a and b
			if (arr[iter]>arr[arr[iter]])
				swap(arr[iter], arr[arr[iter]]);
			m++;
			
			cout << "Arr after op:" << m << "\n";
			rep (i,1,n+1)
				cout << arr[i] << " ";
			cout << "\n";
			
		}
		iter ++;
		
	}
	
	rep (i,1,n+1)
		cout << arr[i] << " ";
	
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	cin >> t;	
	while(t--) {
		solution();
	}
	return 0;
}
