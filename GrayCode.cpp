vector<string> f(ll n) {
	if (n==0) return {""};
	vector<string> ans,prev=f(n-1);
	for (ll i=0;i<prev.size();i++) {
		ans.push_back("0"+prev[i]);
	}
	for (ll i=prev.size()-1;i>=0;i--) {
		ans.push_back("1"+prev[i]);
	}
	return ans;
}
void solve() {
	ll n;
	cin>>n;
	vector<string> ans=f(n);
	for (ll i=0;i<ans.size();i++) {
		cout<<ans[i]<<endl;
	}
}
