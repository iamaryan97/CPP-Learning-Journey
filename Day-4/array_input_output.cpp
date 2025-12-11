#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter n:";
	cin>>n;
	int arry[n];
	
	for(int i=0;i<n;i++)
	{
	    cin>>arry[i];		
	}
	for(int i=0;i<n;i++)
	{
		cout<<"a[]="<<arry[i]<<endl;
	}
	return 0;
}
