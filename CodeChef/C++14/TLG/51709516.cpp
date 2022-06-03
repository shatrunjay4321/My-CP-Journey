#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, sum1=0, sum2=0, diff=0, lead=0, w=1, temp;
	cin>>t;
	while(t--)
	{
	    int p1,p2;
	    cin>>p1>>p2;
	    sum1+=p1;
	    sum2+=p2;
	    if(sum1>sum2)
	    {
	        diff=sum1-sum2; temp=1;
	        
	    }
	    else
	    {
	        diff=sum2-sum1;temp=2;
	   }
	   if(diff>lead)
	   {
	   lead=diff; w=temp;       
	   }
	}
     cout << w<<" ";
	 cout << lead;
	return 0;
	    	}