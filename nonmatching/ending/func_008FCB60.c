/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00154090(M2C_UNK, s32, u8, void *);    /* extern */
s32 func_001F87E0(M2C_UNK, s32, u8, void *);        /* extern */
M2C_UNK func_002CB730(M2C_UNK);                     /* extern */
M2C_UNK func_002FA9E0(M2C_UNK);                     /* extern */
extern char D_00908410[];
extern char D_00908418[];
extern void *D_00908420;

s32 func_008FCB60(void) {
    s32 temp_a1;
    s32 var_a0;
    u8 temp_a2;
    u8 temp_v1;
    u8 var_v0;

    temp_a2 = M2C_FIELD(D_00908420, u8 *, 8);
    var_v0 = temp_a2;
    if ((s32) temp_a2 <= 0) {
        var_v0 = 1;
    }
    temp_a1 = ((0xFF / (s32) (var_v0 & 0xFF)) * (*(u8 *)D_00908410)) & 0xFF;
    if ((*(s32 *)D_00908418) & 0x4000) {
        func_00154090(9, temp_a1, temp_a2, D_00908420);
        func_002CB730(9);
        func_002FA9E0(0x3F800000);
        func_002CB730(1);
        return 1;
    }
    temp_v1 = M2C_FIELD(D_00908420, u8 *, 6);
    if (temp_v1 != 2) {
        var_a0 = 1;
        switch (temp_v1) {                          /* irregular */
        case 0:
            func_00154090(9, temp_a1, temp_a2, D_00908420);
            func_002CB730(9);
            func_002FA9E0(0x3F800000);
            func_002CB730(1);
            return 1;
        case 1:
            if (temp_a2 == 0) {

            } else {
                var_a0 = func_001F87E0(1, temp_a1, temp_a2, D_00908420) & 0xFF;
            }
            return var_a0;
        default:
            return 1;
        }
    } else {
        if (temp_a2 != 0) {
            return func_001F87E0(1, temp_a1, temp_a2, D_00908420) & 0xFF;
        }
        return 1;
    }
}
