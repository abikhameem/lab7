//to find the sum of all digit of a number
#include<iostream>
using namespace std;
//return something function prototype
int sum(int);
//start function
int main()
   {
	   //declare varibles
	   int p;
	   cout<<"enter the value of p ";
	   cin>>p;
	   //function calling
	   sum(p);
	   cout<<sum(p)<<endl;
	   return 0;
   }
   
  int sum(int p){
     if (p==0)
	 return 0;
	 else	 
     return (p%10+sum(p/10));
     
  }
       
