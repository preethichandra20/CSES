#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll l,r;
        cin>>l>>r;
        if((l+r)%3==0 && min(l,r)*2>=max(l,r))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}