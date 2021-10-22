#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define max 1000002

void Prime();
void DigitPrime();
ll prime[max];
ll dprime[max];

void Prime()
{
  ll i,j,m;
  m = (ll) sqrt(max);
  memset(prime,1,sizeof(prime));
  prime[0]=prime[1]=0;
  for(i=2;i<=m;i++)
  {
  	if(prime[i])
  	{
  		for(j=i+i;j<max;j+=i)
  		 prime[j]=0;
	  }
  }
	
}
void DigitPrime()
{
	ll i,n,x,sum;
	x=0;
	for(i=2;i<max;i++)
	{
		if(prime[i])
		{
			sum=0;
			n=i;
			while(n>9)
			{
				sum += n%10 ;
				n/=10;
			}
			sum += n;
			if(prime[sum])
			   x +=1;
		}
		dprime[i]=x;
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Prime();
    DigitPrime();
    int t;
    cin>>t;
    while(t--)
    {
    	ll a,b;
    	cin>>a>>b;
    	cout<<dprime[b]-dprime[a-1]<<endl;
	}
	return 0;
}
