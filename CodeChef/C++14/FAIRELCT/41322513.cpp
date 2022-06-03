#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t, i, n, m, sa, sb, count, min, max, val;
    cin>>t;
    while(t--)
    {
        sa=0;
        sb=0;
        count=0;
        cin>>n>>m;
        vector<int>a;
        vector<int>b;
        for(i=0;i<n;i++)
        {
            cin>>val;
            a.push_back(val);
            sa+=a[i];
        }
        for(i=0;i<m;i++)
        {
            cin>>val;
            b.push_back(val);
            sb+=b[i];
        }
        while(sa<=sb)
        {
            if(count==n||count==m)
            {
                count=-1;
                break;
            }
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
            min=a[0];
            max=b[m-1];
            sa=sa+max-min;
            sb=sb-max+min;
            a[0]=max;
            b[m-1]=min;
            count++;
        }
        if(sa==sb)
        {
            count=-1;
        }
        cout<<count<<endl;
        a.clear();
        b.clear();
    }
	return 0;
}
