// second
#include "/home/amey/stdc++.h" // replace with <bits/stdc++.h> online

using namespace std;

int main() {
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int m;
		cin >> m;
		string s;
		cin >> s;
		bitset<64>b(s);
		cout << b << "\n" << (b<<(m-1));
	}
	return 0;
}
