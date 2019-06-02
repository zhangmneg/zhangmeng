#include "Shape.h"
Shape::Shape( double x, double y )
{
   xCenter = x;
   yCenter = y;
}
double Shape::getCenterY() const
{
   return yCenter;
}

double Shape::getCenterX() const
{
   return xCenter;
}


ostream & operator<<( ostream &out, Shape &s )
{
   s.print();
   return out;
}
