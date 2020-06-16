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

//~int bs (vector<int>& s1, int v) {
	//~int l=0, r=s1.size()-1;
	//~int mid = (l+r)/2;
	//~while (l<=r) {
		//~if (s1[mid] == v) {
			//~return mid;
		//~}
		//~else if (s1[mid] > v) {
			//~r = mid-1;
		//~}
		//~else {
			//~l = mid + 1;
		//~}
	//~}
	//~return -1;
//~}

int n,p,x;
vector<vector<int>> ans;
void solution() {
	srand(clock());
	cin >> n >> p;
	ans.assign(n, vector<int> (n,0));
	
	//~fill s1
	vector<int> s1(n*n);
	rep(i,0,n*n) {
		s1[i] = i;
	}
	
	//~get totalCnt
	cout << 1 << " " << 1 << " " << 1 << " " << n << " " << n << endl;
	cin >> x;
	if (x == -1)
		exit(0);
	int totalCnt = x;
	if (totalCnt == 0) {
		for (auto& r : ans) {
			for (auto& c : r) {
				cout << c << " ";
			}
			cout << "\n";
		}
		cout << endl;
		cin >> x;
		if (x == -1)
			exit(0);
		return;
	}
	
	int a = 1, b = n/p;
	
	//~reduce search area
	//~ask random submatrices queries
	while ((int) s1.size() > (totalCnt*5)) {
		int r = rand(a,b);
		int c = rand(a,b);
		int xc = rand(1,n-c);
		int yc = rand(1,n-r);
		
		cout << 1 << " " << yc << " " << xc << " " << yc+r << " " << xc+c << endl;
		cin >> x;
		if (x == 0) {
			for (int i=xc; i<=xc+c; i++) {
				for (int j=yc; j<=yc+r; j++) {
					int val =(i-1)*n + (j-1);
					int ind = lower_bound(all(s1), val) - s1.begin();
					if (s1[ind] == val)
						s1.erase(s1.begin()+ind);
				}
			}
		}
		b = max(1,(int) (b*0.95));
		cout << (int) s1.size() << "\n";
	}
	
	
	while (totalCnt > 0) {
		int val = s1[rand(0,s1.size()-1)];
		int r = val/n + 1;
		int c = val%n + 1;
		
		cout << 1 << " " << r << " " << c << " " << r << " " << c << endl;
		cin >> x;
		if (x) {
			ans[r-1][c-1] = 1;
			totalCnt--;
		}
	}
	
	
	for (auto& row : ans) {
		for (auto& el : row) {
			cout << el << " ";
		}
		cout << "\n";
	}
	cout << endl;
		
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
