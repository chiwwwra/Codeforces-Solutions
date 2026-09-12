#include<bits/stdc++.h>
using namespace std;


int main()
{
    double n;
    cin>>n;
    int k=n;
    if(n!=k)
    {
        cout<<"float"<<" "<<k<<" "<<n-k<<'\n';
    }
    else
    {
        cout<<"int"<<" "<<k<<'\n';
    }
    return 0;
}