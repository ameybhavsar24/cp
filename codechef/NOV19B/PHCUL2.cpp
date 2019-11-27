#include <iostream>
#include <cmath>
#include <utility>
#include <vector>
#include <tuple>
#include <iomanip>
using namespace std;

#define ld long double
// #define pointDat tuple <long double, long long, long long>
#define pointData tuple<int,int,ld>
#define MIN(a, b) ((a) < (b) ? (a) : (b))

long double getDistance(int x1, int y1, int x2, int y2) {
	long double dis = sqrt( pow(x2-x1,2) + pow(y2-y1,2) );
	return dis;
}

// pointDat getMinDistance(int pc, int x, int y) {
// 	long long xi, yi;
// 	cin >> xi >> yi;
// 	long double minDistance = getDistance(x,y,xi,yi);
// 	long long xmin = xi, ymin = yi;

// 	for(int i=0; i<pc-1; i++) {
// 		cin >> xi >> yi;
// 		long double newDistance = getDistance(x,y,xi,yi);
// 		if(newDistance < minDistance) {
// 			minDistance = newDistance;
// 			xmin = xi;
// 			ymin = yi;
// 		}
// 	}
// 	pointDat data = make_tuple(minDistance, xmin, ymin);
// 	return data;
// }

ld getClosestPoint (vector<int> set, int x, int y) {
	int xi = set[0], yi = set[1];
	ld minDistance = getDistance(xi,yi,x,y);
	int setSize = set.size();
	for(int i=2; i<setSize; i+=2) {
		ld newDistance = getDistance(set[i],set[i+1],x,y);
		if(newDistance < minDistance) {
			minDistance = newDistance;
			xi = set[i];
			yi = set[i+1];
		}
	}
	pointData res =  make_tuple(xi,yi,minDistance);
	return minDistance;
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

		// approach1: cin in main()
		// pointDat dataN = getMinDistance(n,x,y);
		// distance += get<0>(dataN);
		// // cout << get<0>(dataN) << " " << get<1>(dataN) << " " <<  get<2>(dataN);
		// pointDat dataM = getMinDistance(m, get<1>(dataN), get<2>(dataN) );
		// distance += get<0>(dataM);

		// pointDat dataK = getMinDistance(k, get<1>(dataM), get<2>(dataM));		
		// distance += get<0>(dataK);



        // pointDat dataN = getMinDistance(n,x,y);
        // pointDat dataM = getMinDistance(m,x,y);


		// new method
		vector<int> np,mp,kp;

		for(int i=0;i<n*2;i++) {
			int x;
			cin >> x;
			np.push_back(x);
		}

		for(int i=0;i<m*2;i++) {
			int x;
			cin >> x;
			mp.push_back(x);
		}

		for(int i=0;i<k*2;i++) {
			int x;
			cin >> x;
			kp.push_back(x);
		}

		cout << "ShareChat to N{}: " << getClosestPoint(np,x,y) << "\n";
		cout << "ShareChat to M{}: " << getClosestPoint(mp,x,y) << "\n";
		cout << setprecision(12) << getClosestPoint(mp,x,y) + getClosestPoint(np,3,1) + getClosestPoint(kp,2,0) << "\n";
		
		// pointData dataToN = getClosestPoint(np, x ,y);
		// ld d_origin_to_N = get<2>(dataToN);

		// pointData dataToM = getClosestPoint(mp, x ,y);
		// ld d_origin_to_M = get<2>(dataToM);


		// vector<int> nextSet;
		// pointData current;
		// if(d_origin_to_M<d_origin_to_N) {
		// 	pointData current = dataToM;
		// 	vector<int> nextSet = np;
		// }
		// else {
		// 	pointData current = dataToN;
		// 	vector<int> nextSet = mp;
		// }

		// distance += get<2>(current);

		// // current contains the pointData closer to origin
		// // nextSet contains the next set to be searched for closest point

		// pointData interData = getClosestPoint(nextSet, get<0>(current), get<1>(current) );
		// // returns distance from 1st point to 2nd point
		// distance += get<2>(interData);

		// pointData finalPoint = getClosestPoint(mp, get<0>(interData), get<1>(interData) );
		// distance += get<2>(finalPoint);





		cout << setprecision(10) << distance << "\n";
	}

	return 0;
}
