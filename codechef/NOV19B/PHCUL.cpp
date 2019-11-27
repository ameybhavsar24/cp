#include <iostream>
#include <cmath>
#include <utility>
#include <vector>
#include <tuple>
#include <iomanip>
using namespace std;


#define pointDat tuple <long double, long long, long long>
#define MIN(a, b) ((a) < (b) ? (a) : (b))

long double getDistance(int x1, int y1, int x2, int y2) {
	long double dis = sqrt( pow(x2-x1,2) + pow(y2-y1,2) );
	return dis;
}

pointDat getMinDistance(int pc, int x, int y) {
	long long xi, yi;
	cin >> xi >> yi;
	long double minDistance = getDistance(x,y,xi,yi);
	long long xmin = xi, ymin = yi;

	for(int i=0; i<pc-1; i++) {
		cin >> xi >> yi;
		long double newDistance = getDistance(x,y,xi,yi);
		if(newDistance < minDistance) {
			minDistance = newDistance;
			xmin = xi;
			ymin = yi;
		}
	}
	pointDat data = make_tuple(minDistance, xmin, ymin);
	return data;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int x,y;
		cin >> x >> y;
		int n,m,k;
		cin >> n >> m >> k;
		//vector< pair <int,int> > np, mp, kp;
		//vector< pair <int, int> > pairs; 
		//pairs.push_back(make_pair(3,4));
		long double distance = 0;
		//getMinDistance(int number_of_points) will take 
		//input of points and return the minimum distance value

		// cout << getDistance(0,0,1,1);
		

		// TODO : Decide whether to go to n-set first or m-set such that distance is minimum
		pointDat dataN = getMinDistance(n,x,y);
		distance += get<0>(dataN);
		// cout << get<0>(dataN) << " " << get<1>(dataN) << " " <<  get<2>(dataN);
		pointDat dataM = getMinDistance(m, get<1>(dataN), get<2>(dataN) );
		distance += get<0>(dataM);

		pointDat dataK = getMinDistance(k, get<1>(dataM), get<2>(dataM));		
		distance += get<0>(dataK);
		cout << setprecision(10) << distance << "\n";
	}

	return 0;
}
