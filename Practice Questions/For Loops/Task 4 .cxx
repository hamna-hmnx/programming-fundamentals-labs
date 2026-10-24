#include <iostream>
using namespace std;
int main(){
int n,f;
f=1;
cout<<"Enter a number: ";
cin>>n;
for(int i=1 ; i<=n ; i++)
{
	f=f*i;
}
	cout<<f;
	return 0;
}