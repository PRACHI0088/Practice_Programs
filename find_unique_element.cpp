#include<iostream>
using namespace std;

   int unique(int a[],int n);
   
void inputarray(int a[],int n)
{
	for(int i=0;i<n;i++)
	cin>>a[i];
}

 int main()
 { int n,a[100];
   cout<<"enter n"<<endl;
   cin>>n;
   cout<<"enter the array elements (only one unique, rest all same):"<<endl;
   inputarray(a,n);
   
   cout<<"the unique element is:"<<endl;
     cout<<unique(a,n)<<endl;
   
   return 0;
 }
 
   int unique(int a[],int n)
   {  int s=0;
   	   for(int i=0;i<n;i++)
   	   { 
   	      s=s^a[i];
       }
	 return s;
   }
 
 
 