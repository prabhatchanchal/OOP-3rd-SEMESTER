#include <iostream>
using namespace std;

int main() {
  int r;
  int i=0;
  cout<<"number of even number to print\n";
  cin>>r;
  while(i<2*r)
  { i++;
    if(i%2==0)
   cout<<i<<endl;
    else  continue;
    
  }
}