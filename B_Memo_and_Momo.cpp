#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,k;
    cin>>a>>b>>k;
    if(a%k==0 && b%k==0) cout<<"Both\n";
    if(a%k==0 && b%k!=0) cout<<"Memo\n";
    if(a%k!=0 && b%k==0) cout<<"Momo\n";
    if(a%k!=0 && b%k!=0) cout<<"No One\n";
    return 0;
}