#ifndef SPHERE_H_INCLUDED
#define SPHERE_H_INCLUDED
class Sphere : public ThreeDimensionalShape
{
public:

   Sphere( double = 0.0, double = 0.0, double = 0.0 );

   virtual double getArea() const;
   virtual double getVolume() const;
   double getRadius() const;
   void print() const;
private:
   double radius;
};


#endif // SPHERE_H_INCLUDED
