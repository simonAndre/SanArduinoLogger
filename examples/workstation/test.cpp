#define LOG_EN_DEFAULT false

// #include "platform_logger.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

namespace arduino_moq
{
// use functions in own test namespace to avoid stdio conflicts
#include "printf.h"
#include "printf.c"

void _putchar(char character)
{
    cout << character;
}
} // namespace test

int main()
{
    arduino_moq::printf("test de arduino printf");

    return 0;
}