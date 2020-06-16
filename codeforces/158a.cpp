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


void solution() {
	int n,k;
	cin >> n >>k;
	int a[n];
	int ans=0;
	rep(i,0,n) cin >> a[i];
	rep(i,0,n) if(a[i]>0 && a[i]>=a[k-1]) {ans++;}
	cout << ans << "\n";
}
	


int main() {
	solution();	
	return 0;
}
