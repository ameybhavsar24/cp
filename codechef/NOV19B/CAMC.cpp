#include <iostream>
#include <vector>
#include <utility>
#include <tuple>
#include <algorithm>
#include <limits>
#include <cmath>

using namespace std;

// macros
#define MIN(a, b) ((a) < (b) ? (a) : (b))


int main() {

	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		vector< vector<int> > nums;
		for (int i=0; i<m; i++) {
			vector <int> null;
			nums.push_back(null);
		}
		for (int i=0; i<n; i++) {
			int x;
			cin >> x;
			nums[i%m].push_back(x);
			// cout << i%m << "=>" << x << " ";
		}
		cout << "\n";
		// use this to output values
		for (int i = 0; i < m; i++)
		{
			for(int j=0; j < nums[i].size(); j++) {
				cout << "i: " << i << "=>" << nums[i][j];
			}
			cout << "\n";
		}
		for (int i = 0; i < m; i++) {
			sort( nums[i].begin(), nums[i].end() );
		}

		
		
		// get max and minimum values for all colours
		vector < pair <int, int> > maxAndmins;
		for (int i = 0; i < m; i++) {
			pair <int, int> x;
			x.first = *nums[i].begin();
			x.second = *(nums[i].end()-1);
			// cout << "Pair " << i << ": " << x.first << "," << x.second << "\n";
			maxAndmins.push_back(x);
		}

		int l = maxAndmins.size();
		int minDifference = numeric_limits<int>::max();
		for(int i=0; i<l; i++) {
			pair <int, int> x = maxAndmins[i];
			for(int j=i+1; j<l; j++) {
				pair <int, int> y = maxAndmins[j];
				cout << x.first << "," << x.second << " & " << y.first << "," <<  y.second;
				// calculate differences with both elements of j^th pair and i^th pair
				int newDiff11, newDiff12, newDiff21, newDiff22, newSmallest;
				newDiff11 = abs(x.first - y.first);
				newDiff12 = abs(x.first - y.second);
				newDiff21 = abs(x.second - y.first);
				newDiff22 = abs(x.second - y.second);

				cout << newDiff11 << " " << newDiff12 << " " <<  newDiff21 << " " << newDiff22;
				newSmallest = MIN(newDiff11, MIN(newDiff12, MIN(newDiff21, newDiff22) ) );
				cout << " " <<  newSmallest;
				if(newSmallest<minDifference) {
					minDifference = newSmallest;
				}
				cout << minDifference;
				cout << "\n";

			}
		}
		

		// cout << "\nminDifference: " << minDifference;
		// cout << "\n";
		cout << minDifference << "\n";

	}

	return 0;
}