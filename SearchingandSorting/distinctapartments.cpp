#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll> apl;
    vector<ll> apt;
    for(ll i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        apl.push_back(a);
    }
    for(ll i=0;i<m;i++)
    {
        ll a;
        cin>>a;
        apt.push_back(a);
    }
    ll res=0;
    sort(apt.begin(),apt.end());
    sort(apl.begin(),apl.end());
    ll i=0,j=0;
    while(i<n && j<m)
    {
        if(abs(apl[i]-apt[j])<=k)
        {
            res++;
            i++;
            j++;
        }
        else if(apl[i]<apt[j])
        i++;
        else
        j++;
    }
    cout<<res;
}
