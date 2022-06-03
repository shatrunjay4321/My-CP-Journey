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
		ll a, mini;
		map<int, int> m;
        for(i=0;i<n;i++)
		{
			cin>>a;
			m[a]++;
		}
		for(auto x:m)
		{
		    mini = x.first;
		    break;
		}
		for(auto x:m)
		{
		    if(x.first==mini)
		    {
		        continue;
		    }
		    if(x.first<=(mini+mini))
		    {
		        i = -1;
		        break;
		    }
		}
		if(i==-1)
		{
		    cout<<n<<endl;
		}
		else
		{
		    cout<<n-m[mini]<<endl;
		}
    }
    return 0;
}