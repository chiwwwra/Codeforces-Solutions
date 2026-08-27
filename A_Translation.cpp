#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    int start=0,end=s.length()-1;
    while(start<end)
    {
        swap(s[start++],s[end--]);
    }
    if(s==t) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}