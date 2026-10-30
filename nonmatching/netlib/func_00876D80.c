/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00873EE0(s32 *, void *, M2C_UNK);      /* extern */
M2C_UNK func_00873F60(s32 *, void *);               /* extern */
M2C_UNK func_00874040(s32 *, void *);               /* extern */
M2C_UNK func_008740E0(s32 *, void *);               /* extern */
M2C_UNK func_00874120(s32 *, void *);               /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470();                            /* extern */

s32 func_00876D80(s32 *arg0, void *arg1, s32 *arg2) {
    s32 var_s0;
    s32 var_s0_2;
    void *temp_s4;

    if ((arg0 != NULL) && (arg1 != NULL) && (arg2 != NULL)) {
        if (*arg0 != 0x8121) {
            return -0x46;
        }
        func_00874470();
        func_00873F60(arg0, arg1);
        func_001C48E8(arg1 + 0x12, 0, 0x41);
        func_00873EE0(arg0, arg1 + 0x12, 0x40);
        var_s0 = 0;
        do {
            func_00874040(arg0, arg1 + (var_s0 * 2) + 0x54);
            var_s0 += 1;
        } while (var_s0 < 3);
        func_00874120(arg0, arg1 + 0x53);
        func_001C48E8(arg1 + 0x5A, 0, 0x31);
        func_00873EE0(arg0, arg1 + 0x5A, 0x30);
        func_00873F60(arg0, arg1 + 4);
        func_00874040(arg0, arg1 + 0x8C);
        func_00874040(arg0, arg1 + 8);
        func_00874040(arg0, arg1 + 0xA);
        func_00874040(arg0, arg1 + 0xC);
        func_00874040(arg0, arg1 + 0xE);
        func_00874040(arg0, arg1 + 0x10);
        var_s0_2 = 0;
loop_10:
        if (var_s0_2 < (s32) M2C_FIELD(arg1, u16 *, 0x10)) {
            temp_s4 = arg1 + (var_s0_2 * 0x30) + 0x8E;
            func_001C48E8(temp_s4, 0, 0x30);
            func_00874040(arg0, temp_s4 + 0x24);
            func_008740E0(arg0, temp_s4 + 0x1E);
            var_s0_2 += 1;
            goto loop_10;
        }
        func_00874460(arg0);
        *arg2 = 0;
        return 0;
    }
    return -0x18;
}
