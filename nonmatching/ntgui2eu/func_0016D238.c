/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0016B788(s32, s32, s32, M2C_UNK, s32, s32, f32); /* extern */

void func_0016D238(void *arg0) {
    s32 temp_a4;
    s32 temp_a5;
    s32 temp_a5_2;

    temp_a5 = M2C_FIELD(arg0, s32 *, 0x924);
    if (temp_a5 != 0) {
        temp_a4 = M2C_FIELD(arg0, s32 *, 0x92C);
        if (temp_a4 != 0) {
            func_0016B788(M2C_FIELD(arg0, s32 *, 0x918), M2C_FIELD(arg0, s32 *, 0x91C), M2C_FIELD(arg0, s32 *, 0x9AC), 0, temp_a4 - 1, temp_a5, M2C_FIELD(arg0, f32 *, 0x9B8));
        }
        if (M2C_FIELD(arg0, s32 *, 0x97C) != 0) {
            temp_a5_2 = M2C_FIELD(arg0, s32 *, 0x928);
            if (temp_a5_2 != 0) {
                func_0016B788(((((M2C_FIELD(arg0, s32 *, 0x5A0) + M2C_FIELD(arg0, s32 *, 0x5D4) + M2C_FIELD(arg0, s32 *, 0x5AC)) - M2C_FIELD(arg0, s32 *, 0x8D4)) - M2C_FIELD(arg0, s32 *, 0x99C)) - M2C_FIELD(arg0, s32 *, 0x990)) - M2C_FIELD(arg0, s32 *, 0x930), M2C_FIELD(arg0, s32 *, 0x91C), M2C_FIELD(arg0, s32 *, 0x9AC), 0, 0x7FFFFFFF, temp_a5_2, M2C_FIELD(arg0, f32 *, 0x9B8));
            }
        }
    }
}
