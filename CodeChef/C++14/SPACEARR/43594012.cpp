#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n, i, t;
    cin>>t;
    while(t--)
    {
		cin>>n;
		ll a[n], sum=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a, a+n);
        for(i=0;i<n;i++)
        {
            if(a[i]>(i+1))
            {
                cout<<"Second\n";
                i=-1;
                break;
            }
        }
        if(i==-1)
        {
            continue;
        }
        for(i=0;i<n;i++)
        {
            sum+=(i+1-a[i]);
        }
        if(sum%2)
        {
            cout<<"First\n";
        }
        else
        {
            cout<<"Second\n";
        }
    }
    return 0;
}