#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            arr[i]=a;
        }
        bool fone=0;
        for(int i=0;i<n;i++)
        {
            if(fone==0 && arr[i]==-1)
            {
                arr[i]=1;
                break;
            }
            if(arr[i]==1) 
            {
                fone=i;
                break;
            }
        }
        int lone=0;
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i]==-1 && lone==0)
            {
                arr[i]=1;
                break;
            }
            if(arr[i]==1)
            {
                lone=i;
                break;
            }
        }
        int s=fone,e=lone;
        for(int i=fone+1;i<lone;i++)
        {
            if(arr[i]==-1) arr[i]=0;
        }
        // int count=0;
        // for(int i=fone+1;i<lone;i++)
        // {
        //     if(arr[i]==1)
        //     {
        //         if(abs(i-fone)<=abs(i-lone)) fone=i;
        //         else
        //         {
        //             lone=i;
        //             break;
        //         }
        //     }
        // }
        // for(int i=fone;i<=lone;i++)
        // {
        //     cout<<arr[i]<<' ';
        // }
        // cout<<'\n';
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<' ';
        }
        cout<<'\n';
    }
    return 0;
}