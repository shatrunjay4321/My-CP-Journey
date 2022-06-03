#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n, i, t, a, b, c, tot, A, B, C;
    cin>>t;
    while(t--)
    {
		cin>>a>>b>>c>>tot>>A>>B>>C;
		{
		    if((A>=a)&&(B>=b)&&(C>=c)&&(A+B+C)>=tot)
		    {
		        cout<<"YES"<<endl;
		    }
		    else
		    {
		        cout<<"NO"<<endl;
		    }
		}
    }
    return 0;
}