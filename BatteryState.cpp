#include "BatteryState.hpp"

using namespace std;
bool BMS_ValuesIsInRange(float value, float min, float max);
bool BMS_ChargeRateIsOk(float chargeRate);

bool batteryIsOk(float temperature, float soc, float chargeRate)
{
   return (BMS_ValuesIsInRange(temperature, BMS_TEMPERATURE_MIN, BMS_TEMPERATURE_MAX) && \
           BMS_ValuesIsInRange(soc, BMS_SOC_MIN, BMS_SOC_MAX) && \
           BMS_ChargeRateIsOk(chargeRate));
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
   if (chargeRate*10 > BMS_CHARGE_RATE)
   {
      return false;
   }
   return true;
}