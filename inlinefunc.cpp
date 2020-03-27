/ To write a cpp program to find the sum of two numbers using functions by passing arguments
#include<iostream>
using namespace std;
inline int sum(int x,int y)
{
	inline int sum=0;
	//cout<<" Enter any two numbers:";
	//cin>>a>>b;
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



/*An inline function definition must be defined before being invoked as shown in the above example. Here sum( ) being inline will not be called during execution, but its code would be inserted into main ( ) as shown and then it would be compiled. If the size of the inline function is large then heavy memory pentaly makes it not so useful and in that case normal function use is more useful */
