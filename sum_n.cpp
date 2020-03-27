//USING LOOP FOR

#include<iostream>
using namespace std;
main()
{
	int n,i,sum=0;
	cout<<"Enter the value of n :";
	cin>>n;
	for(i=1;i<=n;i++)
        {
		sum=sum+i;
		
	}
	cout<<"The sum of "<<n<< " is :"<<sum<<"\n";
	return 0;

}
