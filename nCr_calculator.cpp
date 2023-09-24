// to find nCr (no. of combinations) using recursion function. 'n' and 'r' are given by the user. 
#include<iostream>
using namespace std;
  
	int fact(int p) //factorial function
	{
		int f=1;
		for(int i=1;i<=p;i++)
		{
			f=f*i;
		}
		return f;
	}
	
	
	void ncr(int n,int r) //nCr function
	{
		int num,d,ans=1;
		num=fact(n);
		d=fact(r)*fact(n-r);
		ans=num/d;
		cout<< ans;
	}
int main()
{	int n,r;
	cout<<"enter the value of n: \n";
	cin>>n;
	cout<<"enter the value of r: \n";
	cin>>r;
	cout<<"the nCr value is equal to: ";
	ncr(n,r);
		return 0;
}
