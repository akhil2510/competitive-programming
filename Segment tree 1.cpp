#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define maxN 100001
pair<int,int> st[4*maxN];
int val[maxN];


void build(int si,int ss,int se)
{
   if(ss==se)
   {
       if(val[ss]%2==1)
         st[si]={1,0};
       else
         st[si]={0,1};
      return ;
   }
   int mid =(ss+se)/2 ;
   build(2*si,ss,mid);
   build(2*si+1,mid+1,se);

   st[si].first = st[2*si].first +st[2*si+1].first;
   st[si].second = st[2*si].second +st[2*si+1].second;

}
void update(int si,int ss,int se,int qi,int newVal)
{
   if(ss==se)
   {
       if(val[ss]%2==1)
         st[si]={0,1};
       else
         st[si]={1,0};
       val[ss]=newVal;
      return ;
   }
   int mid =(ss+se)/2 ;
   if(qi<=mid)
   update(2*si,ss,mid,qi,newVal);
   else
    update(2*si+1,mid+1,se,qi,newVal);

   st[si].first = st[2*si].first +st[2*si+1].first;
   st[si].second = st[2*si].second +st[2*si+1].second;

}
int getEven(int si,int ss,int se,int qs,int qe)
{
    if(ss>qe || se<qs) return 0;
    if(ss>=qs && se<=qe)
       return st[si].second;
    int mid = (ss+se)/2 ;

    int l =getEven(2*si,ss,mid,qs,qe);
    int r =getEven(2*si+1,mid+1,se,qs,qe);
     return l+r;
}
int getOdd(int si,int ss,int se,int qs,int qe)
{
    if(ss>qe || se<qs) return 0;
    if(ss>=qs && se<=qe)
       return st[si].first;
    int mid = (ss+se)/2 ;

    int l =getOdd(2*si,ss,mid,qs,qe);
    int r =getOdd(2*si+1,mid+1,se,qs,qe);
     return l+r;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++) cin>>arr[i];
     
    build(1,1,n);
    cin>>q;
    int c,l,r;
    while(q--)
    {
        cin>>c;
        if(c==0)
        {
            cin>>l>>r;
            if((val[l]%2)==(r%2)) continue;
            else
               update(1,1,n,l,r);
        }
        else if(c==1)
        {
            cin>>l>>r;
            cout<<getEven(1,1,n,l,r)<<endl;
        }
        else
        {
            cin>>l>>r;
            cout<<getOdd(1,1,n,l,r)<<endl;
        }
    }
  
	return 0;
}