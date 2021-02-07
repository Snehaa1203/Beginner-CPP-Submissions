#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int j=n;
    int d=log10(n)+1;
    int sum=0;
    while(n>0)
    {
        int r=n%10;
        sum=sum+pow(r,d);
        n=n/10;
    }

    if(sum==j)
        cout<<"armstrong";
    else
        cout<<"not armstrong";
}
