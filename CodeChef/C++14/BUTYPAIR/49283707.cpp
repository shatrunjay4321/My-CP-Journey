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
		ll a[n], sum = 0;
		map<ll, ll> m;
        for(i=0;i<n;i++)
		{
			cin>>a[i];
			m[a[i]]++;
		}
		sum = n*(n-1);
		for(auto x:m)
		{
		    if(x.second>1)
		    {
		        sum-=(x.second*(x.second-1));
		    }
		}
		cout<<sum<<endl;
    }
    return 0;
}