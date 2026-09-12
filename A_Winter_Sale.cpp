#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,p;
    cin>>x>>p;
    float ans=((1.0*100*p)/(100-x));
    cout<<fixed<<setprecision(2)<<ans<<'\n';
    return 0;
}