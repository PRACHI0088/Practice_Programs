// TELLS THE NUMBER OF ELEMENTS IN THE ARRAY THAT ARE GREATER THAN 1000
// THE MAIN PURPOSE OF THIS CODE IS TO SEE THE ARRAY INITIALIZATION USING THE C++ TEMPLATE  
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{ int t,n,ct=0;
vector<int> a(n); // SEE THIS LINE PROPERLY
cout<<"enter no. of test cases: \n";
 cin>>t;
 while(t--)
 {   cout<<"enter array size: \n";
 	 cin>>n;
 	 cout<<"enter elements: \n";
     for(int i=0;i<n;i++)
     cin>>a[i];
     ct=0;
     for(int i=0;i<n;i++)
     {if(a[i]>=1000)
     ct++;
     }
     cout<<ct<<endl;
 }


	return 0;
}
