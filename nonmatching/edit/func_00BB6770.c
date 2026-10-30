/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00259210(void);
M2C_UNK func_002592A0(s32, s32, M2C_UNK, s8);       /* extern */
M2C_UNK func_0025E150(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00BB4780(void *);                          /* extern */
M2C_UNK func_00BB6840(s32, M2C_UNK, s8);            /* extern */

void func_00BB6770(void *arg0) {
    s32 var_a1;
    s8 temp_a3;

    temp_a3 = M2C_FIELD(arg0, s8 *, 0x12);
    switch (temp_a3) {                              /* switch 1; irregular */
    case 2:                                         /* switch 1 */
        M2C_FIELD(arg0, s8 *, 0x12) = 3;
        return;
    default:                                        /* switch 1 */
        var_a1 = 1;
        switch (temp_a3) {                          /* switch 2; irregular */
        case 1:                                     /* switch 2 */
            if (M2C_FIELD(arg0, s32 *, 0x40) != 0xA) {
                var_a1 = 2;
            }
            func_002592A0(var_a1 & 0xFF, var_a1, 2, temp_a3);
            M2C_FIELD(arg0, s8 *, 0x12) = 2;
            return;
        case 0:                                     /* switch 2 */
            func_00BB6840(1, 2, temp_a3);
            M2C_FIELD(arg0, s8 *, 0x12) = 1;
            return;
        }
        break;
    case 3:                                         /* switch 1 */
        func_00259210();
        func_0025E150(7, 0);
        func_0025E150(4, 0);
        M2C_FIELD(arg0, s32 *, 0x40) = func_00BB4780(arg0);
        M2C_FIELD(arg0, s8 *, 0x12) = 0;
        M2C_FIELD(arg0, s8 *, 0x11) = (s8) M2C_FIELD(arg0, s8 *, 0x10);
        M2C_FIELD(arg0, s8 *, 0x10) = 5;
        return;
    }
}
