#include <iostream>
using namespace std;
int main()
{
     int n;
    cin>>n;
    int j;
    for(int h=2;h<=n;h++ )
    {
        if(n%h==0)
    {
        int flag=0;

     for (int i=2;i<=h-1;i++)
       {  if(h%i==0)
            flag++;
        }


         if(flag==0)
            cout<<h<<endl;

    }

}
}

