#include<iostream>
using namespace std;

bool pal(string s,int st,int en){
    if(st > en)
        return true;
    if(s[st]!=s[en])
        return false;
    return pal(s,st+1,en-1);
}

int main(){
    string s;
    cout<<"Input a word to check for palindrome :";
    cin>>s;
    if(pal(s,0,s.size()-1))
        cout<<"The entered word is a palindrome";
    else
        cout<<"The entered word is not a palindrome";
}