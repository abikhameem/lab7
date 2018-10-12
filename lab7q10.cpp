//to print the n term of a fibonacci sequence
#include<iostream>
using namespace std;
//return something function prototype
int fibonacci(int);
//start function
int main()
   { 
	   int n;
	   //declare varibles
	   int first,second;
	   cout<<"enter the no of term ";
	   cin>>n;
	   //function calling
	   fibonacci(n);
	   cout<<"the "<<n<<"th term of fibonacci sequence is "<<fibonacci(n)<<endl; 
	   return 0;
   }
   
  int fibonacci(int n){
	  
     if (n==1 || n==2)
	 return 1;
	 else	 
     return (fibonacci(n-1)+fibonacci(n-2));
 
  }
       
