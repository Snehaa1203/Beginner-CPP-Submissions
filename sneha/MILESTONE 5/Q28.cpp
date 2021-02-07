#include <iostream>
using namespace std;
int main()
{
     int n;
    cin>>n;
    int j;
    int sum=0;



    for (int j=2;j<=n;j++)
    {
        int flag=0;

     for (int i=2;i<=j-1;i++)
       {  if(j%i==0)
            flag++;
        }


         if(flag==0)
            sum=sum+j;

    }   cout<<sum;

}


