#include <iostream>
using namespace std;
long long fibonacci(int n){
  if (n==0 | n==1)
  return n;
  else return fibonacci(n-1)+fibonacci(n-2);
}
int main() {
   cout<<"Enter the no. of element in fibonacci : \n";
   int num;
   cin>>num;
   for(int i=0; i<num; i++){
     cout<<fibonacci(i)<<"\t";
   }
}
