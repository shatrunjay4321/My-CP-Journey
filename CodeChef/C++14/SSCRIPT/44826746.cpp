#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n, i, t, k;
    string a;
    cin>>t;
    while(t--)
    {
		cin>>n>>k;
		ll count=0;
		cin>>a;
        for(i=0;i<n;i++)
		{
		    if(a[i]=='*')
		    {
			    count+=1;
		    }
		    if(count>=k)
		    {
		        i=-1;
		        break;
		    }
		    if(a[i]!='*')
		    {
		        count=0;
		    }
		}
		if(i==-1)
		{
		    cout<<"Yes"<<endl;
		}
		else
		{
		    cout<<"No"<<endl;
		}
    }
    return 0;
}