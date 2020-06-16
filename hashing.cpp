#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gethash(string const& s) {
	const int p = 31;
	const int m = 1e9 + 9;
	ll hash_val = 0, p_pow = 1;
	for (char c : s) {
		hash_val = (hash_val + (c-'a'+1) * p_pow) % m;
		p_pow = (p_pow * p) % m;
	}
	return hash_val;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s1;
		cin >> s1;
		
	}
	
	return 0;
}
