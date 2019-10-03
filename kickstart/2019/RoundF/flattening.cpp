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
ll a[102],dp[102][102];
ll n,k;
ll solve(ll x,ll y)
{
	if(x==n+1)
		return 0;
	if(y==0)
		return 1e9;
	if(dp[x][y]!=-1)
		return dp[x][y];
	ll ct[102];
	for(ll j=1;j<=100;j++)
		ct[j]=0;
	ll mx=0;
	dp[x][y]=1e9;
	for(ll j=x;j<=n;j++)
	{
		ct[a[j]]++;
		mx=max(mx,ct[a[j]]);		
		dp[x][y]=min(dp[x][y],(j-x+1)-mx+solve(j+1,y-1));
	}
	return dp[x][y];
}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	ll test;
	cin>>test;
	for(ll tt=1;tt<=test;tt++)
	{
		cout<<"Case #"<<tt<<": ";
		cin>>n>>k;
		map<ll,ll> H;
		for(ll i=1;i<=n;i++)
		{
			cin>>a[i];
			if(!H[a[i]])
			{
				H[a[i]]=i;
			}
			a[i]=H[a[i]];
			// cout<<a[i]<<endl;
		}
		if(k==n)
		{
			cout<<"0\n";
			continue;
		}		
		k++;
		memset(dp,-1,sizeof(dp));
		cout<<solve(1,k)<<"\n";
		// cout<<solve(3,1)<<endl;
	}
	return 0;
}