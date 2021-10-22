#include<iostream>
using namespace std;

void solve(int arr[],int n)
{
   int m = (n*(n+1))/2 ;
   int hash[m]={0};
   map<int,pair<int,int>>mymap;

   for(int i=0;i<n;i++)
   {
       for(int j=i;j<n;j++)
       {
           sum= arr[i]+arr[j];
           mymap.insert(make_pair(sum,make_pair(i,j)));
           if(hash[sum]!=0)
           {
               cout<<"YES"<<endl;
               map<int,pair<int,int>>::iterator itr;
               for(itr=mymap.begin();itr!=mymap.end();itr++)
               {
                   if(itr->first==sum)
                    cout<<(itr->second).first<<(itr->second).second<<i<<j<<endl;
                    break;
               }
           }
           hash[sum]++;
       }
   }


}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    solve(arr,n);
    return 0;
}