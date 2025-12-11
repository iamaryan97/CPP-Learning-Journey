#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter no. elements:";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int flag=0,key;
	cout<<"Enter element to find:";
	cin>>key;
	
	for(int i=0;i<n;i++)
	{
		if(key==a[i])
		{
			flag=1;
			break;
		}
	
	}
	
	if(flag==1)
	{
		cout<<"Element found"<<endl;
	}
	else
	{
		cout<<"invalid Element";
	}
}
