#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<string> permutations(string s,ll l,ll r)
{
    vector<string> result;
    if(l==r)
    {
        return {s};
    }
    for(ll j=l;j<=r;j++)
    {
        swap(s[l],s[j]);
        vector<string>temp=permutations(s,l+1,r);
        swap(s[j],s[l]);
        result.insert(result.end(),temp.begin(),temp.end());
    }
    return result;
}
int main()
{
    string s;
    cin>>s;
    ll n=s.length();
    vector<string> result=permutations(s,0,n-1);
    map<string,int> mp;
    for(ll i=0;i<result.size();i++)
    {
        mp[result[i]]++;
    }
    cout<<mp.size()<<endl;
    for(auto itr=mp.begin();itr!=mp.end();itr++)
    cout<<itr->first<<endl;
}