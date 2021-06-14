#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,x;
    cin>>n>>x;
    vector<ll> A(n);
    for(ll i=0;i<n;i++)
    cin>>A[i];
    sort(A.begin(),A.end());
    ll left=0,right=n-1,res=0;
    while(left<=right)
    {
        if(left==right)
        {
            if(A[left]<=x)
            res++;
            left++;
        }
        else{
        if(A[left]+A[right]<=x)
        {
            res++;
            left++;
            right--;
        }
        else if(A[left]+A[right]>x)
        {
            if(A[right]<=x)
            res++;
            right--;
        }
        else
        left++;
        }
    }
    cout<<res;
}