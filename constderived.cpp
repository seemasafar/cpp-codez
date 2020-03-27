#include<iostream>
using namespace std;
class Base
	{
	public:
	Base()
		{
			cout<<"Base concstructor is invoked\n";
		}
	};

class Derived:public Base

	{
	public:
	 Derived()
		{
			cout<<"Derived constructor1 is invoked\n";
		}
	Derived(int a)
		{int b;
                 b=a;            
			cout<<"Derived constructor2 is invoked and the value passed is:"<<b<<"\n";
		}	

	};

main()
	{

	Base b;
	Derived c;
	Derived c1(12);
	return 0;
	}
