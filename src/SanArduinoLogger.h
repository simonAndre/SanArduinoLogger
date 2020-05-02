#pragma once
#if defined(ARDUINO) /* Arduino*/
#include <LibPrintf.h>
#else               /* not Arduino*/
#include "arduinoMock/arduino_mock.hpp"
#endif              /* Arduino*/

#include "external/arduino-logger/src/ArduinoLogger.h"

