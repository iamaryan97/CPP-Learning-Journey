#include<iostream>
using namespace std;

int calculator(int a,int b)
{
int choice;
cout<<"1)+\n2)-\n3)*\n4)/"<<endl;
cout<<"selectthechoice:"<<endl;
cin>>choice;

int result=0;

switch(choice)
{
case 1:
result=a+b;
break;

case 2:
result=a-b;
break;

case 3:
result=a*b;
break;

case 4:
if(b!=0)
{
result=a/b;
}
else
{
cout<<"Error:Divisionbyzero!"<<endl;
return 0;
}
break;

default:
cout<<"Invalidchoice!"<<endl;
return 0;
}

return result;
}

int main()
{
int x,y;
cout<<"enterx:"<<endl;
cin>>x;
cout<<"entery:"<<endl;
cin>>y;

int result=calculator(x,y);
cout<<result;

return 0;
}

