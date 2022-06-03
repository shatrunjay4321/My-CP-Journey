#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n, i, t;
    cin>>t;
    while(t--)
    {
		cin>>n;
		ll a[n], val = 0, j;
		for(i=0; i<n; i++)
		{
		    cin>>a[i];
		}
        for(i=0; i<31; i++)
		{
			for(j=0; j<n; j++)
			{
			    if(!((1<<i)&a[j]))
			    {
			        j = -1;
			        break;
			    }
			}
			if(j!=-1)
			{
			    val|=(1<<i);
			}
		}
		cout<<val<<" ";
		//continue;
		ll ok = 0;
		for(i=0; i<n; i++)
		{
		    ok|=(a[i]^val);
		}
		cout<<ok<<endl;
    }
    return 0;
}