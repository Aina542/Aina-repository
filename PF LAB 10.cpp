#include<iostream>
using namespace std;

	
		void sum(int a,int b)
{
	int sum=a+b;	
	cout<<"Sum is:" <<sum << endl;
}
void mul(int c, int d)
{
int m=c*d;
cout<<"multiplication is:" <<m<<endl;
}
void sub(int e, int f)
{
	int h=e-f;
	cout<<"Subtraction is:" <<h<<endl;
}
int main()
{//sum
	int a,b;
	cout<<"Enter Two Numbers:"<<endl;
	cin>>a>>b;
	sum(a,b);

	//Multiplication
   int c,d;
   cout<<"Enter two numbers for multiplication:";
    cin>>c>>d;
    mul(c,d);
    //Subtraction
    int e,f;
    cout<<"Enter two numbers for subtraction:";
    cin>>e>>f;
    sub(e,f);
    
	return 0;
	}	
