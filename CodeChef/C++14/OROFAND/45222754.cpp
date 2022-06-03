#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll i, n, q, j, t, x, k;
    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        ll a[n], ans=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll dp[31]={0};
        for(i=0;i<n;i++)
        {
            for(j=0;j<31;j++)
            {
                x=1<<j;
                if(a[i]&x)
                {
                    dp[j]+=1;
                }
            }
        }
        for(i=0;i<31;i++)
        {
            ll x=1<<i;
            if(dp[i])
            {
                ans+=x;
            }
        }
        cout<<ans<<endl;
        for(k=0;k<q;k++)
        {
            ll idx, val;
            cin>>idx>>val;
            for(int i=0;i<31;i++)
            {
                x=1<<i;
                if(a[idx-1]&x)
                {
                    dp[i]-=1;
                }
            }
            for(i=0;i<31;i++)
            {
                x=1<<i;
                if(val&x)
                {
                    dp[i]+=1;
                }
            }
            a[idx-1]=val;
            ans=0;
            for(i=0;i<31;i++)
            {
                x=1<<i;
                if(dp[i]>0)
                {
                    ans+=x;
                }
            }
            cout<<ans<<endl;
        }
    }
}