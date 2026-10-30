/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_00873EB0(s32 *);                           /* extern */
M2C_UNK func_00873EE0(s32 *, void *, M2C_UNK);      /* extern */
M2C_UNK func_00873F60(s32 *, void *);               /* extern */
M2C_UNK func_00874040(s32 *, void *);               /* extern */
M2C_UNK func_008740E0(s32 *, void *);               /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470();                            /* extern */

s32 func_008777D0(s32 *arg0, s32 arg1, void *arg2) {
    s32 var_s0;
    void *temp_s3;

    if ((arg0 != NULL) && (arg1 != 0) && (arg2 != NULL)) {
        if (*arg0 != 0x5072) {
            return -0x46;
        }
        func_00874470();
        var_s0 = M2C_FIELD(arg2, s32 *, 0x1770);
loop_9:
        if (var_s0 < 0x14) {
            if (func_00873EB0(arg0) != -1) {
                temp_s3 = arg2 + (var_s0 * 0x12C);
                func_008740E0(arg0, temp_s3);
                func_00873F60(arg0, temp_s3 + 4);
                func_001C48E8(temp_s3 + 0xC, 0, 0x31);
                func_00873EE0(arg0, temp_s3 + 0xC, 0x30);
                func_00873F60(arg0, temp_s3 + 8);
                func_008740E0(arg0, temp_s3 + 0x40);
                func_008740E0(arg0, temp_s3 + 0x3D);
                func_00874040(arg0, temp_s3 + 0x42);
                func_00874040(arg0, temp_s3 + 0x3E);
                func_00873F60(arg0, temp_s3 + 0x4C);
                func_001C48E8(temp_s3 + 0x50, 0, 0x31);
                func_00873EE0(arg0, temp_s3 + 0x50, 0x30);
                func_00873F60(arg0, temp_s3 + 0x84);
                func_001C48E8(temp_s3 + 0x88, 0, 0x31);
                func_00873EE0(arg0, temp_s3 + 0x88, 0x30);
                func_00873F60(arg0, temp_s3 + 0xBC);
                func_001C48E8(temp_s3 + 0xC0, 0, 0x31);
                func_00873EE0(arg0, temp_s3 + 0xC0, 0x30);
                func_00873F60(arg0, temp_s3 + 0xF4);
                func_001C48E8(temp_s3 + 0xF8, 0, 0x31);
                func_00873EE0(arg0, temp_s3 + 0xF8, 0x30);
                var_s0 += 1;
                goto loop_9;
            }
        }
        func_00874460(arg0);
        M2C_FIELD(arg2, s32 *, 0x1770) = var_s0;
        return 0;
    }
    return -0x18;
}
