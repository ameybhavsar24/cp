#include <bits/stdc++.h>


#define ll size_t



ll maxCoins(ll n, ll dp[]) {
	if(n>12) {
		ll i=floor(n/2),j=floor(n/3),k=floor(n/4);
		
		if(dp[i]==-1) dp[i]= maxCoins(i,dp);
		
		if(dp[j]==-1) dp[j]= maxCoins(j,dp);
		
		if(dp[k]==-1) dp[k]= maxCoins(k,dp);
		
		// std::cout << dp[i] << " " << dp[j] << " " << dp[k] << "\n";
		dp[n] = dp[i]+dp[j]+dp[k];
		return dp[n];
	}
	else if(n==12) {
		dp[12] = 13;
		return 13;
	}
	else {
		dp[n] = n;
		return n;
	}	
}



int main() {
	// your code goes here
	//std::ios_base::sync_with_stdio(false);std::cin.tie(NULL);
	ll n;
	while (std::cin >> n) {
	   // ll s = floor(x/2)+floor(x/3)+floor(x/4);
	  
	  
ll dp[n+1];
memset(dp,-1,sizeof(dp));


	   //memset(str, 't', sizeof(str));
	  
	   //for (int i=0; i<n; i++) std::cout << dp[i] << " ";
	   //std::cout << "\n";
	   ll s = maxCoins(n,dp);
	   //std::cout << s << " " << n << "\n";
	    if(s > n) {
	        std::cout << s << "\n";
	    }
	    else {
	        std::cout << n << "\n";
	    }
	}
	
	return 0;
}
