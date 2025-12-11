#include<iostream>
using namespace std;
int main()

{
	int n;
	cout<<"Enter n:";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{ 
	  cin>>a[i];
	}
	
	int maxvalue=a[0];
	
	for(int i=1;i<n;i++)
	{
		if(a[i]>maxvalue)
		{
		 maxvalue=a[i];
		}
	}
	cout<<"max="<<maxvalue;
	return 0;
}
	




