#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t, n, sum=0, i;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        for(i=0;i<n;i++)
        {
            if(i%2==0)
            {
                if(sum%2!=0)
                {
                    sum-=(2*a[i]);
                }
            }
            else
            {
                if(sum%2==0)
                {
                    sum-=(2*a[i]);
                }
            }
        }
        if(sum%2==0)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
    }
	// your code goes here
	return 0;
}
