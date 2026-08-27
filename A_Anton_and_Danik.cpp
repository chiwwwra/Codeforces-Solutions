#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ant=0,dan=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='A') ant++;
        else dan++;
    }
    if(ant>dan) cout<<"Anton"<<'\n';
    else if(ant<dan) cout<<"Danik"<<'\n';
    else cout<<"Friendship"<<'\n';
    return 0;
}