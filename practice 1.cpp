#include<bits/stdc++.h>
using namespace std;

int main()
{
	string application_number;
	string roll_number;
	int k;
	cin>>application_number;
	cin>>k;
	int n = application_number.length();
	int j;
	for(int i=0;i<n;i++)
	{
		j = (i+k)%n ;
		roll_number += application_number[j];
	}
	int ans = stoi(roll_number);
	cout<< ans ;
	return 0;
}

