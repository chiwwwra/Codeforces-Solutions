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
        int count=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            arr[i]=a;
            if(a==0) count++;
        }
        if(count<2)
        {
            cout<<"-1\n";
        }
        else if(arr[0]==0 && arr[n-1]==0)
        {
            cout<<"0\n";
        }
        else if((arr[0]==0 && arr[n-1]!=0) || (arr[0]!=0 && arr[n-1]==0)) cout<<"1\n";
        else cout<<"2\n";
    }
    return 0; 
}