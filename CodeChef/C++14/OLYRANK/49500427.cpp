#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int t, a, b, c, d, e, f;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c>>d>>e>>f;
	    if((a+b+c)>(d+e+f))
	    {
	        cout<<1<<endl;
	    }
	    else
	    {
	        cout<<2<<endl;
	    }
	}
	return 0;
}
