#include <iostream>

using namespace std;

class Box {
   public:
      double length;        
      double breadth;       
      double height;        

      // Member functions declaration
      double getVolume(void);
      void setDimension( double len,double bre,double hei );
};

// Member functions definitions
double Box::getVolume(void) {
   return length * breadth * height;
}

void Box::setDimension( double len,double bre,double hei ){
   length = len;
   breadth = bre;
   height = hei;
}

int main() {
   Box Box1;                
   Box Box2;                
   double volume = 0.0;
   // box 1 specification
   Box1.setDimension(6.0,12.5,11.6); 
   Box2.setDimension(10.0,21.5,25.9);

   // volume of box 1
   volume = Box1.getVolume();
   cout << "Volume of Box1 : " << volume <<endl;

   // volume of box 2
   volume = Box2.getVolume();
   cout << "Volume of Box2 : " << volume <<endl;
   return 0;
}
