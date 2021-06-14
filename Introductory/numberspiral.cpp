#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll r,c;
        cin>>r>>c;
        if(r<c)
        {
            if(c%2==1)
            {
                ll x=c*c;
                cout<<(x-r+1)<<endl;
            }
            else{
                ll x=(c-1)*(c-1)+1;
                cout<<(x+r-1)<<endl;
            }
        }
        else{
            if(r%2==0)
            {
                ll x=r*r;
                cout<<(x-c+1)<<endl;
            }
            else{
                ll x=(r-1)*(r-1)+1;
                cout<<(x+c-1)<<endl;
            }
        }
    }
}