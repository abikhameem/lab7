
#include<iostream>  //load the library 

using namespace std;   //namespace

int reverse(int n)    //recursive function for reversing a number
 {
	 if(n==0)
	          return 1;

	 else
	  {
		  cout<<n%10;    //prints the units digit
		  n=n/10;        //variable n now stores the number without the former ones digit i.e, if number was 1234 now variable n stores 123  
		  reverse(n);    //recursion of the function
		  return 0;
	  }
 }

int main()    //using main function
 {
	 //variable declaration
	 int n;
	 //asks user for the input of the number
	 cout<<"Enter the number: "<<endl;
	 //accepts the input 
	 cin>>n;
	 cout<<"Reverse number: "<<endl;
	 reverse(n);
         cout<<endl;
	 //closing
	 
	 return 0;
}
