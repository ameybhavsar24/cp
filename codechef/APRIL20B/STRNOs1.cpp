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

vector<bool> SieveOfEratosthenes(int n) { 

    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) { 
        if (prime[p] == true) {
			for (int i=p*p; i<=n; i += p) 
				prime[i] = false; 
		}
    }
    vector<bool> primes;
    rep(i,0,n+1) primes.pb(prime[i]);
    return primes;
} 

vector<bool> primes = SieveOfEratosthenes(31623);


void solution() {
	ll x, k;
	cin >> x >> k;
	
	
	
	
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
