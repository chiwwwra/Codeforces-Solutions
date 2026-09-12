#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long ans=1;
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    ans*=a%100;
    ans*=b%100;
    ans*=c%100;
    ans*=d%100;
    if(ans%100<10) cout<<'0'<<ans%100<<'\n';
    else
        cout<<ans%100<<'\n';
    return 0;
}