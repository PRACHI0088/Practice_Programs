// FLOW006 Codechef: You're given an integer N. Write a program to calculate the sum of all the digits of N.s
#include<iostream>
using namespace std;
// n was 1<=n<= 1000000 in the QUESTION 
int main()
{ int n[100],t,r,s=0;
 cout<<"enter the total no. of test cases: \n:";
 cin>>t;
    for(int i=0;i<t;i++)
     { cout<<"enter no."<<endl;
       cin>>n[i];
     }
     for(int i=0;i<t;i++)
     {   s=0;
	      while(n[i]!=0)
        { r=n[i]%10;
          n[i]=n[i]/10;
          s=s+r;
		 }
		 cout<<"the sum of digit is:"<<s<<endl;  
	   }
}
