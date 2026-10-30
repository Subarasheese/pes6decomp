/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_008D90A0(s32);                             /* extern */
s32 func_008D9300(s32);                             /* extern */
M2C_UNK func_008E8F10(void *, s32);                 /* extern */

s32 func_008E81A0(u8 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s0;
    u32 temp_hi;
    u8 temp_s0;

    if (arg0 == NULL) {
        return 0;
    }
    temp_s0 = *arg0;
    temp_v1 = func_008D90A0(arg1) & 0x1060;
    switch (temp_v1) {                              /* switch 1; irregular */
    case 0x1000:                                    /* switch 1 */
        func_0026E840(0x84028400);
        return 6;
    case 0x20:                                      /* switch 1 */
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
block_25:
            func_0026E840(0x8400F802);
            temp_hi = (u32) (var_s0 & 0xFF) % 12U;
            *arg0 = (u8) temp_hi;
            func_008E8F10(arg0 + 4, temp_hi & 0xFF);
            return 3;
        case 1:                                     /* switch 2 */
            var_s0 = (temp_s0 + 0xB) & 0xFF;
            goto block_25;
        default:                                    /* switch 2 */
            return 0;
        }
        break;
    }
}
