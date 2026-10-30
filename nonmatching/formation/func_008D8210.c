/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
M2C_UNK func_008B4680(M2C_UNK);                     /* extern */
s32 func_008B9410();                                /* extern */
s32 func_008C1490(M2C_UNK, s32);                    /* extern */
M2C_UNK func_008C57D0(void *, s32, s32, M2C_UNK);   /* extern */
M2C_UNK func_008C58D0(void *, M2C_UNK);             /* extern */
M2C_UNK func_008C5900(void *, M2C_UNK);             /* extern */
M2C_UNK func_008C59E0(void *, M2C_UNK);             /* extern */
M2C_UNK func_008C5DF0(void *, M2C_UNK, s32, s32);   /* extern */
M2C_UNK func_008D69B0(void *);                      /* extern */
M2C_UNK func_008D7AE0(void *, M2C_UNK);             /* extern */
M2C_UNK func_008D80C0();                            /* extern */

void func_008D8210(void *arg0, s8 arg1, s32 arg2, s32 arg3, s8 arg4) {
    func_008D80C0();
    M2C_FIELD(arg0, s8 *, 0x20) = arg1;
    M2C_FIELD(arg0, s8 *, 0x22) = arg4;
    func_008C5DF0(arg0, 0xB, arg3, arg2);
    switch (arg1) {                                 /* irregular */
    case 1:
        func_008C5900(arg0, 1);
        func_008C58D0(arg0, 1);
        func_008C59E0(arg0, 0);
        break;
    case 0:
        func_008C57D0(arg0, arg2, func_001F08B0(0x3F0024), 1);
        if (func_008B9410() == 0) {
            func_008C5900(arg0, 0);
            func_008C58D0(arg0, 1);
        }
        break;
    }
    if (M2C_FIELD(arg0, s32 *, 0x114) == 0) {
        M2C_FIELD(arg0, s32 *, 0x114) = func_008C1490(0x26, arg2);
    }
    func_008D69B0(arg0);
    func_008D7AE0(arg0, 0);
    func_008B4680(1);
}
