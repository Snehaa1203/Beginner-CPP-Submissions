#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n; int i=0;
    cin>>n; int r;int b=0;
    while(n>0)
    {
        r=n%10;
        b=b+r*pow(2,i);
        i++;
        n=n/10;
    } cout<<b;
}
