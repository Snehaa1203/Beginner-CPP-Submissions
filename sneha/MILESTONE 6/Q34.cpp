#include <iostream>
using namespace std;
int fat(int h)
    {       int prod=1;
        for(int c=h;c>=1;c--)
             prod=prod*c;
        return prod;}

int main()
{
    int n;
    cin>>n;
    int sum=0;
    int j=n;

    while(j>0)
    {
        int r=j%10;
        sum=sum+fat(r);
        j=j/10;
    }
    if(sum==n)
        cout<<"strong";
    else
        cout<<"not strong";


}
