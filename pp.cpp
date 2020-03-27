#include<iostream>
using namespace std;
main()
	{
	int i,n,flag=0;
	cout<<" Enter The number";
	cin>>n;
		for( i=2;i<=n/2;i++)
		{
			if (n%i==0)
			{flag++;
			}
		}
if (flag==0)
    cout<<"Prime number\n";
else
    cout<<"Its not prime numbertytytyty\n";
return 0;
}

