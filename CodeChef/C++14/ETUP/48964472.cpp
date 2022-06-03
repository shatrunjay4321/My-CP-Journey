#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n, i, t, q;
    cin>>t;
    while(t--)
    {
		cin>>n>>q;
		ll a, odd[n+1], even[n+1];
		odd[0] = 0;
		even[0] = 0;
        for(i=0;i<n;i++)
		{
			cin>>a;
			if(a%2==0)
			{
			    even[i+1] = even[i]+1;
			    odd[i+1] = odd[i];
			}
			else
			{
			    even[i+1] = even[i];
			    odd[i+1] = odd[i]+1;
			}
		}
		while(q--)
		{
		    ll l, r, o, e, sum = 0;
		    cin>>l>>r;
		    o = odd[r]-odd[l-1];
		    e = even[r]-even[l-1];
		    if(e>=3)
		    {
		        sum+=((e*(e-1)*(e-2))/6);
		    }
		    if(e>=1&&o>=2)
		    {
		        sum+=((e*o*(o-1))/2);
		    }
		    cout<<sum<<endl;
		}
    }
    return 0;
}