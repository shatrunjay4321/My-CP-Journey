#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n, i, t, m, l;
    cin>>t;
    while(t--)
    {
		cin>>n>>m>>l;
		ll k, j, p = -1, sum = 0, a[l];
		map<int, int> mp;
        for(i=0; i<m; i++)
		{
		    cin>>k;
		    for(j=0; j<k; j++)
		    {
		        ll x;
		        cin>>x;
		        mp[x] = i+1;
		    }
		}
		for(i=0; i<l; i++)
		{
		    cin>>a[i];
		}
		for(i=0; i<l; i++)
		{
		    if(p!=mp[a[i]])
		    {
		        sum+=1;
		        p = mp[a[i]];
		    }
		}
		cout<<sum<<endl;
    }
    return 0;
}