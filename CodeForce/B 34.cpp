#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=0,b=0;
    string s;cin>>s;
    for(auto x:s)if(x=='4')a++;
    else if(x=='7')b++;
    if(a==0&&b==0)cout<<-1;
    else cout<<(a<b?7:4);
}
