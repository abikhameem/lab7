
#include<iostream>   //load the library

using namespace std;   //using namespace 

int gen(int n,int i)      //recursive function to generate odd and even numbers separately within a given range
{
	if(i>n)
	        return 1;
	else
	{
		cout<<i<<endl;
		i+=2;
		gen(n,i);
		return 0;
	}
}

int main()    //using main function
{
	//variable declaration
	int n;
	//asks user for input of the range
	cout<<"Enter the limit of the range: "<<endl;
	cin>>n;
	//displays the series of odd and even numbers
	cout<<endl;
	cout<<"Even series: "<<endl;
	gen(n,0);
	cout<<endl;
	cout<<"Odd series: "<<endl;
	gen(n,1);
	//return statement
	return 0;
}
