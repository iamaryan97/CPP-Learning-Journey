#include<iostream>
using namespace std;
int add(int a,int b)
{
	int sum=a+b;

}

int main()
{
	int x,y;
	cout<<"enter X:";
	cin>>x;
	cout<<"enter Y:";
	cin>>y;
	add(x,y);
	cout<<"sum="<<add(x,y)<<endl;
	return 0;
}
