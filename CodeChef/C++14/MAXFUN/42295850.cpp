#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i;
    long long int val, min, max;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int a[n];
        min=1000000000;
        max=-1000000000;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>max)
            {
                max=a[i];
            }
            if(a[i]<min)
            {
                min=a[i];
            }
        }
        //sort(a, a+n);
        //val=2*abs(a[n-1]-a[0]);
        
        val=2*abs(max-min);
        cout<<val<<endl;
    }
    return 0;
}