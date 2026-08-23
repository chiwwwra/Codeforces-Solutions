#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    int n=a.length();
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        if(tolower(a[i])<tolower(b[i]))
        {
            cout<<"-1"<<endl;
            flag=true;
            break;
        }
        else if(tolower(a[i])>tolower(b[i]))
        {
            cout<<"1"<<endl;
            flag=true;
            break;
        }
    }
    if(flag==false)
    {
        cout<<"0"<<'\n';
    }
    return 0;
}