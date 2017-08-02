#include <iostream>
using namespace std;
int binarysrch(int b[],int n)
{

int x;
	int first=0;
	int last=n-1;
	cout<<"enter value";
	cin>>x;
	while (first<=last )
	{
        int midpoint;
			midpoint= (first + last)/2;
	        if (b[midpoint] == x)
			{ 
				cout<<"found";
				return midpoint;

			}
			 else 
			 {
				 if (x < b[midpoint])
               last = midpoint-1;
				 else
				 first = midpoint+1;
			 }
	}
	return -1;
}
int main()
{
	int b[] = { 2, 3, 4, 5, 6 };
	int n=sizeof(b)/sizeof(b[0]);
	int index=binarysrch(b,n);
	if(index!=-1)
	{
	
	cout<<"found at";
	cout<<index;
	}
	else
	{
	
	cout <<"not found";
	}
	system("PAUSE");
	return 0;
}//end main 