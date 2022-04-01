#include<bits/stdc++.h>
using namespace std;

void helper(string S,string s,int i,vector<string>& v){
    if(i>=S.size()){
        v.push_back(s);
        return ;
    }
    helper(S,s+S[i],i+1,v);
    helper(S,s+" "+S[i],i+1,v);
}

vector<string>  spaceString(char str[]){
    string S="";
    for(int i=0;str[i]!='\0';i++)
        S+=str[i];
    string s="";
    s+=S[0];
    vector<string> v;
    helper(S,s,1,v);
    return v;
}
