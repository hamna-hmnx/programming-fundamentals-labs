#include <iostream>
using namespace std;
int main(){
double item1, item2, item3, item4, item5, Subtotal, Tax, SalesTax;
item1= 12.95;
item2= 24.95;
item3=6.95;
item4=14.95;
item5=3.95;
Tax=0.06;
Subtotal= item1+item2+item3+item4+item5;
SalesTax=Subtotal*Tax;
cout<<"Price of item 1 = $"<<item1 <<"\nPrice of item 2 = $"<<item2 <<"\nPrice of item 3 = $"<<item3 <<"\nPrice of item 4 = $"<<item4 <<"\nPrice of item 5 = $"<<item5
<<"\nThe Subtotal of the sale is "       			<<Subtotal
<<"\nThe SalesTax is "<<SalesTax
<<"\nTotal= "<<Subtotal+SalesTax;
return 0;
}