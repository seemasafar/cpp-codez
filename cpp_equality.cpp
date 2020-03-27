#include<iostream>
using namespace  std;

int main()
{
	int a,b;

        cout<<"Enter two numbers";
	cin>>a>>b;
	if (a==b)
	cout<<" The numbers are equal";
	if (a!=b)
	cout<<"The numbers are different";
	if (a<b)
        cout<<" The first number is less than second";
	if(a>b)
	cout<<"The second number is less than first";
	return 0;
}
