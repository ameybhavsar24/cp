#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solution() {
	string s;
	cin >> s;
	int n = s.size();
	int ans = 0;
	int op1 = 0;
	for (int l = 0; l < n; l++) {
		if (s[l] == '<') {
			op1++;
		}
		else {
			if (op1 == 0) {
				break;
			}
			op1--;	
		}
		if (op1 == 0) {
			ans = l+1;
		}
	}
	cout << ans << "\n";
	
	
	
}


int main() {	
	int t;
	cin >> t;
	while (t--) {
		solution();
	}
	
	return 0;
}
