//printing first 10 even numbers

#include<iostream>
using namespace std;
main()
{
int a,i,n=1;
cout<<"The First ten even numbers";//cin>>a;
for(i=1;i<=10;i++)
{
 if(n%2==0)
 cout<<i<<"\n";
 n=n+1;
}
return 0;
} 
