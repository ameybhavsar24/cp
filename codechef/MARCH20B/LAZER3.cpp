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

float interX(float px1, float py1, float px2, float py2, float y) {
	//here x1,y1 is i'th point and x2,y2 is (i+1)'th point
	//and y is the ordinate of the laser
	return (((y-py1)*(px2-px1))/(py2-py1)) + px1;
}



bool isIntersection(float lx1, float lx2, float y, float px1, float py1, float px2, float py2) {
	ll pymax=max(py1,py2),pymin=min(py1,py2);
	
	//check overlapping with laser
	
	if(py1 == py2 && py1 == y && lx1<px2 && lx2 > px1) {
		//this was the condition for overlapping
		return true;
	}
	
	if(y<=pymax && y>=pymin) {
		float intersectionX = interX(px1,py1,px2,py2,y);
		if(intersectionX >= lx1 && intersectionX <= lx2) {
			
			if (lx2 == px1 && y==py1) {
				return false;
			}
			else if (lx1 == px2 && y == py2) {
				return false;
			}
			else {
				return true;
			}
			
			//if (!(lx2==px1 && y == py1  && lx1 == px2 && y == py2))
				//return true;
			
		}
	}
	return false;
}


void solution() {
	//cout << "HelloWorld!\n";
	
	ll n,q;
	cin >> n >> q;
	ll a[n];
	rep (i,0,n) cin >> a[i];
	
	float lx1, lx2, y;
	rep(i,0,q) {
		ll interCount = 0;
		cin >> lx1 >> lx2 >> y;
		rep(j,0,n-1) {
			if(isIntersection (lx1, lx2, y, j+1, a[j], j+2, a[j+1])) interCount++;			
		}
		cout << interCount << "\n";
	}

}


int main() {
	FASTIO
	ll t;
	cin >> t;	
	while(t--) {
		solution();
	}
	
	return 0;
}
