#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i;
    long long int val;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a, a+n);
        val=2*abs(a[n-1]-a[0]);
        cout<<val<<endl;
    }
    return 0;
}