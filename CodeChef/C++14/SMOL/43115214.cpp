#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t, i, n, k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(k)
        {
            cout<<n%k<<endl;
            continue;
        }
        cout<<n<<endl;
    }
    return 0;
}