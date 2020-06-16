#include <bits/stdc++.h>
using namespace std;

int main() {
	int i,j;
	bool go = true;
	for(i=0;i<5 && go;i++) {
		for(j=0;j<5 && go;j++) {
			int x;
			cin >> x;
			if(x==1) {
				go=false;
			}
		}
	}
	i--;j--;
	cout << abs(2-i)+abs(2-j);
	

	//cout << i << " " << j;
	
	
	
	return 0;
}
