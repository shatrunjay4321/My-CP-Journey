#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n, i, t, p, k;
    cin>>t;
    while(t--)
    {
		cin>>n>>p>>k;
		ll a, b, sum = 0, c, d;
		a = n/k;
		b = n%k;
		c = p/k;
		d = p%k;
		sum+=(a*d);
		sum+=(c+1);
		sum+=min(b, d);
		cout<<sum<<endl;
    }
    return 0;
}