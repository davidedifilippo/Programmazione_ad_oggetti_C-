#include "cerchio.h"

Cerchio::Cerchio():
  centro_x(0),
  centro_y(0),
  raggio(0)
{


}

Cerchio::Cerchio(float x, float y, float r):
  centro_x(x),
  centro_y(y),
  raggio(r)
{


}

void Cerchio::setX(float ascissa)
{
  centro_y = ascissa;
}

void Cerchio::setY(float ordinata)
{
  centro_x = ordinata;
}
void Cerchio::setRaggio(float r)
{
raggio = r;
}

float Cerchio::getX(){return centro_x;}
float Cerchio::getY(){return centro_y;}
float Cerchio::getRaggio(){return raggio;}
