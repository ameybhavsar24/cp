// Author: Amey Bhavsar
// IDE: Geany/Ubuntu
// Platform: Codechef/MARCH20B NBOTSV1

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
#define MOD 1000000007

//make sure to change MAXN according to constraints
#define MAXN 514

//~GLOBALS
int n, f, k, t[MAXN][MAXN], s = 0, dir, rc, alive = 0;
float mxHit = -1.0;
float hor[MAXN][4], vert[MAXN][4];
vector< pair<char,int> > shots;
//~GLOBALS_END

//~hor[i][0] = L_AVG
//~hor[i][0] = R_AVG
//~hor[i][0] = L_CNT
//~hor[i][0] = R_CNT


void chooseDirection() {
	mxHit = -1.0;
	rep(i,1,n+1) {
		if (hor[i][0] > mxHit) {
			mxHit = hor[i][0];
			dir = 0;
			rc = i;
		}
		if (hor[i][1] > mxHit) {
			mxHit = hor[i][1];
			dir = 1;
			rc = i;
		}
		if (vert[i][0] > mxHit) {
			mxHit = vert[i][0];
			dir = 2;
			rc = i;
		}
		if (vert[i][1] > mxHit) {
			mxHit = vert[i][1];
			dir = 3;
			rc = i;
		}
	}
	
}

void modify (int row, int col) {
	float tL = hor[row][0]*hor[row][2], tR = hor[row][1]*hor[row][3], tU = vert[col][0]*vert[col][2], tD = vert[col][1]*vert[col][3];
	tL=max((float)0,tL-t[row][col]);
	tR=max((float)0,tR-t[row][col]);
	tU=max((float)0,tU-t[row][col]);
	tD=max((float)0,tD-t[row][col]);
	hor[row][2]--;
	hor[row][3]--;
	vert[col][2]--;
	vert[col][3]--;
	
	
	hor[row][0] = tL/max((float)1,hor[row][2]);
	hor[row][1] = tR/max((float)1,hor[row][3]);
	
	vert[col][0] = tU/max((float)1,vert[col][2]);
	vert[col][1] = tD/max((float)1,vert[col][3]);
}

