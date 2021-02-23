
#include <iostream>
#include <math.h>
using namespace std;

int check(int a)
{    int i=0;
    int r; int b=0;
    while(a>0)
    {   r=a%10;
        b=b+r*pow(2,i);
        i++;
        a=a/10;

    } return b;
   }




int main()
{   int n;  int k=1; int j;
    cin>>n;  int m; int p=0;
    while(n>0){
        m=n%1000;
        j=check(m);
        p=p+j*k;
        k=k*10;
        n=n/1000;
    }

    cout<<p;
}

