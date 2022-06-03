#include <iostream>
using namespace std;

int main() 
{
    int n, i=10;
    cin>>n;
    if(n<=10)
    {
        cout<<n;
        return 0;
    }
    while(i--)
    {
        if(n%i==0)
        {
            cout<<i<<endl;
            break;
        }
    }
	return 0;
}
