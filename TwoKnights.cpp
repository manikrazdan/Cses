ll f(ll n) {
	ll ways=((n*n)*(n*n-1))/2; // no. of ways to place 2 knights on n*n chessboard
	ll box=2*(n-1)*(n-2); // no. of 2*3 and 3*2 boxes in n*n chessboard
	return ways-2*box;
}
void solve() {
	ll n;
	cin>>n;
	for (ll i=1;i<=n;i++) {
		cout<<f(i)<<endl;
	}
}
