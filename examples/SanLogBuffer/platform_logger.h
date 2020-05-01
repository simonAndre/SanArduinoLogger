#pragma once
#if LOG_EN_DEFAULT == true
#include <SanLogger.h>			// pour arduino : link to the Serial putchar
#include <SanBufferLogger.h>
using PlatformLogger = PlatformLogger_t<SanBufferLogger<1024>>;
#define ticktime() nstest::SetLogTimeStart();

#else // LOG_EN_DEFAULT
#define logcritical(...)
#define logerror(...)
#define logwarning(...)
#define loginfo(...)
#define logdebug(...)
#define logflush()
#define loglevel(lvl)
#define logecho(echo)
#define logclear()
#define ticktime()
#endif // LOG_EN_DEFAULT

namespace nstest
{
inline static void SetLogTimeStart()
{
	SanBufferLogger<1024>::SetLogTimeStart();
}
} // namespace nstest