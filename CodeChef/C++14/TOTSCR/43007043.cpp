#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, n, k, j, sum, i;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        string S;
        int a[k];
        for(i=0;i<k;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            sum=0;
            cin>>S;
            for(j=0;j<k;j++)
            {
                sum=sum+(a[j]*(S[j]-'0'));
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}