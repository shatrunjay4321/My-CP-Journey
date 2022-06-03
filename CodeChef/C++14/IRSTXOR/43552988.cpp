#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n, i, t, k, l;
    cin>>t;
    while(t--)
    {
        k=1;
		cin>>n;
		l=log2(n);
		for(i=0;i<l;i++)
		{
		    k*=2;
		}
		l=k*2;
		n=(k-1)*(l-1-n+k);
		cout<<n<<endl;
    }
    return 0;
}