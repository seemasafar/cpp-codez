	
// To write a cpp program to find the sum of two numbers using functions
#include<iostream>
using namespace std;
int sum()
{
	int a,b,sum=0;
	cout<<" Enter any two numbers:"
	cin>>a>>b;
        sum=a+b;
	cout<<" The Sum of "<<a<< " and " <<b<< " are :"<< sum <<"\n";
        return 0;
}
int product()
{
	int a,b,p=0;
	cout<<" Enter any two numbers:";
	cin>>a>>b;
        p=a*b;
	cout<<" The Product of "<<a<< " and " <<b<< " are :"<< p <<"\n";
        return 0;
}

main()
{
	sum();
        product();
	return 0;
}
	


