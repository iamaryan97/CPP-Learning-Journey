#include<iostream>
using namespace std;
int max(int a,int b)
{ if(a>b)
{
   	return a;
}
   else
{
   	return b;
   	
}}
int main()
{ int x,y;
	cout<<"enter X:";
	cin>>x;
	cout<<"enter Y:";
	cin>>y;
	max(x,y);
	cout<<"max="<<max(x,y)<<endl;
	return 0;
	
}
