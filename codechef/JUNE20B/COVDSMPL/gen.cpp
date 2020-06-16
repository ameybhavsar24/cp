// Author: Amey Bhavsar
// IDE: Geany/Ubuntu

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define rep(i,a,b) for(auto i=a;i<b;i++)
#define repD(i,a,b) for(auto i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

// to be used with algorithms that processes a container Eg: find(all(c),42)
#define all(x) (x).begin(), (x).end() //Forward traversal
#define rall(x) (x).rbegin, (x).rend() //reverse traversal
// traversal function to avoid long template definition
#define tr(c,i) for(__typeof__((c)).begin() i = (c).begin(); i != (c).end(); i++)
//find version works for all containers. This is present in std namespace.
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define MOD 1000000007
//make sure to change MAXN according to constraints
#define MAXN 100001


int main(int argc, char* argv[]) {
	srand(clock());
	std::random_device rd;  //Will be used to obtain a seed for the random number engine
    std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
    std::uniform_real_distribution<> dis(0.0, 1.0);
	int n = atoi(argv[1]);
	double p = (double)atoi(argv[2])/100;
	rep(i,0,n) {
		rep(j,0,n) {
			if ((double)dis(gen) <= p) {
				cout << 1 << " ";
				continue;
			}
			cout << 0 << " ";
		}
		cout << "\n";
	}
	
	return 0;
}
