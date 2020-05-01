/*

printf Mock for a computer (for tests and sandboxing of arduino libs)

Simon ANDRE mai 2020
MIT Licence
*/

#pragma once

#include <iostream> // for std::cout
#include <chrono>   // for     
/**
 * @brief to use to mock the printf lib and port a console write char on a real computer (for tests and sandboxing)
 * 
 */
namespace arduino_mock
{
// use functions in a namespace to avoid stdio conflicts
#include "../external/arduino-printf/src/printf.h"
// #include "../external/arduino-printf/src/printf.c"

/**
 * @brief implementation provided for printf lib
 * 
 * @param character 
 */
void _putchar(char character)
{
    std::cout << character;
}

static uint64_t millis(){
    const auto p1 = std::chrono::system_clock::now();
    return (uint64_t)std::chrono::duration_cast<std::chrono::milliseconds>(p1.time_since_epoch()).count();
}


} // namespace arduino_mock