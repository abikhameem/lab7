//to find highest common factor two number
#include<iostream>
using namespace std;
//return something function prototype
int gcd(int,int);
//main function
int main()
   {
	   //declare varibles
	   int p,q;
	   cout<<"enter the value of p and q ";
	   cin>>p>>q;
	   //function calling
	   gcd(p,q);
	   cout<<"highest common factor of no "<<p<<" "<<q<<" is "<<gcd(p,q)<<endl;
	   return 0;
   }
   //define function
  int gcd(int p,int q){
	   //base condition
	    if(p>q){
       if(q==0)
       return p;
       else
        return gcd(q,p%q);
	}
      if(q>p){
      if(p==0)
      return q;
      else
      return gcd(q%p,p);
      }
       else
       return p;
}
