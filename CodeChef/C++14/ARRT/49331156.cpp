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
		ll a[n], b[n], c[n], j, min = INT_MAX, k = -1;
        for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n;i++)
		{
			cin>>b[i];
			if(((a[0]+b[i])%n)<min)
			{
			    min = ((a[0]+b[i])%n);
			    j = i;
			    k = -1;
			}
			else if(((a[0]+b[i])%n)==min)
			{
			    k = i;
			}
		}
		for(i=0; i<n; i++)
	    {
	        c[i] = (a[i]+b[j])%n;
	        j+=1;
	        if(j==n)
	        {
	            j = 0;
	        }
		}
		if(k!=-1)
		{
		    j = k;
		    for(i=0; i<n; i++)
		    {
		        if(c[i]>(a[i]+b[j])%n)
		        {
		            j = -1;
		            break;
		        }
		        else if(c[i]<(a[i]+b[j])%n)
		        {
		            k = -1;
		            break;
		        }
		        j+=1;
		        if(j==n)
		        {
		            j = 0;
		        }
		    }
		    if(j==-1)
		    {
		        j = k;
		        for(i=0; i<n; i++)
		        {
		            c[i] = (a[i]+b[j])%n;
		            j+=1;
		            if(j==n)
		            {
		                j = 0;
		            }
		        }
		    }
		}
		for(i=0; i<n; i++)
		{
		    cout<<c[i]<<" ";
		}
		cout<<endl;
    }
    return 0;
}