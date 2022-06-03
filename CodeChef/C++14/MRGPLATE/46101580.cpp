#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n, i, t, a, b;
    cin>>t;
    while(t--)
    {
		cin>>a>>b;
		if(a<b)
		{
		    swap(a, b);
		}
		if(a==b)
		{
		    if(a%3)
		    {
		        cout<<"NO\n";
		    }
		    else
		    {
		        cout<<"YES\n";
		    }
		    continue;
		}
		if((a-b)==b)
		{
		    cout<<"YES"<<endl;
		}
		else if((a-b)>b)
		{
		    cout<<"NO\n";
		}
		else
		{
		    if((a+b)%3)
		    {
		        cout<<"NO\n";
		    }
		    else
		    {
		        cout<<"YES\n";
		    }
		}
    }
    return 0;
}