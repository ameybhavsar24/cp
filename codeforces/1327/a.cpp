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
#define FASTIO ios_bas6e::sync_with_stdio(false);cin.tie(NULL);


ll binarySearch(vector<ll>& arr, ll l, ll r, ll x) {
	
	if (l<r) {
		
		ll mid = (r-l)/2 + l;
		if(arr[mid] == x) {
			return mid;
		}
		else if(arr[mid] > x) {
			return binarySearch(arr, l, mid-1, x);
		}
		else {
			return binarySearch(arr, mid+1, r, x);
		}
	}
	
	else {
		return -1;
	}
}

void solution() {
	//cout << "HelloWorld!\n";
	
	
	ll n;
	cin >> n;
	
	//ll a[n][n];
	int princes[n+1];
	bool  dau[n+1];
	memset(dau, false, n+1);
	memset(princes, 0, n+1);
	
	
	
	rep(i,1,n+1) {
		ll k;
		cin >> k;
		bool marry = false;
		rep(j,0,k) {
			ll x;
			cin >> x;
			if (!marry && princes[x] == 0) {
				
				cout << "MARRIAGE DAU:" << i << " PRINCE:" << x << "\n";
				
				dau[i] = x;
				princes[x] = i;
				marry = true;
			}
		}
	}
	
	cout << "\nPrinces\n";
	rep(i,1,n+1) {
		cout << "PRINCE:" << i << " DAU:" << princes[i] << "\n";
	}
	
	
	
	rep(i,1,n+1) {
		if (!dau[i]) {
			rep(j,1,n+1) {
				if (princes[j]) {
					cout << "IMPROVE\n" << i << " " << j << "\n";
					return;
				}
			}
		}
	}
	
	cout << "OPTIMAL\n";
	
	
	
	
}


int main() {
	
	ll t;
	cin >> t;	
	while(t--) {
		solution();
	}
	
	//vector<ll> arr = {1,2,4,6,10};
	
	//cout << binarySearch(arr, 0, 5, 1);
	
	
	return 0;
}
