
#include <iostream>

#define BMS_TEMPERATURE_MIN       0.0
#define BMS_TEMPERATURE_MAX       45.0
#define BMS_SOC_MIN               20.0
#define BMS_SOC_MAX               80.0
#define BMS_CHARGE_RATE           0.8    //Multiplied by 10

bool batteryIsOk(float temperature, float soc, float chargeRate);