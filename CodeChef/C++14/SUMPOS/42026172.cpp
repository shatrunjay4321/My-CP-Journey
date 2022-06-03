#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t, x, y, z;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>z;
        if((x==(y+z))||(y==(x+z))||(z==(x+y)))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
	return 0;
}
