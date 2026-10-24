#include <iostream>
using namespace std;
int main(){
	int n, a, s=0;
cout<<"Enter a three digit number: ";
cin>>n;
for( ; n > 0 ; n = n / 10 )
{
  a = n % 10;
  s = s + a;
}
  cout<<s;
	return 0;
}