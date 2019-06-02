#ifndef CUBE_H_INCLUDED
#define CUBE_H_INCLUDED

class Cube : public ThreeDimensionalShape
{
public:

   Cube( double = 0.0, double = 0.0, double = 0.0 );

   virtual double getArea() const;
   virtual double getVolume() const;
   double getSideLength() const;
   void print() const;
private:
   double sideLength;
};


#endif // CUBE_H_INCLUDED
