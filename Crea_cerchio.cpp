#include <iostream>
#include "cerchio.h"
using namespace std;

int main() {
  Cerchio c(5,-5, 1);

  std::cout << "dati del cerchio creato: \n";
  cout<< "centro x="<< c.getX()<<endl;
  cout<< "centro y= "<<c.getY()<<endl;
  cout<< "raggio = " << c.getRaggio()<<endl; 
} 
