
#include<iostream>
using namespace std;

class books

{

public:
char title [30];

float price ;

public:

int getdata ();

int putdata ();

} ;

int books :: getdata ()

{

cout<<"Title:";

cin>>title;

cout<<"Price:";

cin>>price;
 
return 0;

}

int books :: putdata ()

{

cout<<"Title:"<<title<< "\n";

cout<<"Price:"<<price<< "\n";
 return 0;
}

//const int size=3 ;

const int size=3;

int main ()

{

books book[size] ;

for(int i=0;i<size;i++)

{

cout<<"Enter details o£ book \n";

book[i].getdata();

}

for(int i=0;i<size;i++)

{

cout<<"\nBook \n";

book[i].putdata() ;

}

return 0;

}


