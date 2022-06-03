#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i, sum, v;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n;
        int l[n], a[n], b[n];
        for(i=0;i<n;i++)
        {
            cin>>v;
            a[v-1]=i;
        }
        for(i=0;i<n;i++)
        {
            cin>>l[i];
            b[i]=a[i];
        }
        for(i=1;i<n;i++)
        {
            while(a[i]<=a[i-1])
            {
                sum+=1;
                a[i]=a[i]+l[b[i]];
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}