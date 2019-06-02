#ifndef SHAPE_H_INCLUDED
#define SHAPE_H_INCLUDED
class Shape
 {
friend £º
ostream & operator<<( ostream &, Shape & )
public:
   Shape( double = 0.0, double = 0.0 );
   double getCenterX() const;
   double getCenterY() const;
   virtual void print() const = 0;
protected:
   double xCenter;
   double yCenter;
};


#endif // SHAPE_H_INCLUDED
