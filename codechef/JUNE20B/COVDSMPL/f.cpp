#include <bits/stdc++.h>
using namespace std;

#define ll long long


struct Point {
	int x, y;
};

int n,p,x;

int rand(int a, int b) {
	return a + rand() % (b-a+1);
}



void solution() {
	cin >> n >> p;
	
	
	vector<vector<bool>> ans (n, vector<bool> (n,0));
	
	//~ask queries
	int totalCnt = 0;
	cout << 1 << " " << 1 << " " << 1 << " " << n << " " << n << endl;
	cin >> totalCnt;
	
	//~keep printing random matrices of 
	//~size	p	times
	//~5*5		 2	15
	//~4*4		 5	10
	//~3*3		10	8
	//~2*2		15	5
	
	
	int ms, times;
	switch(p) {
		case 2 : ms = 5; times = 15; break;
		case 5 : ms = 4; times = 10; break;
		case 10: ms = 3; times = 8; break;
		case 15: ms = 2; times = 8; break;
		
	}
	
	
	map<pair<int,int>,bool> data;
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=n; j++) {
			pair<int,int> p1;
			p1.first = i;
			p1.second = j;
			data[p1] = 1;
		}
	}
	
	srand((int)clock()*(int)clock());
	//~do not ask same matrices again
	map<pair<int,int>,bool> dlog;
	int fail = 0;
	while (times > 0 && fail <= 10) {
		//~pick x coordinate(horizontal) && y coordinate(vertical) in range(1,n-ms)
		pair<int,int> ul;
		ul.first = rand(1,n-ms+1);
		ul.second = rand(1,n-ms+1);
		if (!dlog[ul]) {
			dlog[ul] = 1;
			cout << 1 << " " << ul.first << " " << ul.second << "  " << (int)(ul.first + ms - 1)  << " " << (int)(ul.second + ms - 1) << endl;
			cin >> x;
			if (x == -1) {
				exit(0);
			}
			if (x == 0) {
				for (int i =ul.first; i <= (int) (ul.first+ms-1); i++) {
					for (int j = ul.second; j <= (int) (ul.second+ms-1); j++) {
						pair<int,int> p1;
						p1.first = i;
						p1.second = j;
						if (data.find(p1) == data.end()) {
							continue;
						}
						data.erase(p1);
					}
				}
			}
			else {
				fail++;
			}
		}
		else {
			continue;
		}
		times--;
	}
	
	
	//~ask query for each element individually left in data
	for (auto& e : data) {
		//~cout << 1 << " " << e.first.x << " " << e.first.y << " " << e.first.x << " " << e.first.y << endl;
		cout << 1 << " " << e.first.first << " " << e.first.second << " " << e.first.first << " " << e.first.second << endl;
		if (x == -1) {
			exit(0);
		}
		cin >> x;
		if (x) {
			//~ans[e.first.x-1][e.first.y-1] = 1;
			ans[e.first.first-1][e.first.second-1] = 1;
		}
	}
	
	
	
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			cout << ans[i][j] << " ";
		}
		cout << "\n";
	}
	
	
	cin >> x;
	
	if (x == -1) {
		exit(0);
	}
	
	
	
	
	
	//~print matrix
	
	
}


int main() {
	int t;
	cin >> t;
	while (t--) {
		solution();	
	}
	return 0;
}
