/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00146C70(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern char D_003C6B70[];
extern char D_003C6C30[];
extern char D_003C6CE8[];
extern char D_003C6CF0[];
extern char D_0050AD90[];

void func_00147BF0(s32 arg0, s32 arg1, M2C_UNK *arg2, u8 arg3) {
    M2C_UNK *temp_a0;
    void *temp_a1;

    temp_a1 = (arg1 << 5) + (((void *)D_0050AD90) + (arg0 * 0x44)) + 0x18;
    if (M2C_FIELD(arg2, u8 *, 0x69) != arg3) {
        temp_a0 = M2C_FIELD(temp_a1, M2C_UNK **, 0x10);
        if (temp_a0 != NULL) {
            M2C_FIELD(temp_a1, M2C_UNK **, 0x10) = (M2C_UNK *) M2C_FIELD(temp_a0, M2C_UNK **, 4);
            M2C_FIELD(temp_a0, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(arg2, M2C_UNK **, 4);
            M2C_FIELD(temp_a0, M2C_UNK **, 0) = arg2;
            if (arg2 != M2C_FIELD(temp_a1, M2C_UNK **, 4)) {
                *M2C_FIELD(arg2, M2C_UNK **, 4) = temp_a0;
            } else {
                M2C_FIELD(temp_a1, M2C_UNK **, 4) = temp_a0;
            }
            M2C_FIELD(arg2, M2C_UNK **, 4) = temp_a0;
            M2C_FIELD(temp_a0, s32 *, 0x1C) = 0;
            M2C_FIELD(temp_a0, s8 *, 0x68) = (s8) (M2C_FIELD(arg2, u8 *, 0x68) + arg3);
            M2C_FIELD(temp_a0, s8 *, 0x69) = (s8) (M2C_FIELD(arg2, u8 *, 0x69) - arg3);
            M2C_FIELD(arg2, u8 *, 0x69) = arg3;
            return;
        }
        func_00146C70(((void *)D_003C6C30), ((void *)D_003C6B70), 0x4C8, ((void *)D_003C6CE8), ((void *)D_003C6CF0));
loop_6:
        goto loop_6;
    }
}
