#include<bits/stdc++.h>
using namespace std;

bool wecare(string x) {
	bool care = true;
	for(int i=1; i<(int)x.size(); i++) {
		care &= isupper(x[i]);
	}
	return care;
}

int main() {
	string c;
	getline(cin,c);
	if(wecare(c)) {
		cout << "wecare\n";
		c[0] = toupper(c[0]);
		for (int i=1; i<(int)c.size(); i++) {
			c[i] = tolower(c[i]);
		}
		cout << c;
	}
	else {
		cout << c;
	}
	
	
	
	//cout << wecare("cAPS");
	//cout << islower('c') << "\n";
	
	return 0;
}
