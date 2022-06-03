#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t, k, n, x, y;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>x>>y;
        if(x==y)
        {
            cout<<n<<" "<<n<<endl;
        }
        else if(x==0&&y==n)
        {
            cout<<n<<" 0"<<endl;
        }
        else if(x==n&&y==0)
        {
            cout<<"0 "<<n<<endl;
        }
        else if(x<y)
        {
            if(k%4==0)
            {
                cout<<"0 "<<y-x<<endl;
            }
            else if(k%4==1)
            {
                cout<<n-y+x<<" "<<n<<endl;
            }
            else if(k%4==2)
            {
                cout<<n<<" "<<n-y+x<<endl;
            }
            else if(k%4==3)
            {
                cout<<-x+y<<" 0"<<endl;
            }
        }
        else
        {
            if(k%4==0)
            {
                cout<<x-y<<" 0"<<endl;
            }
            else if(k%4==1)
            {
                cout<<n<<" "<<n+y-x<<endl;
            }
            else if(k%4==2)
            {
                cout<<n+y-x<<" "<<n<<endl;
            }
            else if(k%4==3)
            {
                cout<<"0 "<<-y+x<<endl;
            }
        }
    }
	return 0;
}
