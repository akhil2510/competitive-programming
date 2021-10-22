#include<bits/stdc++.h>
using namespace std;
long long i,j,k,n,x,ans;
long long a[100009];
map<long long,long long>mp;
int main()
{
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x>>a[i];
        mp[x]++;
    }
    for(i=0;i<n;i++)
       cout<<n-1+mp[a[i]]<<" "<<n-1-mp[a[i]]<<endl;

    return 0;
}
