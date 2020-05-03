#define LOG_EN_DEFAULT true
#include <SanArduinoLogger.h>
using namespace arduino_mock;

#include "platform_logger.h"

int main()
{
    printf("test of arduino printf");
   
   
    loginfo("log info %s\n", "test");
    return 0;
}