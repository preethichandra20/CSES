#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    string s;
    cin>>s;
    ll n=s.length();
    map<char,ll> mp;
    for(ll i=0;i<n;i++)
    {
        mp[s[i]]++;
    }
    ll nooc=0,flag=1;
    for(auto itr=mp.begin();itr!=mp.end();itr++)
    {
        if(itr->second%2!=0)
        nooc++;
    }
    if(n%2==0 && nooc!=0)
    flag=0;
    else if(n%2!=0 && nooc>1)
    flag=0;
    if(flag==0)
    cout<<"NO SOLUTION";
    else{
        string result="";
        char oc;
        ll freq=0;
        for(auto itr=mp.begin();itr!=mp.end();itr++)
        {
            if((itr->second)%2==0)
            {
            ll key=(itr->second)/2;
            while(key--){
                result+=itr->first;
              }
            }
            else{
                oc=itr->first;
                freq=itr->second;
            }
        }
        ll p=freq;
        while(p>0)
        {
            result+=oc;
            p--;
        }
        string temp=result;
        ll l=temp.length();
        for(ll i=l-freq-1;i>=0;i--)
        result+=temp[i];
        cout<<result;
    }
}