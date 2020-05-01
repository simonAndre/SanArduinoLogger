#define LOG_EN_DEFAULT true
#define LOG_LEVEL_DEBUG 5
#include "platform_logger.h"

// size for an ESP32 : progmem: 220889b, global var : 16484b

static int iterations = 0;
const uint16_t waittime = 50;
void setup()
{
  Serial.begin(115200);
  ticktime();

  logdebug("logdebug %i [%s]  , wait %ims\n", 57, "added text", waittime);
  delay(waittime);
  loginfo("loginfo %i %s", 125, "before CR");
}

void loop()
{
  // put your main code here, to run repeatedly:
  logdebug("-debug-");
  loginfo("Loop iteration %d", iterations);
  iterations++;

  if ((iterations % 10) == 0)
  {
    logflush();
  }

  delay(1000);
}