#include<iostream>
using namespace std;
main()
{
int i,n,flag=0;
for( i=2;i<=n/2;i++)
{
if (n%i==0)
cout<<" Itz not prime";
flag++;
}
if (flag==0)
cout<<"Prime number;
else 
cout<<"Its not prime number;
return 0;
}

