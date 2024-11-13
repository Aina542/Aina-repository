#include<iostream>
using namespace std;
int main()
{
	int arr[5]={2,3,5,6,7};
	int multiply=1;
	for (int i=0; i< 5; i++)
{
cout<<arr[i]<<" ";
multiply=multiply*arr[i];     
	}	
	cout<<endl;
		cout<<multiply;
	return 0;
}