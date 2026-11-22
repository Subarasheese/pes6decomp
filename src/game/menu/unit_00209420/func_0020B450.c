/* compiler: mwcc-3.0.1b210 */
#pragma no_branch_likely on
#include "pes6/m2c.h"

extern s32 func_00154070(s32);

extern s32 D_003E99DC;

void func_0020B450(void) {
    s32 temp_v0;

    if (D_003E99DC == 0) {
        temp_v0 = func_00154070(0x520);
        D_003E99DC = temp_v0;
        M2C_FIELD(temp_v0, s16 *, 0x510) = 0x53;
        M2C_FIELD(D_003E99DC, s32 *, 0x518) = (s32)(D_003E99DC + 0x150);
        M2C_FIELD(D_003E99DC, s32 *, 0x51C) = 0;
        if (D_003E99DC != 0) {
            M2C_FIELD(D_003E99DC, s32 *, 0) = 0;
            if (D_003E99DC != 0) {
                M2C_FIELD(D_003E99DC, s32 *, 4) = 0;
            }
            if (D_003E99DC != 0) {
                M2C_FIELD(D_003E99DC, s8 *, 0xA) = 0;
            }
        }
    }
}
