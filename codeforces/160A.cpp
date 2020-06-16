#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	int arr[n];
	int sum = 0;
	for (int i=0; i<n; i++) {
		cin >> arr[i];
		sum+=arr[i];
	}
	sort(arr,arr+n,greater<int>());
	int cost = 0;
	int i=0;
	while(cost<=sum-cost && i<n) {
		cost+=arr[i];
		i++;
	}
	cout << i;
	
	return 0;
}
