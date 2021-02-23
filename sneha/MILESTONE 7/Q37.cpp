#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s[10];  char a[10];
    gets(s);
    for(int i=0;i!='\0';i++)
    { if(s[i]=='1')
          {s[i]='0';}
    else if(s[i]=='0')
          {s[i]='1';}
    }
    cout<<s;

}
