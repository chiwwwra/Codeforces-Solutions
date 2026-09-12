#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int sum=0;
        for(int i=0;i+k-1<s.length();i+=k)
        { 
            bool zero=false;
            for(int j=i;j<i+k;j++)
            {
                if(s[j]=='0')
                {
                    zero=true;
                    break;
                } 
            }
            if(!zero) sum++;
        } 
        cout<<sum<<"\n"; 
    }
    return 0;
}