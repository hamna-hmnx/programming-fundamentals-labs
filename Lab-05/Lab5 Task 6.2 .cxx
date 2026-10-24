#include <iostream>
using namespace std;
int main(){
	int Month;
cout<<"Enter Month Number: ";
cin>>Month;
switch(Month)
{
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
cout<<"It has 31 Days.";
break;
case 4:
case 6:
case 9:
case 11:
cout<<"It has 30 Days.";
break;
case 2:
cout<<"It has 28 Days.";
break;
default:
cout<<"Invalid Number.";
}
	return 0;
}