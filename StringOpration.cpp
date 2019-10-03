#include<iostream>
#include<string>
using namespace std;
int main(){
  string first="prabhat ",last=" kumar";
  cout<<"initial string first : prabhat last : kumar\n";
  cout<<"string compare : "<<first.compare(last)<<endl;
  cout<<"string concatinaton"<<first+last<<endl;
  first=last;
  cout<<"string copyt"<<first<<endl;
}
