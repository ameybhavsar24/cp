// Author: Amey Bhavsar
// License: CC
// IDE: Geany
// Platform: 

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define rep(i,a,b) for(auto i=a;i<b;i++)
#define repD(i,a,b) for(auto i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);



int gcd(ll a, ll b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b); 
} 
  
// Returns LCM of array elements 
ll findlcm(vll arr, ll n) 
{ 
    // Initialize result 
    ll ans = arr[0]; 
  
    // ans contains LCM of arr[0], ..arr[i] 
    // after i'th iteration, 
    for (ll i = 1; i < n; i++) 
        ans = (((arr[i] * ans)) / 
                (gcd(arr[i], ans))); 
  
    return ans; 
} 


void solution() {
	//cout << "HelloWorld!\n";
	ll n, m;
	cin >> n >> m;
	vll a;
	rep(i,0,n) {
		ll x;
		cin >> x;
		a.pb(x);	
	}
	
	ll lcm = findlcm(a,n);
	//cout << lcm << "\n";
	
	ll mx = lcm;
	ll mxe = 1;
	
	repD(i,m,1) {
		vll list = a;
		list.pb(i);
		ll newLcm = findlcm(list, n+1);
		if (newLcm > mx) {
			mx = newLcm;
			mxe = i;
		}
	}
	
	cout << mxe << "\n";
	

}


int main() {
	
	ll t;
	cin >> t;	
	while(t--) {
		solution();
	}
	
	return 0;
}
