#include<iostream>
using namespace std;

char Capital(string s){
    if(s.size()==0)
        return '?';
    if(isupper(s[0]))
        return s[0];
    return Capital(s.substr(1));
}

int main(){
    string s;
    cout<<"Enter a string containing one or more Capital letters"<<endl;
    cin>>s;
    cout<<"The first capital letter appears int the string "<<s<<" is:"<<Capital(s);    
}