#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter size: ";
  cin>>n;

  for(int a=1; a<=n; a++)
  {
    for(int b=1; b<=n; b++)
    {
      if(a==1 || a==n || b==1 || b==n)
        cout<<"*";
      else 
        cout<<" ";
    }
    cout<<endl;
  }
  return 0;
}