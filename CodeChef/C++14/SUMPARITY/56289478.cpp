#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
void solve()
{
    ll n, i, t, a;
    cin>>n>>a;
    if(n==1)
    {
        if(a%2)
        {
            cout<<"Odd\n";
        }
        else
        {
            cout<<"Even\n";
        }
        return;
    }
    if(a%2)
    {
        if(n%2)
        {
            cout<<"Odd\n";
        }
        else
        {
            cout<<"Even\n";
        }
        return;
    }
    cout<<"Impossible\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}