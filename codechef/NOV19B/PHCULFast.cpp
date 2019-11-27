#include <iostream>
#include <cmath>
#include <vector>
#include <utility>

using namespace std;

#define ull unsigned long long
#define MIN(a,b) ((a) < (b) ? (a) : (b))

int main() {

    ull t;
    cin >> t;
    while(t--) {
        ull x,y,n,m,k,p;
        cin >> x >> y >> n >> m >> k;
        vector<int> np,mp,kp;
        int i;
        for(i=0;i<n;++i) {
            cin >> p;
            np.push_back(p);
        }
        for(i=0;i<m;++i) {
            cin >> p;
            mp.push_back(p);
        }
        for(i=0;i<k;++i) {
            cin >> p;
            kp.push_back(p);
        }
        
    }
    return 0;
}