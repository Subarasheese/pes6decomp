/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C47E0(void *, void *, M2C_UNK);     /* extern */
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_002B91E0(u8, s32, s32);                    /* extern */
void *func_00850590(s32);                           /* extern */
s32 func_0099DBA0(void *);                          /* extern */
extern char D_00CB62B0[];

void func_0099DA40(void) {
    s32 temp_s0;
    s32 var_s3;
    u8 temp_s1;
    void *temp_s4;
    void *temp_s5;
    void *var_s2;

    var_s3 = 0;
    do {
        var_s2 = func_00850590(var_s3);
        if (var_s2 != NULL) {
            do {
                temp_s1 = M2C_FIELD(var_s2, u8 *, 0x18);
                if (temp_s1 != 0xFF) {
                    temp_s0 = M2C_FIELD(var_s2, s32 *, 0x24);
                    temp_s5 = ((void *)D_00CB62B0) + (temp_s1 * 0x18);
                    temp_s4 = var_s2 + 0x28;
                    func_001C48E8(temp_s5, 0, 0x18);
                    M2C_FIELD(temp_s5, s32 *, 0) = func_002B91E0(temp_s1, func_0099DBA0(temp_s4 + 0xC), temp_s0);
                    M2C_FIELD(temp_s5, s32 *, 4) = func_002B91E0(temp_s1, func_0099DBA0(temp_s4 + 0x10), temp_s0);
                    M2C_FIELD(temp_s5, s32 *, 8) = func_002B91E0(temp_s1, func_0099DBA0(temp_s4 + 4), temp_s0);
                    M2C_FIELD(temp_s5, s32 *, 0xC) = func_002B91E0(temp_s1, func_0099DBA0(temp_s4 + 8), temp_s0);
                    func_001C47E0(temp_s5 + 0x10, temp_s4 + 0x34, 8);
                    M2C_FIELD(var_s2, s8 *, 0x28) = 0;
                    M2C_FIELD(var_s2, s8 *, 0x10) = 0;
                }
                var_s2 = M2C_FIELD(var_s2, void **, 4);
            } while (var_s2 != NULL);
        }
        var_s3 = (var_s3 + 1) & 0xFF;
    } while (var_s3 < 2);
}
