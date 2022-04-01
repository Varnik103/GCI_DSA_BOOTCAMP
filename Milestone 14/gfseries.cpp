#include<iostream>
using namespace std;

void gfSeries(int N)
    {
        long long int a1=0,a2=1;
        cout<<a1<<" "<<a2<<" ";
        series(N-2,a1,a2);
        cout<<endl;
        // Write Your Code here
        
    }
    void series(int n,long long int a1,long long int a2)
    {
        if(n==0)
            return;
        else
        {
            long long int term=a1*a1-a2;
            cout<<a1*a1-a2<<" ";
            series(n-1,a2,a1*a1-a2);
        }
    }