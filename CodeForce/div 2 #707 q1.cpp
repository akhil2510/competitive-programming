#include<bits/stdc++.h>
using namespace std;

int solve(int n,int tm[],vector<pair<int,int>> v)
{
    int i=0;
    
    vector<pair<int,int>>::iterator itt=v.begin();
    int ans =itt->first;
    
    for(vector<pair<int,int>>::iterator it=v.begin();it!=v.end();it++)
    {
       int a= it->first;
       int b= it->second;
       int c = ceil((b-a)/2) ;
       ans = ans+ c + tm[i++];
    }
  return ans;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        vector<pair<int,int>> v;
        while(n--)
        {
            int a,b;
            cin>>a>>b;
            v.push_back(make_pair(a,b));
        }
        int tm[n];
        for(int i=0;i<n;i++)
         cin>>tm[i];
        cout<<solve(n, tm,v);
        return 0;
    }
}
