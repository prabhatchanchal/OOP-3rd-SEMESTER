#include <iostream>
using namespace std;

int main() {
   int n=0,p=0,r=1;
   cout<<"Enter the number of term for fibonacci series\n";
   cin>>n;
   cout<<"fibonacci series is \n";
   do{
     cout<<p<<endl;
     p=p+r;
     r=p-r;
     n--;
   }
   while(n>0);

}