#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    while(k--)
    {
        int unit=n%10;
        if(unit!=0) n--;
        else
            n/=10;
    }
    cout<<n<<endl;
    return 0;
}