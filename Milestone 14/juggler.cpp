#include<bits/stdc++.h>
using namespace std;

vector<int> jugglerSequence(int N){
        vector<int> v;
        v.push_back(N);
        if(N==1){
            return v;
        }
        double ans;
        if(N%2==0){
            ans=pow(N,0.5);
        }
        else{
            ans=pow(N,1.5);
        }
        vector<int> answer=jugglerSequence(int(ans));
        for(int i=0;i<answer.size();++i)
            v.push_back(answer[i]);
        return v;
    }