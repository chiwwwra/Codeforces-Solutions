#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    int count=0;
    while(n>0)
    {
        int digit=n%10;
        if(digit==4 || digit==7)
        {
            count++;
        }
        n/=10;
    }
    if(count!=0 && (count==7 || count==4)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}