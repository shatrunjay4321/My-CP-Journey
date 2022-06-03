#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t, n, m, i, j, sum;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        m=n/4;
        for(i=0;i<m;i++)
        {
            sum=97;
            for(j=0;j<4;j++)
            {
                sum+=((s[4*i+j]-'0')*pow(2,3-j));
            }
            cout<<(char)sum;
        }
        cout<<endl;
    }
	return 0;
}

