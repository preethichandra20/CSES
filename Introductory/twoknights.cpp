#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    cout<<"0"<<endl;
    ll in=0,count=0;
    for(ll i=2;i<=n;i++)
    {
            ll key=(i*i);
            ll flag=(key*(key-1))/2;
            ll ans=flag-(8*in);
            count++;
            in+=count;
            cout<<ans<<endl;

    }
}