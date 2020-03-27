/*  Simple Friend Function Example Program In C++
    Class Examples, Understanding Friend Function In Class*/

// Header Files
#include <iostream>


using namespace std;

// Class Declaration

class Person {
   //Member Variable Declaration
   string name;
   int salary;
public:
   //Member Functions getSalary() and printDetails() Declaration

   void getSalary() {
      //Get Input Values For Object Variables
      cout << "Enter the Name :";
      cin >> name;

      cout << "Enter the Salary :";
      cin >> salary;
   }

   void printDetails() {
      //Show the Output
      cout << "\nName : " << name << ", Salary : " << salary << endl;
   }

   // Friend Function Declaration
   friend int calculateTax(Person person);
};

// Friend Function Definition

int calculateTax(Person person) {
   //Calculate Tax 5% and returns Tax Amount
   int tax = (person.salary / 100) * 5;
   return tax;
}

int main() {
   // Object Creation For Class
   Person obj;
   int tax = 0;
   cout << "Simple Friend Function Example Program In C++\n";

   obj.getSalary();
   obj.printDetails();

   // Call Friend Function like a normal function without Object Help
   tax = calculateTax(obj);
   cout << "Calculated Tax 5% : " << tax;
//   getch();
   return 0;
}
