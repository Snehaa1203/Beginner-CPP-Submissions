#include <bits/stdc++.h>
using namespace std;
void filterChars(char *str,int no){
    int i=0;
    while(no>0){
        no&1!=0?cout<<str[i]:cout<<"";
        i++;
        no=no>>1;
    }
    cout<<endl;
}
void generateSubsets(char *str){
    //Generate a range of numbers from 0 to 2^n -1
    int n=strlen(str);
    int range=(1<<n)-1;
    for(int i=0;i<=range;i++){
        filterChars(str,i);
    }
}
int main() {
    char str[10];
    cin>>str;
 
    generateSubsets(str);
}
