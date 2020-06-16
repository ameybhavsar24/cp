// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: Codechef

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

#define MAX 100002
unordered_map<ll, ll> k_cnt, current_map, cnts[MAX]; 

ll countSubarrays(ll* arr, ll n, int k) { 
  	k_cnt[2] = 2;
	// Two pointers initialized 
	int l = 0, r = 0; 
	ll ans = 0; 

	while (r < n) { 

		// Add rth element to the current segment 
		//for (auto& it : k_cnt) { 

			// p = prime factor of k 
			int pf = 2;
			if (arr[r] != 0) {
			while (arr[r] % pf == 0) { 
				current_map[pf]++; 
				cnts[r][pf]++; 
				arr[r] /= pf; 
			} 
			
		//} 

		// Check if current sub-array's product 
		// is divisible by k 
		int flag = 0; 
		for (auto& it : k_cnt) { 
			int p = it.first; 
			if (current_map[p] <= k_cnt[p]) { 
				flag = 1; 
				break; 
			} 
		} 

		// If for all prime factors p of k, 
		// current_map[p] >= k_cnt[p] 
		// then current sub-array is divisible by k 

		if (!flag) { 

			// flag = 0 means that after adding rth element 
			// segment's product is divisible by k 
			ans += n - r; 

			// Eliminate 'l' from the current segment 
			for (auto& it : k_cnt) { 
				int p = it.first; 
				current_map[p] -= cnts[l][p]; 
			} 

			l++; 
		} 
		else { 
			r++; 
		} 
		}
			else {
				ans += n - r;
				l++;
			}
	} 

	return ans; 
} 




ll csa(ll n) {
	// return no. of subarrays with len>0
	if (n%2 == 0) {
		return (n/2)*(n+1);
	}
	else {
		return n*((n+1)/2);
	}
}

void solution() {
	//cout << "HelloWorld!\n";
	ll n;
	cin >> n;
	ll a[n];
	ll count = 0;
	
	rep(i,0,n) {
		cin >> a[i];
		// count odd numbers
		//if (a[i]&1) count++;
	}
	bool foundEven = false;	
	ll oddC = 0;
	rep(i,0,n) {
		if (a[i] % 2 == 0) {
			foundEven = true;
			count += csa(oddC);
			oddC = 0;
		}
		else {
			foundEven = false;
			oddC ++;
		}
	}
	if (!foundEven) {
		count += csa(oddC);
	}
	
	ll fourC = countSubarrays(a,n,4);
	cout << "subarr div by 4 " << fourC << "\n";
	count += fourC;
	
	cout << count << "\n";
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
