#include <bits/stdc++.h>
using namespace std;
#define ll long long 

const int maxN = 100001;
int arr[maxN];
int st[4*maxN],lazy[4*maxN];


void build(int si,int ss,int se,int qs,int qe)
{
   if(ss==se)
     st[si]=0;
   int mid = (ss+se)/2 ;

   build(2*si,ss,mid,qs,qe);
   build(2*si+1,mid+1,se,qs,qe);
   st[si] = 0;
}
int 



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin>>n>>q;
    build(1,1,n);
    int c;
    while(q--)
    {
        cin>>c;
        if(c==0)
        {
            int l,r;
            cin>>l>>r;
            cout<<update(1,1,n,l,r)<<endl;
        }
        else
        {
            int l,r;
            cin>>l>>r;
            cout<<divisibleByThree(1,1,n,l,r)<<endl;
        }
    }
	return 0;
}