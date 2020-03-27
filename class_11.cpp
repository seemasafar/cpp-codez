#include<iostream>
using namespace std;

class Hello
	{
	 public:
	 int a;
         int fn();
	 
	};

 int Hello::fn()
	{
		cout<<"Hello";
                return 0;
	}
main()
	{
	Hello obj;
	obj.fn();
	return 0;
	}		


