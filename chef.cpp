#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    while(t--)
    {
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        char ch;
        int maxi=INT_MIN;
        unordered_map<char,int>m;
        for(int i=0;i<n;i++)
        {
            int temp=maxi;
            m[a[i]]++;
            maxi=max(maxi,m[a[i]]);
            if(maxi!=temp)
            {
                ch=a[i];
            }
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(b[i]==ch) count++;
        }
        if(maxi>(n/2) && count>(n/2)) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}
