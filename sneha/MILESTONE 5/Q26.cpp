#include <iostream>
using namespace std;
int main()
{
    int n;int flag=0;
    cin>>n;
    for (int i=2;i<n-1;i++)
    {
        if(n%i==0)
             flag++;


    }if(flag==0)
    cout<<"prime";
    else
        cout<<"not prime";
}
