#include <iostream>
using namespace std;
int main(){
	int var1;
	int var2;
	int temp;
	cout<<"var1= ";
	cin>>var1;
	cout<<"var2= ";
	cin>>var2;
	temp= var1;
	var1=var2;
	var2=temp;
	cout<<"var1= "<<var1<<"\nvar2 = "<<var2;
	return 0;
}