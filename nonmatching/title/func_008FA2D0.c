/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_008F86F8(void *, s32);
M2C_UNK func_008FA868(void *);                      /* extern */
M2C_UNK func_008FAA70(void *, M2C_UNK);             /* extern */

void func_008FA2D0(void *arg0) {
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a1;
    u32 temp_s1;
    u32 var_a0;

    /* Flowgraph is not reducible, falling back to gotos-only mode. */
    temp_s1 = func_008F86F8(arg0, 0xA);
    M2C_FIELD(arg0, u32 *, 0x160) = func_008F86F8(arg0, 3);
    func_008F86F8(arg0, 0x10);
    if ((u32) (M2C_FIELD(arg0, u32 *, 0x160) - 2) >= 2U) {
        goto block_2;
    }
    M2C_FIELD(arg0, u32 *, 0x164) = func_008F86F8(arg0, 1);
    M2C_FIELD(arg0, u32 *, 0x168) = func_008F86F8(arg0, 3);
block_2:
    if (M2C_FIELD(arg0, u32 *, 0x160) != 3) {
        goto block_7;
    }
    M2C_FIELD(arg0, u32 *, 0x16C) = func_008F86F8(arg0, 1);
    M2C_FIELD(arg0, u32 *, 0x170) = func_008F86F8(arg0, 3);
    goto block_6;
block_5:
    func_008FAA70(arg0, 8);
block_6:
block_7:
    if (func_008F86F8(arg0, 1) != 0) {
        goto block_5;
    }
    func_008FA868(arg0);
    var_a1 = 0;
    var_a0 = 0;
    if (M2C_FIELD(arg0, u32 *, 0x160) == 3) {
        goto block_13;
    }
    if (temp_s1 == 0) {
        goto block_13;
    }
    if ((s32) temp_s1 >= 0) {
        goto block_12;
    }
    var_a1 = M2C_FIELD(arg0, s32 *, 0x864) == 0;
block_12:
    M2C_FIELD(arg0, s32 *, 0x864) = 0;
    var_a0 = temp_s1;
block_13:
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x85C) + temp_s1;
    M2C_FIELD(arg0, s32 *, 0x1BC) = temp_v1;
    if (var_a1 == 0) {
        goto block_16;
    }
    if ((s32) var_a0 < (s32) temp_s1) {
        goto block_16;
    }
    M2C_FIELD(arg0, s32 *, 0x1BC) = (s32) (temp_v1 + 0x400);
block_16:
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x860);
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x1BC);
    M2C_FIELD(arg0, s32 *, 0x860) = (s32) ((temp_v0 < temp_a0) ? temp_a0 : temp_v0);
    return;
}
