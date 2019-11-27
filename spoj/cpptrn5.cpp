#include <iostream>

using namespace std;
int main() {
	int t;
	cin >> t;
	
	while(t--) {
		//task
		int l,c,s;
		cin >> l >> c >> s;
		// l = l*3 + 1;
		// c = c*3 + 1;
		// calculate final pattern's rows and cols
		l +=l*s + 1;
		c +=c*s + 1;
		for(int i=0; i<l; i++) {
			for(int j=0; j<c; j++) {
				if(i==0 || j==0 || i==l-1 || j==c-1) {
					cout << "*";
				}
				else if(i%3!=0) {
					if((i-1)%3==0)
				}
				else {
					cout << ".";
				}
			}
			cout << "\n";
		}

		cout<<"\n\n";
	}
	
	return 0;
}

