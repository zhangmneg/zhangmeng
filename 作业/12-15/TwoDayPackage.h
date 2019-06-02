#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED
class TwoDayPackage : public Package
{
public:
   TwoDayPackage( const string &, const string &, const string &,
      const string &, int, const string &, const string &, const string &,
      const string &, int, double, double, double );

   void setFlatFee( double );
   double getFlatFee() const;

   virtual double calculateCost() const;
private:
   double flatFee;
};


#endif // TWODAYPACKAGE_H_INCLUDED
