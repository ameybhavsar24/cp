// STRHH.cpp

#include <iostream>
#include <string>

int main() {
int t;
cin >> t;
while(t) {

	string s;
	cin >> s;

	for(int i=0; i<s.length()/2; i++) {
		if(i%2==0) {
			cout<<s[i];
		}
	}


	t--;
}


}