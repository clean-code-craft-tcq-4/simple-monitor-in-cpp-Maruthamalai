#include "BatteryState.hpp"

using namespace std;
bool BMS_ValuesIsInRange(float value, float min, float max);
bool BMS_ChargeRateIsOk(float chargeRate);

bool batteryIsOk(float temperature, float soc, float chargeRate)
{
   if (BMS_ValuesIsInRange(temperature, BMS_TEMPERATURE_MIN, BMS_TEMPERATURE_MAX) == false)
   {
      cout << "Temperature is of range!\n";
      return false;
   }

   if (BMS_ValuesIsInRange(soc, BMS_SOC_MIN, BMS_SOC_MAX) == false)
   {
      cout << "State of Charge is of range!\n";
      return false;
   }

   if (BMS_ChargeRateIsOk(chargeRate) == false)
   {
      cout << "Charge Rate out of range!\n";
      return false;
   }

   return true;
}

bool BMS_ValuesIsInRange(float value, float min, float max)
{
   if (value < min || value > max)
   {
      return false;
   }
   return true;
}

bool BMS_ChargeRateIsOk(float chargeRate)
{
   if (chargeRate > BMS_CHARGE_RATE)
   {
      return false;
   }
   return true;
}