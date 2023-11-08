#include<iostream>
using namespace std;

int getmax(int a[],int n);
int getmin(int a[],int n);

int main()
{  int n,a[10],greater,smaller;
   
   cout<<"enter n"<<endl;
   cin>>n;
   cout<<"now enter the array elements:"<<endl;
   for(int i=0;i<n;i++)
   {
   	cin>>a[i];
   }
greater=getmax(a,n);
smaller=getmin(a,n);

	cout<<"Maximum Element is :"<<greater<<endl;
	cout<<"Minimum Element is :"<<smaller<<endl;

}


int getmax(int a[],int n)  // MAXIMUM ELEMENT
{   int maxi=INT_MIN;
   	for(int i=0;i<n;i++)
		maxi=max(maxi,a[i]);
return maxi;
}


int getmin(int a[],int n)  // MINIMUM ELEMENT
{   int mini=INT_MAX;
   	for(int i=0;i<n;i++)
        mini=min(mini,a[i]);
        return mini;
}