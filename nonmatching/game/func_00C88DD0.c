/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CCCE30[];
extern char D_00CCD074[];
extern char D_00CCD07E[];
extern char D_00CCD088[];

s32 func_00C88DD0(u32 arg0, s32 (*arg1)(u32), s32 (*arg2)(s16)) {
    char *p;
    s32 r;

    if ((*(s32 *)D_00CCD088) != 0 && arg0 < 0x21U) {
        p = D_00CCCE30 + (arg0 << 5);
        M2C_FIELD(p, s32 (**)(u32), 0x274) = arg1;
        M2C_FIELD(p, s32 (**)(s16), 0x278) = arg2;
        if (arg1 != NULL) {
            r = arg1((((u32)(*(u8 *)D_00CCD074)) >> 2) & 1);
        }
        if (arg2 != NULL) {
            r = arg2(*(s16 *)D_00CCD07E);
        }
        return r;
    }
}
