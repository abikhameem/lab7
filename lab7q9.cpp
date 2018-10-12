//to find the factorial of entered number
#include<iostream>
using namespace std;
//return something function prototype
long factorial(int);
//start function
int main()
   {
	   //declare varibles
	   int p;
	   cout<<"enter the value of p ";
	   cin>>p;
	   //function calling
	   factorial(p);
	   cout<<"factorial of no "<<p<<" is "<<factorial(p)<<endl;
	   return 0;
   }
   
  long factorial(int p){
     if (p==0)
	 return 1;
	 else	 
     return (p*factorial(p-1));
 
  }
       
