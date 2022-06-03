#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll i, t;
    cin>>t;
    while(t--)
    {
        string s;
		cin>>s;
        for(i=0;i<s.size();)
		{
			if(s[i]=='p'&&s[i+1]=='a'&&s[i+2]=='r'&&s[i+3]=='t'&&s[i+4]=='y'&&((i+4)<s.size()))
			{
			    s[i+2]='w';
			    s[i+3]='r';
			    s[i+4]='i';
			    i+=5;
			}
			else
			{
			    i+=1;
			}
		}
		cout<<s<<endl;
    }
    return 0;
}