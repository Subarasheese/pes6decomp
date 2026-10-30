/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_00873EB0(s32 *);                           /* extern */
M2C_UNK func_00873EE0(s32 *, void *, M2C_UNK);      /* extern */
M2C_UNK func_00873F60(s32 *, u8 *);                 /* extern */
M2C_UNK func_00874040(s32 *, void *);               /* extern */
M2C_UNK func_008740E0(s32 *, u8 *);                 /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470();                            /* extern */

s32 func_00876A30(s32 *arg0, void *arg1) {
    u8 sp6E;
    u8 sp6F;
    s32 var_s1;
    u16 var_v0;
    u8 *temp_s4;

    if ((arg0 != NULL) && (arg1 != NULL)) {
        if (*arg0 != 0x8131) {
            return -0x46;
        }
        func_00874470();
        func_00873F60(arg0, arg1 + 4);
        func_00874040(arg0, arg1 + 2);
        func_008740E0(arg0, &sp6F);
        M2C_FIELD(arg1, u16 *, 8) = (u16) sp6F;
        var_v0 = M2C_FIELD(arg1, u16 *, 8);
        if ((s32) var_v0 >= 0xB) {
            var_v0 = 0xA;
        }
        var_s1 = 0;
loop_10:
        if (var_s1 < (var_v0 & 0xFFFF)) {
            if (func_00873EB0(arg0) != -1) {
                temp_s4 = arg1 + (var_s1 * 0x44) + 0xC;
                func_00874040(arg0, temp_s4 + 0x42);
                func_00874040(arg0, temp_s4 + 2);
                func_008740E0(arg0, temp_s4 + 0x41);
                func_00873F60(arg0, temp_s4 + 0xC);
                func_001C48E8(temp_s4 + 0x10, 0, 0x31);
                func_00873EE0(arg0, temp_s4 + 0x10, 0x30);
                func_00874040(arg0, temp_s4 + 4);
                func_008740E0(arg0, temp_s4);
                func_00873F60(arg0, temp_s4 + 8);
                func_008740E0(arg0, &sp6E);
                var_s1 += 1;
                goto loop_10;
            }
        }
        func_00874460(arg0);
        return 0;
    }
    return -0x18;
}
