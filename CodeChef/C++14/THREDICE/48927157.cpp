#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n, i, t, x, y;
    cin>>t;
    while(t--)
    {
		cin>>x>>y;
		if(x+y>=6)
		{
		    cout<<0<<endl;
		}
		else
		{
		    cout<<1.0*(6-x-y)/6<<endl;
		}
    }
    return 0;
}