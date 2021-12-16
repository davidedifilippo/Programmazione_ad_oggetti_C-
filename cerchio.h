class Cerchio{

public:

Cerchio();
Cerchio(float x, float y, float r);

void setX(float ascissa);
void setY(float ordinata);
void setRaggio(float r);

float getX();
float getY();
float getRaggio();

private:

float centro_x;
float centro_y;
float raggio;
};
