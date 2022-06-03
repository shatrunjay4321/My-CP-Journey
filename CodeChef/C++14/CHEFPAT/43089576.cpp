#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i;
    cin>>t;
    while(t--)
    {
        map<int, vector<int>> m;
        cin>>n;
        int a[n];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            m[a[i]].push_back(i);
        } 
        int max=1;
        for(auto p=m.rbegin(); p!=m.rend(); p++)
        {
            
            vector<int> v=p->second;
            for(i=0;i<v.size();i++)
            {
                a[v[i]]=max;
                max++;
            }
        }
        for(i=1;i<=n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}