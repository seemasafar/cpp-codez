
// C++ program to demonstrate function  
// declaration outside class 
  
#include <iostream> 
using namespace std; 
class name 
{ 
    public: 
    string name; 
    int id; 
      
    // printname is not defined inside class definition 
    void printname(); 
      
    // printid is defined inside class definition 
    void printid() 
    { 
        cout << "Seema has an id :" << id<<"\n"; 
    } 
}; 
  
// Definition of printname using scope resolution operator :: 
void name::printname() 
{ 
    cout << "Name is: " << name;  
} 
int main() { 
      
    name obj1; 
    obj1.name = "Seema"; 
    obj1.id=15; 
      
    // call printname() 
    obj1.printname(); 
    cout << endl; 
      
    // call printid() 
    obj1.printid(); 
    return 0; 
} 

