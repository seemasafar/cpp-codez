#include<iostream>
using namespace std;
main()
{

	int a,b,quo,rem;
	cout<<" Enter the two numbers";
	cin>> a >>b;
        quo=a/b;
	rem=a%b;
	cout<<" The quotient and remainder of the two numbers are " << quo<< " ," << rem<<"\n";
	return 0;
	
}
