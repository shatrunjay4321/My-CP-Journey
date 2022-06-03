#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(ll a, ll b)
{
    if(a==b)
    {
        if(a%3==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        return;
    }
    if(a<=0||b<=0)
    {
        cout<<"NO"<<endl;
        return;
    }
    if(b>a)
    {
        swap(a, b);
    }
    if(a==2*b)
    {
        cout<<"YES"<<endl;
        return;
    }
    a-=(2*ceil(1.0*(a-b)/2));
    b-=ceil(1.0*(a-b)/2);
    if(a!=0&&b!=0)
    {
        a-=2;
        b-=1;
    }
    return solve(a, b);
}
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