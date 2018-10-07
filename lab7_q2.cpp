
//Display should be like 1 2 3 4 5.....n
#include<iostream>   //load the library 

using namespace std;    //namespace

int natgen(int n,int i)      //recursive function that generates natural numbers
{
	if(i>n)
		return 1;
	else
	{
		cout<<i<<endl;
		natgen(n,++i);
		return 0;
	}
}

int main()    //using main function
{
    int n;   //variable declaration
    //asks user for input of the limit of the sequence
    cout<<"Enter the number upto which the sequence is to be displayed: "<<endl;
    cin>>n;
    //displays the sequence of natural numbers
    cout<<"Sequence:"<<endl;
    natgen(n,1);
    //return statement
    return 0;
}
