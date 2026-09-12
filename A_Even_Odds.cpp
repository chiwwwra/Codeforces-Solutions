#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;
    bool od=false;
    long long odd=1;
    long long even=2;
    if((n+1)/2>=k)
    {
        od=true;
        for(int i=2;i<=k;i++)
        {
            odd+=2;
        }
    }
    else
    {
        k-=(n+1)/2;
        for(int i=2;i<=k;i++)
        {
            even+=2;
        }
    }
    if(od)
    {
        cout<<odd<<'\n';
    }
    else cout<<even<<'\n';
}