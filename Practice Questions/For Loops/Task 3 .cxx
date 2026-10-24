	#include <iostream>
	using namespace std;
	int main(){
		int f1, f2, f3;
		f1= 0;
		f2= 1;
		f3=0;
		cout<<f1<<","<<f2<<",";
	for (int f=0; f<=9; f++)
	{
		f3=f1+f2;
		cout<<f3<<",";
		f1=f2;
		f2=f3;
	}
		return 0;
	}