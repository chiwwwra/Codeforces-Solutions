#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h;
    cin>>n>>h;
    int ansW=0;
    while(n--)
    {
        int a;
        cin>>a;
        if(a>h) ansW+=2;
        else ansW+=1;
    }
    cout<<ansW<<'\n';
    return 0;
}