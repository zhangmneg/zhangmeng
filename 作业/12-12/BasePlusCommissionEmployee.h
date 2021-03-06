#ifndef BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED
#define BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED
class BasePlusCommissionEmployee : public CommissionEmployee
{
public:
   BasePlusCommissionEmployee( const string &, const string &,
      const string &, int, int, int, double = 0.0, double = 0.0,
      double = 0.0 );

   void setBaseSalary( double );
   double getBaseSalary() const;
private:
   double baseSalary;
};


#endif // BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED
