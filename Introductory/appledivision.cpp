#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll sum=0;
    vector<ll> A;
    for(ll i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        sum+=a;
        A.push_back(a);
    }
    sort(A.begin(),A.end());
    ll res=A[1]-A[0],minVal=A[0];
    for(ll i=1;i<n;i++)
    {
        res=max(res,A[i]-minVal);
        minVal=min
    }
    cout<<result;
}