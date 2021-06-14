#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    vector<ll> A;
    for(ll i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        A.push_back(a);
    }
    ll count=0;
    for(ll i=1;i<n;i++)
    {
        if(A[i]<A[i-1])
        {
            count+=A[i-1]-A[i];
            A[i]=A[i-1];
        }
    }
    cout<<count;
}