#include <iostream>
using namespace std;
int main() {
  int a,b;
  char oprator;
  cout<<"This is simple calculator \n";
  cout<<"you have to first enter the opration which you want to perform the two number\n";
  cout<<"exaple:-\n";
  cout<<"Enter the oprator \n+\ninter two number\n 8 9\n the sum of 8 and 9 is 17 will be printed\n oprators are + - / * %\n**************************************\n";
  rerun:
  cout<<"Enter the oprator\n";
  cin>>oprator;
  cout<<"Enter two number\n";
  cin>>a>>b;
  switch(oprator){
    case '+':
      cout<<a<<" + "<<b<<" = "<<a+b;
      break;
    case '-':
    cout<<a<<" - "<<b<<" = "<<a-b;
    break;
    case '*':
    cout<<a<<" * "<<b<<" = "<<a*b;
    break;
    case '/':
    cout<<a<<" / "<<b<<" = "<<(float)a/b;
    break;
     case '%':
    cout<<a<<" % "<<b<<" = "<<a%b;
    break;
    default:
    cout<<"you entered wrong oprator\n";
      goto rerun;
  }
 return 0;
}
