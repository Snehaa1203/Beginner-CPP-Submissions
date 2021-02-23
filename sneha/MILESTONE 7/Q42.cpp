#include <iostream>
#include <math.h>
using namespace std;
int check(int a)
{  int r; int i=1;int b=0;
     while(a!=0)
    { r=a%2;
      b=b+r*i;
      i=i*10;
      a=a/2;
} return b;
}

int main()
{ int n;
  cin>>n; int j;int m; int s;
  s=log10(n);
  while(n>0)
  {  j= n% pow(10,s);
     m=check(j);
     cout<<m;
  }

  }
