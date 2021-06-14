#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<string> graycode(ll n)
{
    if(n==0)
    return {"0"};
    if(n==1)
    return {"0","1"};
    vector<string> temp=graycode(n-1);
    vector<string> result;
    for(ll i=0;i<temp.size();i++)
    {
        result.push_back('0'+temp[i]);
    }
    for(ll i=temp.size()-1;i>=0;i--)
    {
        result.push_back('1'+temp[i]);
    }
    return result;
}
int main()
{
    ll n;
    cin>>n;
    vector<string> result=graycode(n);
    for(ll i=0;i<result.size();i++)
    cout<<result[i]<<endl;
}