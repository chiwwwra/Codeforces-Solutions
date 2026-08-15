#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int t=0;
    while(n--)
    {
        string s;
        cin>>s;
        if(s=="++X" || s=="X++")
        {
            t++;
        }
        else
        {
            t--;
        }
    }
    cout<<t<<endl;
}