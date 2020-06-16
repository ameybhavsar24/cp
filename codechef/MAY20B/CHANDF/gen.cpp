// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: ---

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef pair<ll, ll> pll;
typedef vector<pll> vll;

ll rand(ll a, ll b) {
    return a + rand() % (b - a + 1);
}
ll t, x, y, l, r, LIMIT, CASES;
int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	srand(atoi(argv[1])); // atoi(s) converts an array of chars to int
	CASES = (ll)atoi(argv[2]);
	LIMIT = (ll)atoi(argv[3]);
	//~scanf("%lld", &LIMIT);
	t = rand(0,10);
	printf("%lld\n", t);
	while (t--) {
	x = rand(0,LIMIT);
	y = rand(0,LIMIT);
	r = rand(0,LIMIT);
	l = rand(0,r);
	printf("%lld %lld %lld %lld\n", x, y, l, r);
}
	
	return 0;
}


