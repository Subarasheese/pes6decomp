/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001652A0(s32);                         /* extern */
M2C_UNK func_00165358(s32);                         /* extern */
extern M2C_UNK (*D_005C144C)();

void func_0016E998(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;

    /* Flowgraph is not reducible, falling back to gotos-only mode. */
    var_s0 = 0;
    D_005C144C();
    var_v0 = 0 < 0x28;
    if (M2C_FIELD(arg0, s32 *, 0x914) <= 0) {
        goto block_10;
    }
    var_v0_2 = 0 * 4;
loop_2:
    temp_a0 = M2C_FIELD((arg0 + var_v0_2), s32 *, 0x99C);
    if (temp_a0 == 0) {
        goto block_4;
    }
    func_001652A0(temp_a0);
block_4:
    var_s0 += 1;
    var_v0_2 = var_s0 * 4;
    if (var_s0 < M2C_FIELD(arg0, s32 *, 0x914)) {
        goto loop_2;
    }
    goto block_9;
block_7:
    temp_a0_2 = M2C_FIELD((arg0 + (var_s0 * 4)), s32 *, 0x99C);
    var_s0 += 1;
    if (temp_a0_2 == 0) {
        goto block_9;
    }
    func_00165358(temp_a0_2);
block_9:
    var_v0 = var_s0 < 0x28;
block_10:
    if (var_v0 == 0) {
        goto block_12;
    }
    goto block_7;
block_12:
    return;
}
