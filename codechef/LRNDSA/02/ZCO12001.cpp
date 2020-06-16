#include <bits/stdc++.h>
using namespace std;

#define ll long long
int n;



int main() {	
	cin >> n;
	vector<int> s(n);
	for (auto& e:s)
		cin >> e;
	
	int d = 0, dp = 0, maxD = 0;
	for (int i=0; i<n; i++) {
		if (s[i] == 1) {
			d++;
		}
		else {
			d--;
		}
		if (d > maxD) {
			dp = i+1;
			maxD = d;
		}
	}
	
	cout << maxD << " " << dp << "\n";
	d = 0;dp = 0;maxD = 0;
	int lp = -1;
	for (int i=0; i<n; i++) {
		if (s[i] == 1) {
			d++;
		}
		else {
			d--;
		}
		
		if (d == 0) {
			if (lp == -1) {
				lp = i+1;
				maxD = max(maxD, lp);
				dp = 0;
				continue;
			}
			if (i+1-lp > maxD) {
				maxD = i-lp+1;
				dp = i+1;
				lp = i+maxD;
			}
			
		}
		
	}
	
	cout << maxD <<"  " <<  dp << "\n";
	
	
	
	
	return 0;
}