void addShot(int direction, int para) {
	//~false initialised due to warning
	char dirch = 'L';
	switch(direction) {
		case 0:dirch='L';break;
		case 1:dirch='R';break;
		case 2:dirch='U';break;
		case 3:dirch='D';break;
	}
	//~cout << dirch << " " << para << "\n";
	shots.pb(mp(dirch,para));
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	cin >> n >> f;
	
	//~n*n alive cells
	alive = n*n;
	
	rep(i,1,n+1)
		rep(j,1,n+1)
			cin >> t[i][j];
			
	cin >> k;
	
	
	
	//~iterate over rows
	//~and store average damage
	//~for all horizontal shots possible
	bool left,right;
	rep(i,1,n+1) {
		left = true;
		right = true;	
		int ltt = 0, lcnt = 0, rtt = 0, rcnt = 0;
		rep(j,1,n+1) {
			if (ltt + t[i][j] <= f && left) {
				ltt += t[i][j];
				lcnt++;
			}
			else {
				left = false;
			}
			if (rtt + t[i][n-j+1] <= f && right) {
				//~if (i == 1) {
					//~cout << "R1: " << n-j+1 << " ";
				//~}
				rtt += t[i][n-j+1];
				rcnt++;
			}
			else {
				right = false;
			}
		}
		hor[i][0] = (float)ltt/lcnt;
		hor[i][1] = (float)rtt/rcnt;
		hor[i][2] = lcnt;
		hor[i][3] = rcnt;
	}
	
	//~iterate over cols
	//~and store average damage
	//~for all vertical shots possible
	bool up,down;
	rep(i,1,n+1) {
		up = true;
		down = true;
		int utt = 0, ucnt = 0, dtt = 0, dcnt = 0;
		rep(j,1,n+1) {
			if (utt + t[j][i] <=f && up) {
				utt += t[j][i];
				ucnt++;
			}
			else {
				up = false;
			}
			if (dtt + t[n-j+1][i] <= f && down) {
				dtt += t[n-j+1][i];
				dcnt++;
			}
			else {
				down = false;
			}
		}
		vert[i][0] = (float) utt/ucnt;
		vert[i][1] = (float) dtt/dcnt;
		vert[i][2] = ucnt;
		vert[i][3] = dcnt;
	}
	
	
	//~del this
	//~cout << "H\n";
	//~rep(i,1,n+1) {
		//~cout << hor[i][0] << " " << hor[i][1] << "\n";
	//~}
	//~cout << "V\n";
	//~rep(i,1,n+1) {
		//~cout << vert[i][0] << " ";
	//~}
	//~cout << "\n";
	//~rep(i,1,n+1) {
		//~cout << vert[i][1] << " ";
	//~}
	//~cout << "\n\n\n";
	
	
	
	//~perform
	while (alive > 0 && s+1 < k) {
		//~dir
		//~0 - left
		//~1 - right
		//~2 - up
		//~3 - down
		//~rc
		//~row/col no.
		//~chooseDirection();
		//~sets the optimal value for dir and rc
		
		
		
		mxHit = -1.0;
		rep(i,1,n+1) {
			if (hor[i][0] > mxHit) {
				mxHit = hor[i][0];
				dir = 0;
				rc = i;
			}
			if (hor[i][1] > mxHit) {
				mxHit = hor[i][1];
				dir = 1;
				rc = i;
			}
			if (vert[i][0] > mxHit) {
				mxHit = vert[i][0];
				dir = 2;
				rc = i;
			}
			if (vert[i][1] > mxHit) {
				mxHit = vert[i][1];
				dir = 3;
				rc = i;
			}
		}
		
		//~cout << "Dir:"<< dir << " Rc:" << rc << "\n";
		
		
		int cnt = 0;
		if (dir < 2) {
			//~horizontal shot
			if (dir == 0) {
				cnt = hor[rc][2];
				int iter = 1;
				int kill = 0;
				while (kill < cnt && iter < n+1) {
					if (t[rc][iter] > 0) {			
						//~modify avg and cnt for hor and vert
						modify(rc,iter);
						t[rc][iter] = 0;
						kill++;
					}
					iter++;
				}
			}
			if (dir == 1) {
				cnt = hor[rc][3];
				int iter = n;
				int kill = 0;
				while (kill < cnt && iter > 0) {
					if (t[rc][iter] > 0) {
						modify(rc,iter);
						t[rc][iter] = 0;
						kill++;
					}
					iter--;
				}
			}
		}
		else {
			//~vertical shot
			if (dir == 2) {
				cnt = vert[rc][2];
				int iter = 1;
				int kill = 0;
				while (kill < cnt && iter < n+1) {
					if (t[iter][rc] > 0) {
						modify(iter,rc);
						t[iter][rc] = 0;
						kill++;
					}
					iter++;
				}
			}
			if (dir == 3) {
				cnt = vert[rc][3];
				int iter = n;
				int kill = 0;
				while (kill < cnt && iter > 0) {
					if (t[iter][rc] > 0) {
						modify(iter,rc);
						t[iter][rc] = 0;
						kill++;
					}
					iter--;
				}
			}
		}
		alive -= cnt;
		//~cout << "Alive: " << alive << "Cnt: " << cnt << "\n";
		s++;
		addShot(dir, rc);
		
		//~rep(i,1,n+1) {
			//~rep(j,1,n+1) {
				//~cout << t[i][j] << " ";
			//~}
			//~cout << "\n";
		//~}
		//~cout << "\n\n";
		
		
		//~cout << "H\n";
		//~rep(i,1,n+1) {
			//~cout << hor[i][0] << " " << hor[i][1] << "\n";
		//~}
		//~cout << "V\n";
		//~rep(i,1,n+1) {
			//~cout << vert[i][0] << " ";
		//~}
		//~cout << "\n";
		//~rep(i,1,n+1) {
			//~cout << vert[i][1] << " ";
		//~}
		//~cout << "\n\n\n";
		//~cout << s << "\n";
		
		
		
	}
	
	//~cout << "Final: " << s << "\n";
	cout << s << " " << alive << "\n";
	rep(i,0,s) {
		cout << shots[i].ff << " " << shots[i].ss << "\n";
	}
	
	
	return 0;
}



