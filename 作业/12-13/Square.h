#ifndef SQUARE_H_INCLUDED
#define SQUARE_H_INCLUDED
class Square : public TwoDimensionalShape
{
public:

   Square( double = 0.0, double = 0.0, double = 0.0 );

   virtual double getSideLength() const;
   virtual double getArea() const;
   void print() const;
private:
   double sideLength;
};


#endif // SQUARE_H_INCLUDED
