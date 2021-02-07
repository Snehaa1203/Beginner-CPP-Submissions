#include <iostream>
using namespace std;
int main()
{
    int a=0,b=1,c=0;
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        a=b;
        b=c;
         c=a+b;
        cout<<c<<endl;
    }
}
