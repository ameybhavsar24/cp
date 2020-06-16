#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll t,n;
int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> arr(n);
        for (int i=0; i<n; i++) {
            cin >> arr[i];
        }
        
        set<int> srt;
        srt.insert(arr[0]);
        ll ans = 0;
        for (int i=1; i<n; i++) {
            //~int pos = upper_bound(srt.begin(),srt.end(),arr[i]) - srt.begin();   
            auto it = srt.lower_bound(arr[i]+1);
            int cnt = distance(it, srt.end());

            //~cout << cnt << "\n";
            ans+=cnt;
            srt.insert(arr[i]);
        }
        cout << ans << "\n";
    }
    return 0;   
}

    
