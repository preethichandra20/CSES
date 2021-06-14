#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    multiset<ll,greater<int>> tic;
    ll cus;
    for(ll i=0;i<n;i++)
    {
        ll ticket;
        cin>>ticket;
        tic.insert(ticket);
    }
    for(ll i=0;i<m;i++)
    {
        cin>>cus;
        auto itr=tic.lower_bound(cus);
        if(itr==tic.end())
        {
            cout<<"-1"<<endl;
        }
        else{
            cout<<*itr<<endl;
            tic.erase(itr);
        }
    }
}