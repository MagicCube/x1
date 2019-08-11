#pragma once

#include <Arduino.h>
#include <SPI.h>

class X1Class {
  public:
    X1Class();

    // Lifecycle
    void begin();
    void update();
};

extern X1Class X1;

#define x1 X1
