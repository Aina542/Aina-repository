#include<iostream>
using namespace std;
int main()
{
	int rows,cols;
	float sum=0;
	float average=0;
	cout<<"Enter the number of rows;";
	cin>>rows;
	cout<<"Enter the number of columns:";
	cin>>cols;
	int array[rows][cols];
	cout<<"enter the elements of arrays:\n";
	for(int i=0; i<rows; ++i)
	{
		for(int j=0; j<cols; ++j)
	{
		cout<<"Elements ["<<i<< "][" <<j<<"j:";
		cin>>array[i][j];
	}
}
cout<<"\nThe 2D array is:\n";	
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<cols; j++)
		{
			cout<<array[i][j]<< " ";
			sum=sum+array [i][j];
			average=sum/(rows*cols);
		}
		cout<<endl;
	}
	{
		cout<<"The sum is:"<<sum;
		cout<<"The average is:"<<average;
}
return 0;
}