#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    map<ll,ll> mp;
    for(ll i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        mp[a]++;
    }
    cout<<mp.size();
}
