#include <iostream>
#include <math.h>
using namespace std;
class A{
  public:
  int cm;
  int m;
  void input(){
    cout<<"Enter values as int m int cm\n";
    cin>>m>>cm;
  }
  
};
class B{
  public:
  int inch;
  int feet;
  void input(){
    cout<<"Enter values as feet space inch\n";
    cin>>feet>>inch;
  }
  friend void display( A ,B);
};

int main() {
  A a1;
  B b1;
  a1.input();
  b1.input();
  display(a1,b1);
}
void display(A a1,B b1){
  cout<<"the total length is "<<((float)a1.cm/100+a1.m)+((float)b1.inch*2.54+(float)b1.feet*30.48)/100<<" m"<<endl;
  // float resultm=((float)a1.cm+(float)a1.m*100)+((float)b1.inch*2.54+(float)b1.feet*30.48);

  // resultm=resultm*100;
  // cout<<"total length is "<<floor(resultm)<<" m "<<(resultm)-floor(resultm)*100<<" cm\n";
  // cout<<"total length is "<<floor(resultm*3.28084)<<" feet "<<(((resultm*3.28084))-floor(resultm))*12<<" inch\n";
}
