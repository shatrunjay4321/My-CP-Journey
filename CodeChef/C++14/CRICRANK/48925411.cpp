#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n, i, t, r1, w1, c1, r2, w2, c2;
    cin>>t;
    while(t--)
    {
		cin>>r1>>w1>>c1>>r2>>w2>>c2;
		ll a = 0, b = 0;
		if(r1>r2)
		{
		    a++;
		}
		else
		{
		    b++;
		}
		if(w1>w2)
		{
		    a++;
		}
		else
		{
		    b++;
		}
		if(c1>c2)
		{
		    a++;
		}
		else
		{
		    b++;
		}
		if(a>b)
		{
		    cout<<"A\n";
		}
		else
		{
		    cout<<"B\n";
		}
    }
    return 0;
}