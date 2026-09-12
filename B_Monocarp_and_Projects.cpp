#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x,y,k;
        cin>>x>>y>>k;
        long long temp=k;
        long long mono=0;
        long long count=0;
        long long d=y-x;
        while(x<=d && count<k)
        {
            mono+=(y%x);
            count++;
            y++,x++;
        }
        if(k-count>0)
            cout<<mono+(k-count)*d<<"\n";
        else
            cout<<mono<<"\n";
    }
    return 0;
}