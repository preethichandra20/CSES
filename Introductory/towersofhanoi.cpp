#include<bits/stdc++.h>
#define ll long long
using namespace std;
void toh(ll n,ll start,ll aux,ll dest)
{
    if(n==0)
    return;
    toh(n-1,start,dest,aux);
    cout<<start<<" "<<dest<<endl;
    toh(n-1,aux,start,dest);

}
int main()
{
    ll n;
    cin>>n;
    cout<<pow(2,n)-1<<endl;
    toh(n,1,2,3);
}