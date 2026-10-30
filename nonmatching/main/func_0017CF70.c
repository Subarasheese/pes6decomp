/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00133860(s32);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
extern char D_00511250[];

void func_0017CF70(s32 arg0, s64 arg1, s64 arg2) {
    s32 temp_v1;
    s32 var_s1;
    void *temp_s0;

    temp_s0 = ((void *)D_00511250) + (arg0 * 0x1E0);
    temp_v1 = M2C_FIELD(temp_s0, s32 *, 0x30);
    if (temp_v1 != 0) {
        goto block_1;
    }
    if (M2C_FIELD(temp_s0, s32 *, 0x34) != 0) {
block_1:
        var_s1 = 0;
        if (temp_v1 > 0) {
            do {
                func_00133860(var_s1);
                var_s1 += 1;
            } while (var_s1 < M2C_FIELD(temp_s0, s32 *, 0x30));
        }
        M2C_FIELD(temp_s0, s32 *, 0x30) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x34) = 0;
    }
    func_001C48E8(temp_s0, 0, 0x1E0);
    M2C_FIELD(temp_s0, s32 *, 0x30) = (s32) ((s64) (arg1 << 0x38) >> 0x38);
    M2C_FIELD(temp_s0, s32 *, 0x34) = (s32) ((s64) (arg2 << 0x38) >> 0x38);
}
