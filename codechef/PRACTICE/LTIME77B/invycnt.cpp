// invycnt.cpp
#include "/home/amey/stdc++.h"
using namespace std;
#define ll long long

typedef vector<ll> vi;
#define pb push_back
#define rep(i,from,till) for(ll i=from;i<till;i++)
#define fillV(a,n) rep(i,0,n) {ll x;cin >> x;a.pb(x);}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin >> t;
	while(t--) {
		ll n,k;
		cin >> n >> k;
		vi A;
		fillV(A,n);
		rep(i,0,n) {
			cout << A[i] << " ";
		}
		cout << "\n";
		// step 1: count inversions in vect a
		// let's call it P
		ll P = 0;
		rep(i,0,n) {
			rep(j,0,n) {
				if(i<j && A[i]>A[j]) {
					P++;
				}
			}
		}
		// step 2: find number of pairs of different numbers in A
		// call that Q
		ll Q = k*(k-1)/2;

		cout << P*k + 2*Q << "\n";
	}
	return 0;
}