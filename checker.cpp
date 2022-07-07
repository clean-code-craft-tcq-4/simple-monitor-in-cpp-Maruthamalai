#include <assert.h>
#include "BatteryState.hpp"

int main() {
  assert(batteryIsOk(0, 0, 0) == false);
  assert(batteryIsOk(0, 19, 0.8) == false);

  assert(batteryIsOk(1, 20, 0.8) == true);
  assert(batteryIsOk(1, 21, 0.7) == true);
  assert(batteryIsOk(1, 21, 0.8) == true);
  assert(batteryIsOk(45, 80, 0.8) == true);

  assert(batteryIsOk(45, 80, 0.9) == false);
  assert(batteryIsOk(45, 81, 0.8) == false);
  assert(batteryIsOk(46, 80, 0.8) == false);
}
