#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    /*vector<pair<ll,bool>> cu;
    for(ll i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        cu.push_back(make_pair(a,true));
        cu.push_back(make_pair(b,false));
    }
    sort(cu.begin(),cu.end());
    ll ans=0,res=0;
    for(ll i=0;i<cu.size();i++)
    {
        if(cu[i].second==true)
        {
            ans++;
            res=max(ans,res);
        }
        else
        {
            ans--;
        }
    }
    cout<<res;*/
    int arr[8]={1,2,3,4,5,6};
    cout<<arr[2]<<" "<<arr[6]<<" "<<arr[8];
}