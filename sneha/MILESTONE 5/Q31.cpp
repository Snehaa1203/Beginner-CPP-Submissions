#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
   {
      int sum=0;
      int j=i;
      int d=log10(j)+1;

       while(j>0)
    {
        int r=j%10;
        sum=sum+(pow(r,d));
        j=j/10;
    }

    if(i==sum)
        cout<<i<<endl;

}
}

