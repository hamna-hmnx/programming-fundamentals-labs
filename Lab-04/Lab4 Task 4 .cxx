#include <iostream>
using namespace std;
int main(){
	int a, b, c, largest;
	cout<<"Enter three numbers: ";
	cin>>a>>b>>c;
	if (a>b){
	 if(a>c) {cout<<a<<" is greater."; largest=a; }
	else { cout<<c<<" is greater."; largest=c;}
	}
	else {
		if(b>c)
	{ cout<<b<<" is greater."; largest=b; }
	else
	{ cout<<c<<" is greater."; largest=c; }
	}
	if(largest >=0 && largest<=9)
	{cout<<"\n"<<largest<<" has 1 digit.";}
	else if (largest >=10 && largest<=99)
	{cout<<"\n"<<largest<<" has 2 digits.";}
	else if (largest >=100 && largest<=999)
	{cout<<"\n"<<largest<<" has 3 digits.";}
	else if (largest>999)
	{cout<<"\n"<<largest<<" has more than 3 digits.";}
	else
	{ cout<<"Not Positive."; }
	return 0;
}