//find the no. of occurance of "4" in givn no.
#include<iostream>
using namespace std;
int main()
{ long int t,n,r,count=0;
cout<<"enter the test cases:\n";
cin>>t;
while(t--)
{   cout<<"\n enter the number:\n";
    cin>>n;
    count=0;
    while(n!=0)
      { r=n%10; 
	    n=n/10;
        if(r==4)
        count++;
      }
cout<<"\n no. of occurance of 4 in the given number is: \n";
cout<<count;
}
	return 0;
}