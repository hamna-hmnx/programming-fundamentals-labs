#include <iostream>
using namespace std;
int main(){
int num,i,s;
s=0;
for(i=0; i<=7; i++)
{
	cout<<"Enter a number: ";
	cin>>num;
	s=s+num;
}
	cout<<"Sum of numbers is: "<<s<<endl;
	float a= (float)s/8;
	cout<<"Average is: "<<a;
	return 0;
}