#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n, p, r=1;
	cout<<"Enter a number and it's power: ";
	cin>>n>>p;
	for(int i=1 ; i<=p ; i++)
{
r=r*n;
cout<<r<<endl;
	}
	return 0;
}