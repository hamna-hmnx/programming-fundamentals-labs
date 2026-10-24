#include <iostream>
using namespace std;
int main(){
int n, a, b;
cout<<"Enter a number: ";
cin>>n;
for(a=1 ; a<=n; a++)
{
for(b=1; b<=a; b++)
{
	cout<<"*";
}
cout<<endl;	
}
	return 0;
}