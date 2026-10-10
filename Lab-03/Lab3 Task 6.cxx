#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	srand(time(0));
	int random1 =rand()%500+1;
	int random2 =rand()%500+1;
	cout<<" "<<random1<<"\n"<<"+"<<random2<<endl;
	cout<<"-----"<<endl;
	cout<<"Press any key to see answer..."<<endl;
	cin.get(); //[system("PAUSE")] for Windows
	cout<<" "<<random1+random2;
	return 0;
}