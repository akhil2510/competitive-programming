#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define loop(i,a,b) for(ll i=a;i<=b;i++)
#define endl '\n'

#define maxN 200001
ll st[4*maxN],arr[maxN];

void build(ll v, ll tl, ll tr) {
    if (tl == tr) {
        st[v] = arr[tl];
    } else {
        ll tm = (tl + tr) / 2;
        build( v*2, tl, tm);
        build( v*2+1, tm+1, tr);
        st[v] = st[v*2] + st[v*2+1];
    }
}

void update(ll v, ll tl, ll tr, ll pos, ll new_val) {
    if (tl == tr) {
        st[pos] = new_val;
    } else {
        ll tm = (tl + tr) / 2;
        if (pos <= tm)
            update(v*2, tl, tm, pos, new_val);
        else
            update(v*2+1, tm+1, tr, pos, new_val);
        st[v] = st[v*2] + st[v*2+1];
    }
}

ll getmin(ll si,ll ss,ll se,ll qs,ll qe)
{
	if(ss>qe||se<qs) return INT_MAX;
	
	if(ss>=qs && se<=qe) return st[si];
	
	ll mid = (ss+se)/2 ;
	return min(getmin(2*si,ss,mid,qs,qe),getmin(2*si+1,mid+1,se,qs,qe));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    ll n,q;
	cin>>n>>q;
	
	loop(i,1,n)cin>>arr[i];
	build(1,1,n);
	while(q--)
	{
		ll p;
		cin>>p;
		if(p==1)
		{
           ll k,u;
		   cin>>k>>u;
		   update(1,1,n,k,u);
		}
		else
		{
		   ll a,b;
		   cin>>a>>b;
		   cout<<getmin(1,1,n,a,b)<<endl;
		}
	}
	return 0;
}



