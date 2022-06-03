#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t, i, one, two, three, four;
	string s;
	cin>>t;
	while(t--)
	{
	    one=0;
	    two=0;
	    three=0;
	    four=0;
	    cin>>s;
	    if(s.length()<10)
	    {
	        cout<<"NO"<<endl;
	    }
	    else
	    {
	        for(i=0;i<s.length();i++)
	        {
	            if(s[i]>=97&&s[i]<=(97+26))
	            {
	                one=1;
	            }
	            if(i>0&&i<(-1+s.length()))
	            {
	                if(s[i]>=65&&s[i]<=(65+26))
	                {
	                    two=1;
	                }
	                if(s[i]>=48&&s[i]<=(48+10))
	                {
	                    three=1;
	                }
	                if(s[i]=='@'||s[i]=='#'||s[i]=='%'||s[i]=='&'||s[i]=='?')
	                {
	                    four=1;
	                }
	            }
	        }
	        if(one&two&three&four)
	        {
	            cout<<"YES"<<endl;
	        }
	        else
	        {
	            cout<<"NO"<<endl;
	        }
	    }
	    
	}
	return 0;
}
