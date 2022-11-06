ll f(ll i,ll j,vector<vector<ll>>& dp) {
	if (i==j) return 0;
	if (dp[i][j]!=-1) return dp[i][j];
	ll cnt=INT_MAX;
	for (ll x=1;x<=i/2;x++) {
		cnt=min(cnt,1+f(x,j,dp)+f(i-x,j,dp));
	}
	for (ll x=1;x<=j/2;x++) {
		cnt=min(cnt,1+f(i,x,dp)+f(i,j-x,dp));
	}
	return dp[i][j]=cnt;
}
void solve() {
	ll a,b;
	cin>>a>>b;
	vector<vector<ll>> dp(a+1,vector<ll>(b+1,-1));
	ll ans=f(a,b,dp);
	cout<<ans<<endl;
}
