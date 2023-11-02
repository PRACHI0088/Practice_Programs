#include<iostream>
using namespace std;

int sum(int m, int n)
{ 
	if(n==0)
	return m;
	else
	 return sum(m+1,n-1);
}

int main()
{
	int n,m,c=0;
	n=0;
	m=0;
	cout<<"enter a number"<<endl;
	cin>>m;
	
	cout<<"enter 2nd number"<<endl;
	cin>>n;
	c=sum(m,n);
	cout<<"sum is:"<<c;
	return 0;
}