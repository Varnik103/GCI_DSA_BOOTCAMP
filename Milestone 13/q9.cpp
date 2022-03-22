#include<iostream>
using namespace std;

string reverse(string s){
    string str;
    if(s.size()==0)
        return str;
    string ans=reverse(s.substr(1));
    return ans+s[0];
}

int main(){
    string s;
    cout<<"Enter a string";
    cin>>s;
    cout<<reverse(s);
}