#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t, s;
    cin>>t;
    while(t--)
    {
        ll sum=0;
        cin>>s;
        ll q[s], e, l, j, i;
        for(i=0;i<s;i++)
        {
            cin>>q[i];
            sum+=q[i];
        }
        for(i=0;i<s;i++)
        {
            cin>>e;
            for(j=1;j<=e;j++)
            {
                cin>>l;
                sum+=l;
            }
            sum-=(e*q[i]);
        }
        cout<<sum<<endl;
        
    }
    return 0;
}