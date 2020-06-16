// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: Google Code Jam 2020

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


void solution(int test) {
	//cout << "HelloWorld!\n";
	
	
	int n;
	cin >> n;
	
	
	vector< pair<int,int> > times;
	vector< pair<int,int> > locs;
	
	
	//locs[i].first is same as times[i].first
	//locs[i].second is initially just 1,2,3...
	
	
	rep(i,0,n) {
		int x,y;
		cin >> x >> y;		
		times.pb(mp(x,y));
		locs.pb(mp(x,i));
	}
	
	
	sort(times.begin(), times.end());
	sort(locs.begin(), locs.end());
	
	int ce, je;
	bool cWorking = false, jWorking = false;
	
	string ans = "";
	
	
	//if (n == 2) {
		//ans = "CJ";
	//}
	//else {
		
		//rep(i,0,n) {
			//cout << "from:" << times[i].ff << " to:" << times[i].ss << "\n";
		//}
		
		ce = times[0].ss;
		cWorking = true;
		if(times[1].ss >= ce) {
			ans += "CC";
			ce = times[1].ss;
			jWorking = false;
		}
		else {
			ans += "CJ";
			je = times[1].ss;
			jWorking = true;
		}
		
		rep(i,2,n) {
			//cout << times[i].ff << " " << ce << " " << je << "\n";
			if (!jWorking) {
				je = times[i].ss;
				jWorking = true;
				ans += "J";
			}
			else {
					
				cWorking = times[i].ff < ce;
				jWorking = times[i].ff < je;
				//cout << cWorking << " " << jWorking << "\n";
				
				if (cWorking && jWorking) {
					ans = "IMPOSSIBLE";
					break;
				}
				else if (!cWorking) {
					ce = times[i].ss;
					ans += "C";
				}
				else {
					je = times[i].ss;
					ans += "J";
				}
			}
			
			
		}
		
	//}	
	
	
	if (ans != "IMPOSSIBLE") {	
		string nAns = "";

		ll index = 0;
		while(index < n) {
			ll el = 0;
			while (locs[el].ss != index) el++;
			
			nAns += ans[el];
			
			index++;
		}
		cout << "Case #" << test << ": " << nAns << "\n";
	}
	else {
		cout << "Case #" << test << ": " << ans << "\n";
	}	
	
}





int main() {
	FASTIO
	ll t;
	cin >> t;	
	rep(i,1,t+1) solution(i);
	
	return 0;
}
