/*

c1 x=10,y=10 & r=20
xMax(),xMin(),yMax(),yMin()
xMax(c1) = 30; xMin(c1) = -10
xMax(c) {
	return c.x+c.r // 10+20 = 30
}
xMin(c) {
	return c.x-c.r // 10-20 = -10
}
yMax(c) {
	return c.y+c.r // 10+20 = 30
}
yMin(c) {
	return c.y-c.r // 10-20 = -10
}

l1 x1=-100,y1=20; x2=0,y2=0
xMin(l) {
	return min(l.x1,l.x2) // for l1, returns -100
}
yMin(l) {
	return min(l.y1,l.y2) // for l2, return 0
}

xMax(l) {
	return max(l.x1,l.x2) // for l1, returns -100
}
yMax(l) {
	return max(l.y1,l.y2) // for l2, return 0
}

p1 x=3,y=3


*/
#include "/home/amey/stdc++.h"
using namespace std;

typedef long long ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define pb push_back
#define ff first
#define ss second
#define vi vector<int>



int main() {
	// your code goes here


	ll t;
	cin >> t;
	while(t--) {
		ll n;
		cin >> n;
		vi maxX,minX,maxY,minY;
		rep(i,0,n) {
			char ch;
			cin >> ch;
			// cout << ch;
			ll x,y,r,x1,x2,y1,y2;
			switch(ch) {
				case 'c':
					
					cin >> x >> y >> r;
					maxX.pb(x+r);
					minX.pb(x-r);
					maxY.pb(y+r);
					minY.pb(y-r);
					break;
				case 'p':
					
					cin >> x >> y;
					maxX.pb(x);
					minX.pb(x);
					maxY.pb(y);
					minY.pb(y);
					break;
				case 'l':
					
					cin >> x1 >> y1 >> x2 >> y2;
					maxX.pb(max(x1,x2));
					minX.pb(min(x1,x2));
					maxY.pb(max(y1,y2));
					minY.pb(min(y1,y2));
					break;

				default : cout << "Unknown shape\n";
			}
		}
		sort(minX.begin(), minX.end());
		sort(minY.begin(), minY.end());
		sort(maxX.begin(), maxX.end(), greater<ll>());
		sort(maxY.begin(), maxY.end(), greater<ll>());
		cout << minX[0] << " " << minY[0] << " " << maxX[0] << " " << maxY[0] << "\n";
		// rep(i,0,minX.size()) {
		// 	cout << minY[i] << " ";
		// }
		// cout << "\n";

	}

	return 0;
}