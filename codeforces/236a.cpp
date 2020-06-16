//236a.cpp
#include<bits/stdc++.h>

using namespace std;

int main() {
	
	string x;
	map<char,int> chars;
	cin >> x;
	
	unordered_map<char, int> m;
	
	for (int i=0; i<x.length(); i++) {
		m[x[i]]++;
	}
	
	if(m.size() & 1) {
		//odd
		cout << "IGNORE HIM!";
	}
	else {
		cout << "CHAT WITH HER!";
	}
    
	return 0;	
}
