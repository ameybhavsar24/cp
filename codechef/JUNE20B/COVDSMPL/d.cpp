// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: ---

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define rep(i,a,b) for(auto i=a;i<b;i++)
#define repD(i,a,b) for(auto i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

// to be used with algorithms that processes a container Eg: find(all(c),42)
#define all(x) (x).begin(), (x).end() //Forward traversal
#define rall(x) (x).rbegin, (x).rend() //reverse traversal
// traversal function to avoid long template definition
#define tr(c,i) for(__typeof__((c)).begin() i = (c).begin(); i != (c).end(); i++)
//find version works for all containers. This is present in std namespace.
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define MOD 1000000007
//make sure to change MAXN according to constraints
#define MAXN 100001

int rand(int a, int b) {
    return a + rand() % (b - a + 1);
}

int n,p,x;
vector<vector<int>> a;
void solution() {
	srand(clock());
	cin >> n >> p;
	a.assign(n, vector<int> (n,0));
	vector<int> rowCnt(n,0);
	vector<int> colCnt(n,0);
	
	cout << 1 << " " << 1 << " " << 1 << " " << n << " " << n << endl;
	cin >> x;
	int totalCnt = x;
	if (totalCnt == 0) {
		for (auto& r : a) {
			for (auto& c : r) {
				cout << c << " ";
			}
			cout << "\n";
		}
		cout << endl;
		return;
	}
	
	rep(i,1,n+1) {
		cout << 1 << " " << i << " " << 1 << " " << i << " " << n << endl;
		cin >> rowCnt[i-1];
	}
	rep(i,1,n+1) {
		cout << 1 << " " << 1 << " " << i << " " << n << " " << i << endl;
		cin >> colCnt[i-1];
	}
	vector<int> s1(n*n);
	rep(i,0,n*n) {
		s1[i] = i;
	}
	while (totalCnt > 0 && (int)s1.size() > 0) {
		//~randomly query any of the n^2 element
		int ind = 0, val;
		if (s1.size() != 1) {
			ind = rand(0, (int) s1.size()-1);
			val = s1[ind];
		}
		else {
			val = s1[0];
			ind = 0;
		}		
		s1.erase(s1.begin() + ind);
		int r = val/n + 1;
		int c = val%n + 1;
		cout << 1 << " " << r << " " << c << " " << r << " " << c << endl;
		cin >> x;
		if (x) {
			a[r-1][c-1] = 1;
			rowCnt[r-1]--;
			colCnt[r-1]--;
			totalCnt--;
		}
		
	}
	
	
	
	
	cout << 2 << endl;
	for (auto& e:a) {
		for (auto& c:e) {
			cout << c << " ";
		}
		cout << "\n";
	}
	
	cin >> x;
	if (x == -1)
		exit(0);
	
	
	
}

int main() {
	//~ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin >> t;	
	while(t--) {
		solution();
	}
	return 0;
}






//~1
//~4 2
//~1 1 1 4 4
//~6
//~1 1 1 1 4
//~2
//~1 2 1 2 4
//~2
//~1 3 1 3 4
//~1
//~1 4 1 4 4
//~1
//~1 1 1 4 1
//~2
//~1 1 2 4 2
//~0
//~1 1 3 4 3
//~2
//~1 1 4 4 4
//~2
//~13 4 3 4
//~0
//~13 1 3 1
//~0
//~11 4 1 4
//~1









