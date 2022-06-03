#include<iostream>
//#include<vector>
using namespace std;
int main()
{
    int t, n, k, d, sum, num, i, ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>d;
        //vector<int>a;
        sum=0;
        for(i=0;i<n;i++)
        {
            cin>>num;
            //a.push_back(num);
            sum+=num;
        }
        ans=sum/k;
        if(ans>d)
        {
            cout<<d<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
        //a.clear();
    }
    return 0;
}