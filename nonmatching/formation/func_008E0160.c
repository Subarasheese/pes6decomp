/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002207E0(s32, s32);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_008D90A0(s32);                             /* extern */
s32 func_008D9300(s32);                             /* extern */
M2C_UNK func_008DFBE0(void *, u8);                  /* extern */
M2C_UNK func_008DFC10(void *, s32);                 /* extern */

s32 func_008E0160(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s0;
    u32 temp_hi;
    u32 temp_hi_2;
    u8 temp_s0;

    if (arg0 == NULL) {
        return 0;
    }
    temp_s0 = M2C_FIELD(arg0, u8 *, 0x51);
    temp_v1 = func_008D90A0(arg1) & 0x60;
    switch (temp_v1) {                              /* switch 1; irregular */
    case 0x20:                                      /* switch 1 */
        if ((temp_s0 & 0xFF) == 4) {
            M2C_FIELD(arg0, u8 *, 0x52) = (u8) (M2C_FIELD(arg0, u8 *, 0x52) ^ 1);
            func_002207E0((s32) M2C_FIELD(arg0, u8 *, 0x50), M2C_FIELD(arg0, u8 *, 0x52) == 0);
            func_008DFBE0(arg0, M2C_FIELD(arg0, u8 *, 0x52));
            temp_hi = (u32) (temp_s0 & 0xFF) % 5U;
            M2C_FIELD(arg0, u8 *, 0x51) = (u8) temp_hi;
            func_008DFC10(arg0, temp_hi & 0xFF);
        }
        func_0026E840(0x84028400);
        return 2;
    case 0x40:                                      /* switch 1 */
        func_0026E840(0x84008401);
        return 1;
    default:                                        /* switch 1 */
        temp_v0 = func_008D9300(arg1);
        switch (temp_v0) {                          /* switch 2; irregular */
        case 2:                                     /* switch 2 */
            var_s0 = (temp_s0 + 1) & 0xFF;
block_23:
            func_0026E840(0x8400F802);
            temp_hi_2 = (u32) (var_s0 & 0xFF) % 5U;
            M2C_FIELD(arg0, u8 *, 0x51) = (u8) temp_hi_2;
            func_008DFC10(arg0, temp_hi_2 & 0xFF);
            return 3;
        case 1:                                     /* switch 2 */
            var_s0 = (temp_s0 + 4) & 0xFF;
            goto block_23;
        default:                                    /* switch 2 */
            return 0;
        }
        break;
    }
}
