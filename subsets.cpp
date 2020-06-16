// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: ---

#include<bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	
	int n = 10;
	
	for (int b = 0; b < (1<<n); b++) {
		vector<int> subset;
		for (int i = 0; i < n; i++) {
			if (b&(1<<i)) {
				subset.push_back(i);
				cout << i << " ";
			}
		}
		cout << "\n";
	}

	
	return 0;
}
