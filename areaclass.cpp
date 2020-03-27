#include<iostream>
using namespace std;
//#include<conio.h>
class rectangle
{
   int length,breadth,area;
   public:
   void readvalues()
   {
       cout<<"Enter length and breadth\n";
       cin>>length>>breadth;
   }
   void recarea()
  {
      area=length*breadth;
      cout<<"Area is : "<<area;
  }
};

main()
{
    rectangle r1;   // object creation
    r1.readvalues();  //function call using dot operator
    r1.recarea();            //recarea() function call
    return 0;
}
