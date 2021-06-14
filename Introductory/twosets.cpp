#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll total=(n*(n+1))/2;
    if(total%2!=0)
    cout<<"NO";
    else{
        cout<<"YES"<<endl;
        if(n%2==0)
        {
            ll noe=n/2;
            cout<<noe<<endl;
            ll nt=noe/2;
            ll left=1,right=n;
            while(nt--)
            {
                cout<<left<<" "<<right<<" ";
                left++;
                right--;
            }
            nt=noe/2;
            cout<<endl;
            cout<<noe<<endl;
            while(nt--)
            {
                cout<<left<<" "<<right<<" ";
                left++;
                right--;
            }
        }
        else{
            ll noe=n/2;
            cout<<n-noe<<endl;
            ll nt=(n-noe)/2;
            ll left=1,right=n-1;
            while(nt--)
            {
                cout<<left<<" "<<right<<" ";
                left++;
                right--;
            }
            cout<<endl;
            nt=noe/2;
            cout<<noe<<endl;
            while(nt--)
            {
                cout<<left<<" "<<right<<" ";
                left++;
                right--;
            }
            cout<<n<<" ";
        }
    }
}