#include <iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter 5 Digits";
	cin>>num;
	
	int a= (num/10000);
	int b= (num/1000)%10;
	int c= (num/100)%10;
	int d= (num/10)%10;
	int e= num%10;
	cout<<a<<"   "<<b<<"   "<<c<<"   "<<d<<"   "<<e;
	return 0;
}