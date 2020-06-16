#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct point {
	double x,y;
};

int main() {
	
	vector<pair<point,point>> rect;
	vector<point> points;
	char ch;
	while (1) {
		cin >> ch;
		if (ch == 'r') {
			point left, right;
			cin >> left.x >> left.y >> right.x >> right.y;
			rect.emplace_back(make_pair(left, right));
			continue;
		}
		if (ch == '*') {
			break;
		}
	}
	
	point p;
	while (1) {
		cin >> p.x >> p.y;
		if (p.x == 9999.9 && p.y == 9999.9) {
			break;
		}
		//~points.emplace_back(p);
		points.push_back(p);
	}
	
	
	//~for (auto & pt : rect) {
		//~cout << pt.first.x << " " << pt.first.y << " " << pt.second.x << " " << pt.second.y << "\n";
	//~}
	
	vector<int> rp[(int)points.size()+1];
	for (int i = 0; i < (int) points.size(); i++) {
		for (int j = 0; j < (int) rect.size(); j++) {
			if (points[i].x >= rect[j].first.x && points[i].y <= rect[j].first.y && points[i].x <= rect[j].second.x && points[i].y >= rect[j].second.y) {
				//~rp[i+1].emplace_back(j+1);
				rp[i+1].push_back(j+1);
			}
		}
	}
	
	for (int i = 1; i <= (int) points.size(); i++) {
		//~cout << i << ": ";
		if (rp[i].size() == 0) {
			cout << "Point " << i << " is not contained in any figure\n";
			continue;
		}
		
		for (int j = 0; j < (int) rp[i].size(); j++) {
			//~cout << rp[i][j] << " ";
			cout << "Point " << i << " is contained in figure " << rp[i][j] <<"\n";
		}
	}
	
	
	
	return 0;
}
