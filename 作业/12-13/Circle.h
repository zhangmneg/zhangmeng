#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED
class Circle : public TwoDimensionalShape
{
public:

   Circle( double = 0.0, double = 0.0, double = 0.0 );

   virtual double getRadius() const;
   virtual double getArea() const;
   void print() const;
private:
   double radius;
};

#endif // CIRCLE_H_INCLUDED
