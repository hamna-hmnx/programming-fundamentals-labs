#include <iostream>
#include <cmath>
using namespace std;
int main(){
double x1, y1, x2, y2;
cout<<"Enter x1, y1, x2, and y2: ";
cin>>x1>>y1>>x2>>y2;
cout<<"d="<<sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
return 0;
}