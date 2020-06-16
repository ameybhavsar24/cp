
#include <bits/stdc++.h>

using namespace std;

int main() {
	
	string m;
	cin >> m;
	
	char msg[] = "hello";
	int j=0;
	
	for (unsigned int i=0; i<m.size(); i++) {
		m[i] = tolower(m[i]);
	}
	
	
	
	for (unsigned int i=0; i<m.size(); i++) {
		if(m[i] == msg[j]) {
			j++;
		}
	}
	if(j>=5) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	
	return 0;
}
