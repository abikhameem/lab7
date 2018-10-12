//to find sum of even or odd natural number of entered range
#include<iostream>
//include standard library
using namespace std;
//prototype of function
int sum(int,int);
//start by main function
int main(){
	//declare class of variables 
	int llimit,ulimit,addition;
	//print the the number
	cout<<"enter the value of lower and upper limit "<<endl;
	//store number in varible llimit and ulimit
	cin>>llimit>>ulimit;
	//function calling
	addition=sum(llimit,ulimit);
	//print the sum of all numbers in range llimit and ulimit 
	cout<<"the summation of even or odd  number is "<<addition<<endl;
	return 0;
}
//declare recursive function
int sum(int llimit,int ulimit){
	//add base condition
	if(llimit<ulimit){
		//function recursion
	return (sum(llimit+2,ulimit) +llimit);
                     }
	 else 
	 return 0;

    }
   
