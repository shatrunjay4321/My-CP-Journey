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
		ll a;
		map<ll, ll> m;
        for(i=0; i<4; i++)
		{
			cin>>a;
			m[a]++;
		}
		if(m.size()==1)
		{
		    cout<<0<<endl;
		}
		else if(m.size()>2)
		{
		    cout<<2<<endl;
		}
		else if(m.size()==2)
		{
		    for(auto x:m)
		    {
		        if(x.second==3)
		        {
		            a = INT_MIN;
		            cout<<1<<endl;
		        }
		    }
		    if(a!=INT_MIN)
		    {
		        cout<<2<<endl;
		    }
		}
    }
    return 0;
}