/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_005E30D4[];
extern char D_005E30D8[];
extern char D_005E30DC[];

s32 func_002BA190(void *arg0) {
    (*(s32 *)D_005E30D4) = 1;
    (*(s32 *)D_005E30D8) = (s32) (0.001f * (f32) M2C_FIELD(arg0, s32 *, 4));
    (*(f32 *)D_005E30DC) = 0.001f * (f32) M2C_FIELD(arg0, s32 *, 8);
    return 0;
}
