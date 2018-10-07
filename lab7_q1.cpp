
#include<iostream>   //load the library

using namespace std;

//recursive function to find power of a number passed as an argument
int power(int n,int m,int i)
{
	if(i==0)                         //condition for stopping the recursion at a point
	  return 1;
	else
	  return n*power(n,m,--i);    //calls back the same function 
}

int main()   //using mainfunction
{
	//variable declaration
	int n,m;
	//asks user for the input of the number
	cout<<"Enter the number: "<<endl;
	cin>>n;
	cout<<"Enter the power to be raised to: "<<endl;
	cin>>m;
	//displays the result
	cout<<"Result: "<<power(n,m,m)<<endl;
	//return statement
	return 0;
}
