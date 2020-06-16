// test.cpp

#include "/home/amey/stdc++.h"

typedef long long unsigned llu;
#define pb push_back

using namespace std;


int main() {

	// arr size
	int n = 7;
	int arr[] = {4,6,12,12,12,70,80,90};

	int x = 12;
	// auto k = lower_bound(arr,arr+n,x)-arr;
	// auto l = upper_boung(arr,arr+n,x)-arr;
	// cout << k << " " << arr[k] << " " << "\n";
	auto a = lower_bound(arr, arr+n, x);
	auto b = upper_bound(arr, arr+n, x);
	
	cout << b << "\n" << a << "\n" << b-a << "\n";
	cout << *arr << "\n";

	return 0;
}