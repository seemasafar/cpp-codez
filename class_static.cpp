// C++ program to demonstrate function  
// declaration outside class 
  
#include <iostream> 
using namespace std; 
class Name 
{ 
    public: 
    string name; 
    static int id; 
      
    // printname is not defined inside class definition 
    void printname(); 
      
    // printid is defined inside class definition 
    void printid() 
    { 
        cout << "Seema has an id :" << id<<"\n"; 
    } 
}; 
 
// Definition of static member using scope resolution operator :: outside the class

int Name::id; 
  
// Definition of printname using scope resolution operator :: 
void Name::printname() 
{ 
    cout << "Name is: " << name;  
} 
int main() { 
      
    Name obj1; 
    obj1.name = "Seema"; 
    obj1.id=15; 
      
    // call printname() 
    obj1.printname(); 
    cout << endl; 
      
    // call printid() 
    obj1.printid(); 
    return 0; 
} 
