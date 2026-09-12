#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int count=1;
    bool flag=1;
    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
            if(count>=7)
            {
                flag=0;
                cout<<"YES"<<'\n';
                break;
            }
        } 
        else count=1;
    }
    if(flag) cout<<"NO\n";
    return 0;
}