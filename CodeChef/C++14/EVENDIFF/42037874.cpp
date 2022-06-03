#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t, i, n, even, odd;
    cin>>t;
    while(t--)
    {
        even=0;
        odd=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if(even>odd)
        {
            cout<<odd<<endl;
        }
        else
        {
            cout<<even<<endl;
        }
    }
	// your code goes here
	return 0;
}
