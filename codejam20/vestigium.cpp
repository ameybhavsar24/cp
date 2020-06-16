// Author: Amey Bhavsar
// License: CC
// IDE: Geany
// Platform: 

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define rep(i,a,b) for(auto i=a;i<b;i++)
#define repD(i,a,b) for(auto i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);


void solution(int test) {
	//cout << "HelloWorld!\n";
	
	ll n;
	cin >> n;
	
	ll a[n][n];
	ll trace = 0;
	
	vector < unordered_map<int,int> > rows;
	vector < unordered_map<int,int> > cols;
	
	rep(i,0,n) {
		rep(j,0,n) {
			cin >> a[i][j];
			if (i == j) trace += a[i][j];
		}
	}
	
	
	ll rowR = 0, colR = 0;
	
	rep(i,0,n) {
		unordered_map<int,int> row;
		rep(j,0,n) {
			
			
			ll currR = a[i][j];
			if (row[currR] >= 1) {
				rowR++;
				break;			
			}
			
			row[currR]++;
		}
	}
	

	
	rep(i,0,n) {
		unordered_map<int,int> col;
		rep(j,0,n) {
			
			ll currC = a[j][i];
			
			if (col[currC] >=1) {
				colR ++;
				break;
			}
			col[currC]++;
		}
	}
	
	cout << "Case #" << test << ": " << trace <<  " " << rowR << " " << colR << "\n";
	
}


int main() {
	
	ll t;
	cin >> t;	
	rep(i,1,t+1) solution(i);
	
	return 0;
}
