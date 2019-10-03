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
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	ll test;
	cin>>test;
	for(ll tt=1;tt<=test;tt++)
	{
		ll n,s;
		cin>>n>>s;
		std::vector<ll> vt[n+1];
		map<vector<ll>,ll> ct;
		for(ll i=1;i<=n;i++)
		{
			ll c;
			cin>>c;
			while(c--)
			{
				ll x;
				cin>>x;
				vt[i].pb(x);
			}
			sort(all(vt[i]));
			for(ll j=0;j<(1LL<<sz(vt[i]));j++)
			{
				std::vector<ll> v;
				for(ll k=0;k<sz(vt[i]);k++)
				{
					if((j&(1LL<<k)))
						v.pb(vt[i][k]);
				}
				ct[v]++;
			}
		}
		ll ans=0;
		for(ll i=1;i<=n;i++)
		{
			ans+=(n-ct[vt[i]]);
		}
		cout<<"Case #"<<tt<<": "<<ans<<"\n";
	}
	return 0;
}