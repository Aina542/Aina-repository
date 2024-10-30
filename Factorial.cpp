#include<iostream>
using namespace std;
int main()
{
//    5! 5*4*3*2*1=120	
	int n;
	long factorial  = 1.0;
	cout<<"Enter a positive integer:";
	cin>>n;
	if(n < 0)
	cout<<"Error! Factorial of a negative number doesn't exist";
	}else 
	{
	for (int i =1; i<=n; i++)
	{
	factorial*=i;
	f=f*i;
}
cout<<"Factorial of"<<n<<"="factorial;	
	return 0;
}