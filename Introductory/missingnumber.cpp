#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll miss=0,sum=(n*(n+1))/2;
    for(ll i=1;i<n;i++)
    {
        ll a;
        cin>>a;
        miss+=a; 
    }
    cout<<sum-miss;
}