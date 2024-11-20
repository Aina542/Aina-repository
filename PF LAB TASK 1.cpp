#include<iostream>
using namespace std;
//function definition
void sum(int num)
{
	num=num+10;//modifying the value
	cout<<"Inside Function (Pass by value):" <<num<<endl; 
}
int main()
{
	int number=5;
	cout<<"Before Function Call:"<<number<<endl;
	sum(number);//Passing the value
	cout<<"After Function Call:"<<number<<endl;
	return 0;
}