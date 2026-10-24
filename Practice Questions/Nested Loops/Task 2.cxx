#include <iostream>
using namespace std;
int main(){
int a,b, n;
cout<<"Enter a number: ";
cin>>n;
for(a=1; a<=n; a++)
{
	for(b=n; b>=a; b--)
	{
		cout<<b;	
	}
	cout<<endl;
}
	return 0;
}