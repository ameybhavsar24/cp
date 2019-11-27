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
#define ll long long

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n,m,x;
        cin >> n >> m;
        vector< pair<ll, ll> > data;
        // 1
        // 7 3
        // 1 9 4 25 16 36 3
        // expected ans = 4-3 = 1
        // earlier gave ans = 4 - 1 = 3

        // data = 1,25,3 | 9,16,3 | 4,36

        for (int i = 0; i < n; ++i) {
            cin >> x;
            data.push_back(make_pair(x, i % m));
        }
        sort(data.begin(), data.end());
        for (int i=0; i < n; ++i) {
            cout << data[i].first << " ";
        }
        cout << "\n";
        ll diff = numeric_limits<ll>::max();
        ll xx=0,yy=0;
        ll newDiff;
        for (int i=0; i < m; ++i) {
            pair <ll,ll> x = data[i];
            for (int j=i+1; j < m; j++) {
                pair <ll,ll> y = data[j];
                if(x.second != y.second) {
                    newDiff = abs(x.first-y.first);
                    
                    if(newDiff < diff) {
                        diff = newDiff;
                        xx = x.first;
                        yy = y.first;
                    }
                }
            }

        }
        cout << diff << " " << xx << " " << yy << "\n";
    }
    return 0;
}