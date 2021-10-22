#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
#define BLOCK 555
struct query{
    int l,r,i;
}
query Q[200001];
int ar[30001],ans[200001],fre[1000001];
int cnt=0;

bool comp(query a,query b)
{
    if(a.l/BLOCK != b.l/BLOCK)
      return a.l/BLOCK < b.l/BLOCK ;
    return a.r<b.r;
}
void add(int pos)
{
    fre[ar[pos]]++;
    if(fre[sr[pos]]==1) cnt++;
}
void remove(int pos)
{
    fre[ar[pos]]--;
    if(fre[ar[pos]]==0)
     cnt--;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int n,q;
    cin>>n;
    for(int i=0;i<n;i++) cin>>ar[i];
    cin>>q;
    while(q--)
    {
      cin>>Q[i].l>>Q[i].r;
      Q[i].i = i ,Q[i].l--,Q[i].r--;
    }
   sort(Q,Q+q,comp);
   int ML=0,MR=-1;
   for(int i=0;i<q;i++)
   { 
     int L =Q[i].l;
     int R = Q[i].r;
     while(ML>L)
      ML--,add(ML);
     while(MR<R)
       MR++,add(MR);
     while(ML<L)
       remove(ML),ML++;
      while(MR>R)
        remove(MR),MR--;
      ans[Q[i].i]=cnt;
   }
    for(int i=0;i<q;i++)
    cout<<ans[i]<<endl;
	return 0;
}


