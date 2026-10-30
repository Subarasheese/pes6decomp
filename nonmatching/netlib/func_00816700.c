/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0017F900();                                /* extern */
M2C_UNK func_001BE5B0(M2C_UNK);                     /* extern */
M2C_UNK func_001FC780(s32);                         /* extern */
s32 func_001FC7A0(s32);                             /* extern */
s32 func_001FC7D0(s32);                             /* extern */
s32 func_001FC800(M2C_UNK);                         /* extern */
M2C_UNK func_001FC840(M2C_UNK);                     /* extern */
s32 func_00309440(s32);                             /* extern */
M2C_UNK func_00309460(s32, s32);                    /* extern */
M2C_UNK func_00842B70(s32);                         /* extern */

s32 func_00816700(s32 arg0) {
    s32 temp_s0;
    s32 temp_v0;

    temp_s0 = arg0 + 1;
    temp_v0 = func_00309440(temp_s0 & 0xFF);
    switch (temp_v0) {                              /* irregular */
    case 4:
        if (func_001FC7D0(func_001FC800(0x15)) == 0x15) {
            func_001FC780(func_001FC800(0x15));
        }
        if (func_001FC7D0(func_001FC800(0x1A)) == 0x1A) {
            func_001FC780(func_001FC800(0x1A));
        }
        func_001FC780(func_001FC800(0x11));
        func_00309460(arg0, 0xA);
        break;
    case 3:
        if (func_001FC7D0(func_001FC800(0x15)) == 0x15) {
            func_001FC780(func_001FC800(0x15));
        }
        if (func_001FC7D0(func_001FC800(0x1A)) == 0x1A) {
            func_001FC780(func_001FC800(0x1A));
        }
        func_001FC780(func_001FC800(0x11));
        func_00309460(arg0, 4);
        break;
    case 2:
        func_00842B70(temp_s0);
        break;
    case 0:
        func_001BE5B0(0);
        if ((func_001FC7D0(func_001FC800(0x15)) != 0x15) || (func_001FC7A0(func_001FC800(0x15)) == 0)) {
            func_001FC780(func_001FC800(0x15));
            func_001FC840(0x15);
        }
        func_00309460(temp_s0, func_00309440(temp_s0) + 1);
        break;
    case 1:
        if (func_0017F900() != 0) {
            func_00309460(temp_s0, func_00309440(temp_s0) + 1);
        }
        break;
    }
    return 0;
}
