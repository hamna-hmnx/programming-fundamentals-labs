#include <iostream>
using namespace std;
int main(){
	char alphabet;
	cout<<"Enter small alphabet:";
	cin>>alphabet;
	cout<<char(alphabet-32); //as a=96 and A=65. So 97-65 = 32
	return 0;
}