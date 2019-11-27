// SIGNTURE
// ameybhavsar
#include <bits/stdc++.h>
using namespace std;

bool getStat(vector< vector<int> > sigA, vector< vector<int> > sigB, int n, int m) {
	bool canShift = true;
	/*for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			
		}
	}*/
	int dr=1,dc=1;
	while(canShift) {
		for(int i=0; i<n; i++) {
			for(int j=0; j<m; j++) {
				if(i+dr<n && i+dr>=0 && j+dc >=0 && j+dc < m) {
					canShift &= sigA[i][j]==sigB[i+dr][j+dc];
				}
				
			}
		}
	}
	
	
	
	return canShift;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
		int n,m;
		cin >> n >>m;
		vector< vector <int> > sigA;
		for(int i=0; i<n; i++) {
			vector<int> x;
			for(int j=0;j<m;j++) {
				int y;
				cin >> y;
				x.push_back(y);
			}
			sigA.push_back(x);
		}
		vector< vector <int> > sigB;
		for(int i=0; i<n; i++) {
			vector<int> x;
			for(int j=0;j<m;j++) {
				int y;
				cin >> y;
				x.push_back(y);
			}
			sigA.push_back(x);
		}
		// bool canShift = getStat(sigA,sigB);
		if(sigA==sigB) {
			cout << 0;
		}
		else {
			// there is some error or some shifting needed
			// check if it can be shifted
			bool canShift = getStat(sigA,sigB,n,m);
		}
		
		/*
		
		3 3
1 0 0
0 1 0
0 0 0

0 0 0
0 1 0
0 0 1
		
		*/
		
		
	}
	return 0;
}