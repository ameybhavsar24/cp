// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: ---

#include<bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	
	int n = 3;
	vector<int> permutation;
	for (int i = 0; i < n; i++) {
		permutation.push_back(i);
	}
	do {
		// process permutation
		for (auto x : permutation) cout << x;
		cout << "\n";
	} while (next_permutation(permutation.begin(),permutation.end()));

	
	return 0;
}
