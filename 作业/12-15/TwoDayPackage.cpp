#include "TwoDayPackage.h"


TwoDayPackage::TwoDayPackage( const string &sName,
   const string &sAddress, const string &sCity, const string &sState,
   int sZIP, const string &rName, const string &rAddress,
   const string &rState,const string &rCity, int rZIP,
   double w, double cost, double fee )
   : Package( sName, sAddress, sCity, sState, sZIP,
      rName, rAddress, rCity, rState, rZIP, w, cost )
{
   setFlatFee( fee );
}
void TwoDayPackage::setFlatFee( double fee )
{
   flatFee = ( fee < 0.0 ) ? 0.0 : fee;
}

double TwoDayPackage::calculateCost() const
{
   return Package::calculateCost() + getFlatFee();
}
double TwoDayPackage::getFlatFee() const
{
   return flatFee;
}
