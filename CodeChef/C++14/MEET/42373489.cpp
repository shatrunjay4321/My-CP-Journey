#include<bits/stdc++.h>
using namespace std;
int change(string s, int i)
{
    int tim;
    if(s[i]=='1'&&s[i+1]=='2')//&&s[i+5]=='A')
    {
        s[i]='0';
        s[i+1]='0';
    }
    if(s[i+5]=='A')
    {
        tim=((s[i]-'0')*10+(s[i+1]-'0'))*60 + (s[i+3]-'0')*10 + (s[i+4]-'0');
    }
    else
    {
        tim=((s[i]-'0')*10+(s[i+1]-'0'))*60 + (s[i+3]-'0')*10 + (s[i+4]-'0') + 12*60;
    }
    return tim;
}
int main()
{
    int n, t, i, j, ans, left, right;
    cin>>t;
    while(t--)
    {
        string p, l;
        char c;
        for(i=0;i<7;i++)
        {
            cin>>c;
            p.push_back(c);
        }
        ans=change(p, 0);
        p.clear();
        cin>>n;
        for(j=0;j<n;j++)
        {
            for(i=0;i<14;i++)
            {
                cin>>c;
                l.push_back(c);
            }
            left=change(l, 0);
            right=change(l, 7);
            l.clear();
            //cout<<left<<" "<<right<<" ";
            if(left<=ans&&ans<=right)
            {
                cout<<1;
            }
            else
            {
                cout<<0;
            }
        }
        cout<<endl;
    }
}