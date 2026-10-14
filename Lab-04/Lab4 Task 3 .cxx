#include <iostream>
using namespace std;
int main(){
	int Marks;
	cout<<"Enter Your Marks: ";
	cin>>Marks;
	if(Marks >= 75)
	{ cout<<"A"; }
	else if(Marks<75 && Marks>=60)
	{ cout<<"B"; }
	else if(Marks < 60 && Marks >=45)
	{ cout<<"C"; }
	else
	{cout<<"D";}
	return 0;
}