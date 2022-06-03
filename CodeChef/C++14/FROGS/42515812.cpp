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
                //cout<<a[i]<<"\t"<<a[i-1];
                sum+=1;
                a[i]=a[i]+l[b[i]];
            }
            //a[i]+=(l[a[i]]*(ceil(1.0*(a[i-1]-a[i]+1)/l[a[i]])));
        }
        /*for(i=1;i<n;i++)
        {
            if(a[i]<=a[i-1])
            {
                sum+=(ceil(1.0*(a[i-1]-a[i]+1)/l[a[i]]));
            }
            a[i]+=(l[a[i]]*(ceil(1.0*(a[i-1]-a[i]+1)/l[a[i]])));
        }*/
        cout<<sum<<endl;
    }
    return 0;
}