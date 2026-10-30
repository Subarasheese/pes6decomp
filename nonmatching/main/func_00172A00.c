/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001634B0(int, int);
extern int func_00163820(int, int);
extern int func_001635A0(int);
extern int func_001640A8(int, int, int);
extern int func_001636A8(int);
extern int func_00163378(int);
M2C_UNK func_001631E8(s32, s32, s32, s32, s32);     /* extern */
M2C_UNK LSC_CallErrFunc(M2C_UNK *, s32, u32, s32);    /* extern */
u32 func_001C80F0(s32);                             /* extern */
extern char D_003CB2A0[];

void func_00172A00(void *arg0) {
    s32 temp_s2;
    s32 var_a3;
    u32 temp_v0;
    u32 var_a1;
    u8 *temp_v0_2;
    void *temp_s1;

    temp_s1 = arg0 + (M2C_FIELD(arg0, s32 *, 0x20) << 5) + 0x38;
    if (M2C_FIELD(arg0, s32 *, 0x24) > 0) {
        func_001636A8(M2C_FIELD(arg0, s32 *, 0x28));
        func_00163378(M2C_FIELD(arg0, s32 *, 0x28));
        temp_s2 = M2C_FIELD(temp_s1, s32 *, 4);
        temp_v0 = func_001C80F0(temp_s2);
        var_a1 = 0;
        var_a3 = 0;
        if (temp_v0 != 0) {
            do {
                temp_v0_2 = temp_s2 + var_a1;
                var_a1 += 1;
                var_a3 += *temp_v0_2;
            } while (var_a1 < temp_v0);
        }
        if (var_a3 != M2C_FIELD(temp_s1, s32 *, 8)) {
            LSC_CallErrFunc(((void *)D_003CB2A0), M2C_FIELD(temp_s1, s32 *, 4), temp_v0, var_a3);
            return;
        }
        func_001631E8(M2C_FIELD(arg0, s32 *, 0x28), M2C_FIELD(temp_s1, s32 *, 4), M2C_FIELD(temp_s1, s32 *, 0xC), M2C_FIELD(temp_s1, s32 *, 0x10), M2C_FIELD(temp_s1, s32 *, 0x14));
        func_00163820(M2C_FIELD(arg0, s32 *, 0x28), M2C_FIELD(temp_s1, s32 *, 0x14));
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(temp_s1, s32 *, 0x14);
        M2C_FIELD(temp_s1, s32 *, 0x1C) = 0;
        M2C_FIELD(arg0, s8 *, 2) = 0;
        func_001640A8(M2C_FIELD(arg0, s32 *, 0x28), M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 0x18));
        func_001634B0(M2C_FIELD(arg0, s32 *, 0x28), 0);
        func_001635A0(M2C_FIELD(arg0, s32 *, 0x28));
        M2C_FIELD(arg0, s8 *, 2) = 1;
        M2C_FIELD(temp_s1, s32 *, 0x18) = 1;
    }
}
