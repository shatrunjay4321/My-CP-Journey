#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t, i, k;
    cin>>t;
    while(t--)
    {
        int sum=0;
        int a[10];
        for(i=10;i>0;i--)
        {
            cin>>a[i];
        }
        cin>>k;
        for(i=1;i<=10;i++)
        {
            sum+=a[i];
            if(sum>k)
            {
                cout<<11-i<<endl;
                break;
            }
        }
    }
    return 0;
}