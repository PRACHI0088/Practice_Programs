//to print all the subarrays.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	vector<int> a(n);
	cout<<"enter array size: \n";
	cin>>n;
	cout<<"enter elements: \n";
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	cout<<"the subarrays are: \n";
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n
		;j++)
		{  	for(int k=i;k<=j;k++)
    		{
			cout<<a[k]<<" ";
			}
			cout<<endl;
		}
	}
	
}