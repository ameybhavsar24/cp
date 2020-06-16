#include "/home/amey/stdc++.h"
using namespace std;

typedef long long ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);    

int getPos(string s) {
	int l = s.size(), c = 0;
	rep(i,0,l) {
		if(s[i]=='+')
			c++;
		else if(s[i]=='-')
			c--;
	}
}

int main() {
	// your code goes here
	FASTIO

	string s1,s2;
	cin >> s1 >> s2;

	int p1 = getPos(s1);
	int p2 = getPos(s2);

	cout << setprecision(12);

	// cout << p1 << "  " << p2;
	if(p1==p2) {
		cout << 1.000000000000;
	}
	else {
		
	}

	return 0;
}