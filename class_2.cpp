
// C++ program to demonstrate function  
// declaration outside class 
  
#include <bits/stdc++.h> 
using namespace std; 
class Sample
{ 
    public: 
    string s; 
    int id; 
      
    // printname is not defined inside class defination 
    void printname(); 
      
    // printid is defined inside class defination 
    void printid() 
    { 
        cout << " The id is: " << id; 
    } 
}; 
  
// Definition of printname using scope resolution operator :: 
void Geeks::printname() 
{ 
    cout << "Name is: " << s;  
} 
int main() { 
      
    Geeks obj1; 
    obj1.s = "xyz"; 
    obj1.id=15; 
      
    // call printname() 
    obj1.printname(); 
    cout << endl; 
      
    // call printid() 
    obj1.printid(); 
    return 0; 
} 

/*Output:

Geekname is: xyz
Geek id is: 15
*/

