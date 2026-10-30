/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001C6158(void *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
s32 func_00873EB0(s32 *);                           /* extern */
M2C_UNK func_00873EE0(s32 *, void *, M2C_UNK);      /* extern */
M2C_UNK func_00873F60(s32 *, void *);               /* extern */
M2C_UNK func_00874040(s32 *, void *);               /* extern */
M2C_UNK func_00874090(s32 *, void *);               /* extern */
M2C_UNK func_008740E0(s32 *, void *);               /* extern */
M2C_UNK func_00874120(s32 *, void *);               /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470();                            /* extern */
M2C_UNK func_00877690(M2C_UNK, void *);             /* extern */
extern M2C_UNK func_00877740;

s32 func_008795F0(s32 *arg0, s32 arg1, void *arg2) {
    s32 var_s0;
    void *temp_s3;

    if ((arg0 != NULL) && (arg1 != 0) && (arg2 != NULL)) {
        if (*arg0 != 0x5062) {
            return -0x46;
        }
        func_00874470();
        var_s0 = M2C_FIELD(arg2, s32 *, 0x1770);
loop_9:
        if (var_s0 < 0x1E) {
            if (func_00873EB0(arg0) != -1) {
                temp_s3 = arg2 + (var_s0 * 0xC8);
                func_00873F60(arg0, temp_s3);
                func_001C48E8(temp_s3 + 4, 0, 0x31);
                func_00873EE0(arg0, temp_s3 + 4, 0x30);
                func_00874120(arg0, temp_s3 + 0x7D);
                func_00874120(arg0, temp_s3 + 0x35);
                func_00874090(arg0, temp_s3 + 0x36);
                func_00874040(arg0, temp_s3 + 0x7E);
                func_008740E0(arg0, temp_s3 + 0x59);
                func_001C48E8(temp_s3 + 0x38, 0, 0x21);
                func_001C48E8(temp_s3 + 0x5C, 0, 0x21);
                func_00873EE0(arg0, temp_s3 + 0x5C, 0x20);
                func_008740E0(arg0, temp_s3 + 0x5A);
                func_008740E0(arg0, temp_s3 + 0x5B);
                func_00874040(arg0, temp_s3 + 0xC6);
                func_00873F60(arg0, temp_s3 + 0x80);
                func_001C48E8(temp_s3 + 0x84, 0, 0x41);
                func_00873EE0(arg0, temp_s3 + 0x84, 0x40);
                func_00874120(arg0, temp_s3 + 0xC5);
                var_s0 += 1;
                goto loop_9;
            }
        }
        func_00874460(arg0);
        M2C_FIELD(arg2, s32 *, 0x1770) = var_s0;
        func_001C6158(arg2, 0x1E, 0xC8, &func_00877740);
        func_00877690(0, arg2);
        return 0;
    }
    return -0x18;
}
