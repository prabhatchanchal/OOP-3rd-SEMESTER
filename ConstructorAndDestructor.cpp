#include<iostream>
using namespace std;
class Cube{
  int l,b,h;
  public:
    Cube(int ll=5,int bb=6,int hh=7){
      cout<<"volume of cube is "<<ll*bb*hh<<endl;
    }
    ~Cube(){
      cout<<"\nobject is now destroyed after the main program ends";
    }
};
int main(){
  cout<<"\n\nCreating object as dynamic constructor\n\n\n";
  Cube c1(12,9);
  cout<<"\n\nNow main program ends..........\n\n";
  return 0;
}
