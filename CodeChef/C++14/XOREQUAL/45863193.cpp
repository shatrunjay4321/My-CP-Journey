#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n, i, t, a[100000], prod = 1, N=1000000007;
    cin>>t;
    a[1] = 1;
    for(i=2;i<=100000;i++)
	{
		prod%=N;
		prod*=2;
		a[i] = prod;
	}
    while(t--)
    {
		cin>>n;
		cout<<a[n]%N<<endl;
    }
    return 0;
}