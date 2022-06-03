#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, m, h;
    cin>>t;
    while(t--)
    {
        cin>>m>>h;
        m=m/(h*h);
        if(m<=18)
        {
            cout<<1<<endl;
        }
        else if(m>18&&m<=24)
        {
            cout<<2<<endl;
        }
        else if(m>24&&m<30)
        {
            cout<<3<<endl;
        }
        else
        {
            cout<<4<<endl;
        }
    }
    return 0;
}