#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    double k1, k2, k3, r, v;
    cin>>t;
    while(t--)
    {
		cin>>k1>>k2>>k3>>v;
		v=k1*k2*k3*v;
		v=100/v;
		r=floor((v*100)+(0.5))/100;
		if(r<9.58)
		{
		    cout<<"Yes"<<endl;
		}
		else
		{
		    cout<<"No"<<endl;
		}
    }
    return 0;
}