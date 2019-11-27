#include "home/amey/stdc++.h"
using namespace std;


typedef long long ll;

#define rep(n) for(ll i=0; i<n; i++)


int main() {

	ll t;
	cin >> t;
	while(t--) {
		ll n;
		cin >> n;
		ll nums[n];
		rep(n) {
			cin >> nums[n];
		}
		sort(nums,nums+n);
		ll minDiff = INT_MAX;
		rep(n-1) {
			minDiff = min(minDiff, abs(nums[i]-nums[i+1])) 
		}
		cout << minDiff << "\n";

	return 0;
}