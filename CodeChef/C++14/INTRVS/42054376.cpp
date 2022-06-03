#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t, n, k, i, rej, tim;
    cin>>t;
    while(t--)
    {
        rej=0;
        tim=0;
        int ti=0;
        cin>>n>>k;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>-1)
            {
                rej++;
                if(a[i]>k)
                {
                    tim=1;
                }
                if(a[i]<=1)
                {
                    ti++;
                }
            }
            
        }
        if(rej<(n/2+n%2))
        {
            cout<<"Rejected"<<endl;
        }
        else if(tim)
        {
            cout<<"Too Slow"<<endl;
        }
        else if(rej==n&&ti==n)
        {
            cout<<"Bot"<<endl;
        }
        else
        {
            cout<<"Accepted"<<endl;
        }
    }
    
	// your code goes here
	return 0;
}
