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

int lcm (int a, int b) {
	return (a*b)/__gcd(a,b);
}


int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin >> t;
	while(t--) {
		int n,m,a,d;
		cin >> n >> m >> a >> d;
		if (n>m) {
			swap(n,m);
		}
		ll ans = 0;
		for (int i=0; i<=4; i++) {
			//~cout << m/(a+i*d) << " " << a+i*d << "\n";
			ans += m/(a+i*d);
			//~cout <<  ans << " ";
			ans -= n/(a+i*d);
			//~cout << ans << "\n";
		}
		
		for (int i=0; i<=4; i++) {
			for (int j=i+1; j<=4; j++) {
				ans -= (m/lcm(a+i*d,a+j*d) - n/lcm(a+i*d,a+j*d));
			}
		}
		
		
		cout << ans << "\n";
		
		
		
		
	}	
	
	return 0;
}
