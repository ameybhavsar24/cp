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

vector<char> vowels = {'a','e','i','o','u'};


bool search(vector<char> arr, char x) {
	if(arr.find(x)!=arr.end()) return true;
	return false;
}

void solution() {
	string x;
	cin >> x;
	for(auto i=x.begin();i!=x.end();i++) {
		if(isupper(x[i])) x[i] = tolower(x[i]);
		//if(search(vowels,x[i])) 
	
	}
}
	


int main() {
	solution();	
	return 0;
}
