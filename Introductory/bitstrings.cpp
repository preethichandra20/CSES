#include<bits/stdc++.h>
#define ll unsigned long long int
#define M 1000000007
using namespace std;
ll pow(ll n)
{
    ll ans=1;
    while(n--)
    {
        ans=(ans%M)*(2%M);
    }
    return ans%M;
}
int main()
{
    ll n;
    cin>>n;
    cout<<pow(n);
}