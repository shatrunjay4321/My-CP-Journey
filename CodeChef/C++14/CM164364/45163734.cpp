#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n, i, t, x, a;
    cin>>t;
    while(t--)
    {
        ll sum=0, k;
        map<ll, ll> m;
		cin>>n>>x;
        for(i=0;i<n;i++)
		{
			cin>>a;
			m[a]+=1;
		}
		for(auto p:m)
		{
		    sum+=(-1+p.second);
		}
		if(sum>=x)
		{
		    cout<<m.size()<<endl;
		}
		else
		{
		    k=n=m.size();
		    for(i=0;i<n;i++)
		    {
		        sum+=1;
		        k-=1;
		        if(sum>=x)
		        {
		            n=-9;
		            cout<<k<<endl;
		            break;
		        }
		    }
		    if(n!=-9)
		    {
		        cout<<0<<endl;
		    }
		}
    }
    return 0;
}