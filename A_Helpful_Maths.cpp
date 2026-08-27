#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<int>temp;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='+')
        {
            int dig=s[i]-'0';
            temp.push_back(dig);
        }
    }
    sort(temp.begin(),temp.end());
    string ans="";

    for(int i=0;i<temp.size();i++)
    {
        ans=ans+char(temp[i]+'0');
        if(i!=temp.size()-1)
        {
            ans=ans+'+';
        }
    }
    cout<<ans<<endl;
}