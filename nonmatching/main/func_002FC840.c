/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00305E50(int);
extern void func_002D4970(s32);
s32 func_009E1C90(M2C_UNK);                         /* extern */
s32 func_00B78B60();                                /* extern */
extern u8 D_003E9E90;
extern char D_00591DB7[];

s32 func_002FC840(s32 arg0) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    if ((func_009E1C90(1) & 0xFF) == 0xE) {
        var_s0 = 4;
        if (D_003E9E90 == 1) {
            func_00305E50(arg0);
            goto block_21;
        }
    } else if ((*(u8 *)D_00591DB7) != 0) {
        if (D_003E9E90 != 1) {
            var_s0 = 0x3D;
        } else {
            temp_v0 = func_00B78B60();
            switch (temp_v0) {                      /* irregular */
            case 2:
                func_002D4970(0x40);
                var_s0 = 0x40;
                break;
            case 1:
                func_002D4970(0x3F);
                var_s0 = 0x3F;
                break;
            case 0:
                func_002D4970(0x3E);
                var_s0 = 0x3E;
                break;
            }
            func_00305E50(arg0);
block_21:
            D_003E9E90 = 0;
        }
    }
    return var_s0;
}
