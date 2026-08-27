#include<bits/stdc++.h>
using namespace std;

int main()
{
    int b,d,w;
    cin>>b>>d>>w;
    int i=1;
    int sum=0;
    while(i<=w)
    {
        sum+=i*b;
        i++;
    }
    if(sum>d)
    {
        cout<<sum-d<<endl;
    }
    else cout<<0<<endl;
    return 0;
}