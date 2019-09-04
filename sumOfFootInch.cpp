#include <iostream>
using namespace std;
struct foot{
  int foot;
  int inches;
};
int main() {
 int num, sumfoot=0,sumInch=0;
 cin>>num;
 cout<<"Enter the number of data \n";
 struct foot foot[num];
 for(int i=0; i<num; i++){
  cin>>foot[i].foot>>foot[i].inches;
  sumfoot+=foot[i].foot;
  sumInch+=foot[i].inches;
 }
cout<<sumfoot+sumInch/12<<" Foot\n"<<sumInch%12<<" inches\n";
return 0;
}
