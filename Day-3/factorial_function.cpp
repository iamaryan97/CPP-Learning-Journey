#include<iostream>
using namespace std;
int fact(int n)
{
	int fact=1,i;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
int main()
{
	int num;
    cout<<"Enter Number:";
    cin>>num;
	cout<<fact(num)<<endl;
	return 0;
}
