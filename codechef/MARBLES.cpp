
// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: Codechef

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

#define bpc(x) __builtin_popcount(x) 



ll nCr(ll n, ll r) 
{
	
	n--;
	r--; 
    ll p = 1, k = 1; 
 
    if (n - r < r) 
        r = n - r; 
  
    if (r != 0) { 
        while (r) { 
            p *= n; 
            k *= r; 
  
          
            long long m = __gcd(p, k); 
  
            p /= m; 
            k /= m; 
  
            n--; 
            r--; 
        } 
  
    } 
  
    else
        p = 1; 
    return p;
} 

void solution() {
	ll n,k;
	cin >> n >> k;
	if (k>=n/2) k=n-k;
	
	cout << nCr(n,k) << "\n";
	
}

int main() {
	FASTIO
	
	ll t;
	cin >> t;
	while(t--) {
		solution();
	}
	
	return 0;
}




