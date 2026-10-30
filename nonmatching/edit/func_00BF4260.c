/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BCF3A0(M2C_UNK);                         /* extern */
M2C_UNK func_00BF7420();                            /* extern */
extern char D_00CE8E20[];

s32 func_00BF4260(s32 arg0) {
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    void *temp_a1;
    void *temp_a1_2;

    if (func_00BCF3A0(0x04000000) != 0) {
        func_00BF7420();
        if (func_00BCF3A0(2) == 0) {
            if (func_00BCF3A0(0x10) != 0) {
                temp_a1 = ((void *)D_00CE8E20) + (arg0 * 0x146C);
                temp_a0 = M2C_FIELD(temp_a1, s32 *, 0x1448);
                if (temp_a0 < (M2C_FIELD(temp_a1, s32 *, 0x144C) - M2C_FIELD(temp_a1, s32 *, 0x1450))) {
                    M2C_FIELD(temp_a1, s32 *, 0x1448) = (s32) (temp_a0 + 1);
                }
                temp_v1 = M2C_FIELD(temp_a1, s32 *, 0x1448);
                if (M2C_FIELD(temp_a1, s32 *, 0x1444) >= temp_v1) {
                    return 1;
                }
                M2C_FIELD(temp_a1, s32 *, 0x1444) = temp_v1;
                return 1;
            }
            goto block_17;
        }
        temp_a1_2 = ((void *)D_00CE8E20) + (arg0 * 0x146C);
        temp_v0 = M2C_FIELD(temp_a1_2, s32 *, 0x1448);
        if (temp_v0 > 0) {
            M2C_FIELD(temp_a1_2, s32 *, 0x1448) = (s32) (temp_v0 - 1);
        }
        temp_v1_2 = (M2C_FIELD(temp_a1_2, s32 *, 0x1448) + M2C_FIELD(temp_a1_2, s32 *, 0x1450)) - 1;
        if (temp_v1_2 >= M2C_FIELD(temp_a1_2, s32 *, 0x1444)) {
            return 1;
        }
        M2C_FIELD(temp_a1_2, s32 *, 0x1444) = temp_v1_2;
        return 1;
    }
block_17:
    return 0;
}
