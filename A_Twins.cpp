#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>coins;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        sum+=a;
        coins.push_back(a);
    }
    int need=0;
    int ans=-1;
    sort(coins.begin(),coins.end(),greater<int>());
    for(int i=0;i<coins.size();i++)
    {   
        need+=coins[i];
        if(need>sum/2)
        {
            ans=i;
            break;
        }
    }
    cout<<ans+1<<'\n';
}