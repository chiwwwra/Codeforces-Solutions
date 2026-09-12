#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c,v0,v1,a,l;
    cin>>c>>v0>>v1>>a>>l;
    int pages=v0;
    int d=1;
    while(pages<c)
    {   
        d++;
        pages-=l;
        int speed=min(v0+(d-1)*a,v1);
        pages+=speed;
    }
    cout<<d<<'\n';
    return 0;
}