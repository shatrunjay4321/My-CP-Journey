#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n, i, w1, w2, x1, x2, m, t;
    cin>>t;
    while(t--)
    {
		cin>>w1>>w2>>x1>>x2>>m;
		if(w2>=(w1+m*x1)&&w2<=(w1+m*x2))
		{
		    cout<<1<<endl;
		}
		else
		{
		    cout<<0<<endl;
		}
    }
    return 0;
}