#include<bits/stdc++.h>
using namespace std;

void copy(char a[],char b[],int i){
    b[i]=a[i];
    if(a[i]=='\0'){
        return;
    }
    copy(a,b,i+1);
}

int main(){
    char s[20];
    cout<<"Enter a string"<<endl;
    cin>>s;
    char st[20];
    copy(s,st,0);
    cout<<"The first string is : "<<s<<endl;
    cout<<"The copied string is : "<<st<<endl;
}