
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n; int i=1;
    cin>>n; int r;int b=0;
    while(n!=0)
    { r=n%8;
      b=b+r*i;
      i=i*10;
      n=n/8;

    }

    cout<<b;
}

