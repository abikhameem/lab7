
#include<iostream>   //load the library 

using namespace std;   //namespace

int sum(int n,int i)    //recursive function to generate sum
{
	if(i==n)
	  return 1;

	else
	  return i+sum(n,++i);        //function call to itself
}

int main()   //using main function
{
	//variable declaration
	int n;
	//asks user for the natural number upto which the sum is to be calculated
	cout<<"Enter number upto which sum is to be calculated: "<<endl;
	cin>>n;
        //displays the sum
	cout<<"Sum: "<<sum(n,1)<<endl;
	//return statement
	return 0;
}
