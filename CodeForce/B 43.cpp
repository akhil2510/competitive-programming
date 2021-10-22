#include<bits/stdc++.h>
using namespace std;
#define int int64_t
int ar[100010];
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n,m;cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int x,y,z;cin>>x>>y>>z;
        set<int> ans;
        for(int i=1;i<4;i++)
        {
            ans.insert(i);
        }
        if(ar[x]!=0)
        {
            ans.erase(ar[x]);
        }
        else if(ar[y]!=0)
        {
            ans.erase(ar[y]);
        }
        else if(ar[z]!=0)
        {
            ans.erase(ar[z]);
        }
        if(ar[x]==0)
        {
            ar[x]=*ans.begin();
            ans.erase(ans.begin());
        }
        if(ar[y]==0)
        {
            ar[y]=*ans.begin();
            ans.erase(ans.begin());
        }
        if(ar[z]==0)
        {
            ar[z]=*ans.begin();
            ans.erase(ans.begin());
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(ar[i]==0)
        {
            cout<<"1 ";
        }
        else
        {
            cout<<ar[i]<<" ";
        }
    }
    cout<<"\n";
    return 0;
}

