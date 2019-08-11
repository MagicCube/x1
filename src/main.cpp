#include <Arduino.h>

#include "X1.h"

void setup() {
  X1.begin();
}

void loop() {
  X1.update();
}
