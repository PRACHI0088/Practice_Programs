// FLOW007: Codechef: Given an Integer N, write a program to reverse it.
#include<iostream>
using namespace std; 
int main()
{ long int t,r,n,rev=0;
 cout<<"enter the number of test cases:\n";
 cin>>t;
 while(t--)
 { cout<<"\n enter the number to be reversed:\n";
   cin>>n;
   rev=0;
    while(n!=0)
	{  r=n%10;
	   n=n/10;
	   rev=(rev*10)+r;
	}
	cout<<"\n the reversed number is: \n";
	cout<<rev<<"\n";
 }
  return 0;
}