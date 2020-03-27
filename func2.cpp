//To write a cpp program to find the sum of two numbers using functions by passing arguments
#include<iostream>
using namespace std;
int sum()
{
	int sum=0;
	sum=x+y;
	cout<<" The Sum of "<<x<< " and " <<y<< " are :"<< sum <<"\n";
        return 0;
}

main()
{
	int a,b;
	cout<<" Enter any two numbers:";
	cin>>a>>b;
	sum(a,b);
	return 0;
}
