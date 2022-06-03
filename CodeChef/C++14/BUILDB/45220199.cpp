#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n, i, t, r;
    cin>>t;
    while(t--)
    {
		cin>>n>>r;
		ll a[n], b[n], x=0, max;
        for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n;i++)
		{
			cin>>b[i];
		}
		if(n==1)
		{
		    cout<<b[0]<<endl;
		    continue;
		}
		max=b[0];
		x=b[0]-(r*(a[1]-a[0]));
		if(x<0)
		{
		    x=0;
		}
		for(i=1;i<n-1;i++)
		{
			x+=b[i];
			if(x>max)
			{
			    max=x;
			}
			x-=(r*(a[i+1]-a[i]));
			if(x<0)
			{
			    x=0;
			}
		}
		x+=b[n-1];
		if(x>max)
		{
		    max=x;
		}
		cout<<max<<endl;
    }
    return 0;
}