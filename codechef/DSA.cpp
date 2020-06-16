// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: Codechef DSA

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef pair<ll, ll> pll;
typedef vector<pll> vll;

#define bpc __builtin_popcount
#define bpcl __builtin_popcountll
#define bpr __builtin_parity
#define bprl __builtin_parityll
#define ctz __builtin_ctz
#define ctzl __builtin_ctzll
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
//#define MAXN 
void solution() {
    string x;
    cin >> x;
    int xsze = x.size();
    string ans1 = "", ans2 = "";
    map<char,int> data;
    rep(i,0,xsze)  data[x[i]] ++;
    int mid;
    char midval;
    if (xsze&1) {
        mid = xsze/2 + 1;
        tr(data,i) {
            if (i->second & 1) {
                midval = i->ff;
            }
        }
    }
    else {
        mid = xsze/2;
    }
    auto iter = data.begin();
    while(iter != data.end() && iter->ss > 0) {
        if (iter->ss > 1) {
            ans1 += iter->ff;            
            ans2 += iter->ff;
            iter->ss -=2;
            if (iter->ss <= 0) {
                iter++;
            }
		}
		else if(iter->ff == midval) {
			iter++;
		}
    }
    reverse(all(ans2));
    if (xsze & 1) {
		cout << ans1 + midval + ans2 << "\n";		
	}
	else {
		cout << ans1 + ans2<< "\n";
	}

    // tr(data,i) {
    //     cout << i->ff << " " << i->ss << "\n";
    // }
    // cout << midval << "\n";

}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
    solution();
	return 0;
}
