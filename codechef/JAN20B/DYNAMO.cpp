// Author: Amey Bhavsar
// License: CC
// IDE: Geany
// Platform: Codechef

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


bool perfect(int x, int n) {
	if(x>0 && x<pow(10,n)) return true;
	return false;
}

int random (int n) {
	return rand() % (int(pow(10,n)+1));	
}

void solution() {
	//cout << "HelloWorld!\n";
	ll n,a,b,c,d,e,s;
	cin >> n;
	
	cin >> a;
	
	//s=2*pow(10,n);
	s = a + 2*pow(10,n);
	//s = 0.5*pow(10,n);
	//cout << s << endl;
	//a = random(n);
	s-=a;
	
	cin >> b;
	//b=random(n);
	s-=b;
	
	if(floor(s/2)<pow(10,n)) c = floor(s/2);
	else c = pow(10,n) - 1;
	cout << c << endl;
	s-=c;
	//cout << 1 << endl;
	//s--;
	
	cin >> d;
	//d = random(n);
	s-=d;
	
	e = s;
	cout << e << endl;
	
	//cout << "a: " << a << " b: "  << b << " c: " << c << " d: " << d << " e: " << e << " s: " << s;
	//if(perfect(a,n) && perfect(b,n) && perfect(c,n) && perfect(d,n) && perfect(e,n )) {cout << "perfect\n";}
	//else {cout << "not perfect numbers\n";}
	//cout << a+2*b+d+s << endl;
	int code;
	cin >> code;
	if(code == -1 ) exit(0);
}


int main() {
	
	ll t;
	cin >> t;	
	while(t--) {
		solution();
	}
	
	return 0;
}
