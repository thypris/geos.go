#include <stdlib.h>
#include <stdio.h>

#include <geos_c.h>

extern GEOSContextHandle_t newHandle();
extern GEOSWKTReader * newWKTReader(GEOSContextHandle_t h);
extern GEOSWKTWriter * newWKTWriter(GEOSContextHandle_t h);
