#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int j;



    for (int j=2;j<=n;j++)
    {
        int flag=0;

     for (int i=2;i<=j-1;i++)
       {  if(j%i==0)
            flag++;
    }


         if(flag==0)
            cout<<j<<endl;

    }

}

