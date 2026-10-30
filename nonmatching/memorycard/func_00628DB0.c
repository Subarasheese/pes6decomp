/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0065C2A0[];
extern char D_0065C2A4[];
extern char D_0065C2A6[];
extern char D_0065C2A8[];
extern char D_0065C2A9[];
extern char D_0065C2AC[];

s32 func_00628DB0(void *arg0, s8 arg1, s8 arg2) {
    (*(s16 *)D_0065C2A6) = M2C_FIELD(arg0, s16 *, 2);
    (*(s16 *)D_0065C2A4) = M2C_FIELD(arg0, s16 *, 0);
    (*(s8 *)D_0065C2A8) = arg1;
    (*(s8 *)D_0065C2A9) = arg2;
    (*(s32 *)D_0065C2A0) = 1;
    return (*(s32 *)D_0065C2AC);
}
