#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int n=str.length();
    char key=str[0];
    int count=1,ans=INT_MIN;
    for(int i=1;i<n;i++)
    {
        if(str[i]==key)
        {
            count++;
        }
        else{
            ans=max(ans,count);
            count=1;
            key=str[i];
        }
    }
    cout<<max(ans,count);
}