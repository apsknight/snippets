#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;   
#define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update> 
#define ld double
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define all(a) a.begin(),a.end()
#define sz(a) (ll)(a.size())
const ll M=1e5+5;
ll dp[M][2][2],B[M];
std::vector<ll> vtr[M];
void solve(ll x,ll p=-1)
{
	if(sz(vtr[x])==1 && x!=1)
	{
		dp[x][0][0]=0;
		dp[x][0][1]=B[x];
		dp[x][1][0]=B[x];
		dp[x][1][1]=B[x];
		return;
	}
	ll t1=0,t2=0,t3=0;
	ll mn=1e14;
	for(auto u:vtr[x])
	{
		if(u==p)
			continue;
		solve(u,x);
		t1=t1+dp[u][0][0];
		t2=t2+max(dp[u][0][0],dp[u][1][0]);
		mn=min(mn,dp[u][0][0]-dp[u][1][0]);
		t3=t3+max(dp[u][0][1],dp[u][1][1]);
	}
	dp[x][0][0]=t1;
	if(mn<=0)
		dp[x][0][0]=max(dp[x][0][0],t2+B[x]);
	else
		dp[x][0][0]=max(dp[x][0][0],t2+B[x]-mn);
	dp[x][0][1]=B[x]+t2;
	dp[x][1][0]=B[x]+t3;
	dp[x][1][1]=B[x]+t3;
}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	ll test;
	cin>>test;
	for(ll tt=1;tt<=test;tt++)
	{
		ll n;
		cin>>n;
		for(ll i=1;i<=n;i++)
		{
			cin>>B[i];
			vtr[i].clear();
		}
		memset(dp,-1,sizeof(dp));
		for(ll i=1;i<n;i++)
		{
			ll u,v;
			cin>>u>>v;
			vtr[u].pb(v);
			vtr[v].pb(u);
		}
		solve(1);
		cout<<"Case #"<<tt<<": ";
		cout<<max(dp[1][0][0],dp[1][1][1])<<"\n";
	}
	return 0;
}