ll f(ll i,ll j,ll cnt,ll arr[],vector<vector<ll>>& dp) {
	if (i==j) {
		if (cnt) return arr[i];
		return 0;
	}
	if (dp[i][j]!=-1) return dp[i][j];
	ll s=f(i+1,j,1-cnt,arr,dp);
	ll e=f(i,j-1,1-cnt,arr,dp);
	if (cnt) {
		return dp[i][j]=max(s+arr[i],e+arr[j]);
	}
	return dp[i][j]=min(s,e);
}

void solve() {
	ll n;
	cin>>n;
	ll arr[n];
	for (ll i=0;i<n;i++) {
		cin>>arr[i];
	}
	vector<vector<ll>> dp(n+1,vector<ll>(n+1,-1));
	ll ans=f(0,n-1,1,arr,dp);
	cout<<ans<<endl;
}
