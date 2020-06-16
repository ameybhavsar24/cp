// #include "/home/amey/stdc++.h"
#include <bits/stdc++.h>
// #include <iostream>
// #include <vector>
// #include <cmath>
using namespace std;

typedef long long ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define pb push_back




int runLongestIndex(string setofletters){ 
   	int ctr = 1;
    int output = 0;
    int j=0;
    for(int i=0; i<setofletters.length()-1;i++){
        j=i;
        while(i <setofletters.length()-1 && setofletters.charAt(i)==setofletters.charAt(i+1)){
            i++;
            ctr++;
        }
        if(ctr>output){
            output=j;
        }
        ctr = 1;
    }
    return output;
}

int main() {
	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL);


	ll t;
	cin >> t;
	while(t--) {
		ll n;
		cin >> n;
		vector<ll> trees;
		rep(i,0,n) {
			ll x;
			cin >> x;
			trees.pb(x);
		}

		sort(trees.begin(), trees.end());

	// rep(i,0,n) {
	// 		cout << trees[i] << " "; 
	// 	}
	// 	cout << "\n";

		// 2 _ 4 _ _ 7
		ll minn = 0;
		// if(trees[1]-trees[0] > 1) {
		// 	minn++;
		// 	trees.insert(trees.begin()+1, (trees[1]+trees[0])/2);
		// 	n++;
		// }

	// rep(i,0,n) {
	// 		cout << trees[i] << " "; 
	// 	}
	// 	cout << "\n";




		rep(i,0,trees.size()) {
			ll curr = trees[i];
			if(!(trees[i-1]==curr-1 || trees[i+1]==curr+1)) {
				trees.insert(trees.begin()+i+1,curr+1);
				minn++;
			}
		}

		n=trees.size();
		// if(trees[n-1]-1 != trees[n-2]) {
		// 	trees.insert(trees.begin()+n-1,trees[n-1]-1);
		// 	minn++;
		// }

		rep(i,0,trees.size()) {
			cout << trees[i] << " "; 
		}
		cout << "\n";
		cout << minn << "\n";

	}
	return 0;
}