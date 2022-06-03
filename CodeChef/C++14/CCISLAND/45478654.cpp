#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n, i, t, x, y, xr, yr, d;
    cin>>t;
    while(t--)
    {
		cin>>x>>y>>xr>>yr>>d;
		if((d*xr>x)||(d*yr>y))
		{
		    cout<<"NO"<<endl;
		}
		else
		{
		    cout<<"YES"<<endl;
		}
    }
    return 0;
}