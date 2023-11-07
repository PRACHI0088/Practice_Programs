//to check if given no. is prime number or not.
#include<iostream>
using namespace std;


int main()
{  int n,flag=0;
  cout<<"enter n"<<endl;
  cin>>n;
        for(int i=2;i<n;i++)
       {
              if(n%i==0)
               flag=1;
        }
      if(flag==1)
      cout<<"NOT Prime   0"<<endl;
      //return 0;
      else
      cout<<"Prime   1"<<endl;
	  //return 1;
  return 0;
        // code here
    }