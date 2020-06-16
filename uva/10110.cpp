// Author: Amey Bhavsar
// License: CC
// IDE: Geany
// Platform: 

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define rep(i,a,b) for(auto i=a;i<b;i++)
#define repD(i,a,b) for(auto i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);

char r1[] = {'q','w','e','r','t','y','u','i','o','p'};
char r2[] = {'a','s','d','f','g','h','j','k','l',';'};
char r3[] = {'z','x','c','v','b','n','m',',','.','/'};

int lsr(char x, char arr[]) {
	
	rep(i,0,10) {
		if (arr[i]==x) return i;
	}
	return -1;
}


int main() {

	ull x,px;
	int i=0;
	while(cin >> x) {
		
		if(i&1) cout << x*px << "\n";
		else px=x;
		i++;
	
	}
	
	return 0;
}




















