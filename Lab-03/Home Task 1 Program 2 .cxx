#include <iostream>
using namespace std;
void main() //should be int main()
{
     int number1, number2;
     float quotient;
     cout << "Enter two numbers and I will divide\n";
     cout << "the first by the second for you.\n";
     cin >> number1, number2; // should be cin >> number1 >> number2;
     quotient = float<static_cast>(number1) / number2; // it should be static_cast<float>(number1) / number2
     cout << quotient // ; missing after quotient
     // return 0; missing
}