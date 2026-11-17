/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

s32 func_0017DF80(s32 (*arg0)(s32, s32, s32, s32), void *arg1, s32 arg2, s32 arg3) {
    s32 i;
    s32 r = 0;
    char *p;

    for (i = 0; i < M2C_FIELD(arg1, s8 *, 4); i++) {
        p = M2C_FIELD(arg1, char **, 0x14) + i * 8;
        r = arg0(*(s32 *)(p + 0), *(s32 *)(p + 4), arg2, arg3);
    }
    for (i = 0; i < M2C_FIELD(arg1, s8 *, 5); i++) {
        p = M2C_FIELD(arg1, char **, 0x18) + i * 0x1C;
        r = arg0(*(s32 *)(p + 4), *(s32 *)(p + 8), arg2, arg3);
    }
    for (i = 0; i < M2C_FIELD(arg1, s8 *, 6); i++) {
        p = M2C_FIELD(arg1, char **, 0x1C) + i * 0x14;
        r = arg0(*(s32 *)(p + 4), *(s32 *)(p + 8), arg2, arg3);
    }
    for (i = 0; i < M2C_FIELD(arg1, s8 *, 7); i++) {
        p = M2C_FIELD(arg1, char **, 0x20) + i * 0x14;
        if (*(s32 *)(p + 8) != 0) {
            r = arg0(*(s32 *)(p + 8), *(s32 *)(p + 0), arg2, arg3);
        }
    }
    return r;
}
