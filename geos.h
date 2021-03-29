#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

//#include <string.h>

#include <geos_c.h>

void notice_handler(const char *fmt, ...);
void error_handler(const char *fmt, ...);

const char *get_last_error(void);

GEOSContextHandle_t geos_handle_init();
