/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00250E70(s32, M2C_UNK);                    /* extern */
M2C_UNK func_002511D0(s32, M2C_UNK, s32);           /* extern */
s32 func_00251BE0();                                /* extern */
extern s32 D_003E9B54;
extern char D_00583F80[];

void func_0024FF10(void) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s0;
    void *temp_a0;

    D_003E9B54 = 0;
loop_1:
    if (func_00251BE0() != 0) {
        if (func_00250E70(D_003E9B54, 2) == 0) {
            goto block_4;
        }
        goto block_19;
    }
block_4:
    if (func_00250E70(D_003E9B54, 0x12) != 0) {
        if (func_00250E70(D_003E9B54, 0x14) < 0) {
            func_002511D0(D_003E9B54, 0x14, 0);
            if (func_00250E70(D_003E9B54, 0xC) != 4) {
                func_002511D0(D_003E9B54, 4, func_00250E70(D_003E9B54, 0x11));
                if (func_00250E70(D_003E9B54, 0xE) == 0) {
                    func_002511D0(D_003E9B54, 0xE, 1);
                }
            }
            func_002511D0(D_003E9B54, 0x12, 0);
            return;
        }
        temp_s0 = func_00250E70(D_003E9B54, 0x17);
        func_002511D0(D_003E9B54, 0x17, temp_s0 + func_00250E70(D_003E9B54, 0x15));
        temp_v0 = func_00250E70(D_003E9B54, 0x17);
        var_s0 = temp_v0 >> 0xA;
        if (temp_v0 < 0) {
            var_s0 = (s32) (temp_v0 + 0x3FF) >> 0xA;
        }
        func_002511D0(D_003E9B54, 0x13, func_00250E70(D_003E9B54, 0x18) + var_s0);
        if (func_00250E70(D_003E9B54, 0x16) <= 0) {
            if (func_00250E70(D_003E9B54, 0x16) < 0) {
                temp_s0_2 = func_00250E70(D_003E9B54, 0x13);
                if (func_00250E70(D_003E9B54, 0x11) >= temp_s0_2) {
                    func_002511D0(D_003E9B54, 0x13, func_00250E70(D_003E9B54, 0x11));
                    func_002511D0(D_003E9B54, 0x12, 0);
                }
                goto block_15;
            }
            func_002511D0(D_003E9B54, 0x12, 0);
            return;
        }
        temp_s0_3 = func_00250E70(D_003E9B54, 0x13);
        if (temp_s0_3 >= func_00250E70(D_003E9B54, 0x11)) {
            func_002511D0(D_003E9B54, 0x13, func_00250E70(D_003E9B54, 0x11));
            func_002511D0(D_003E9B54, 0x12, 0);
        }
block_15:
        if (func_00250E70(D_003E9B54, 0xC) != 4) {
            func_002511D0(D_003E9B54, 4, func_00250E70(D_003E9B54, 0x13));
            if (func_00250E70(D_003E9B54, 0xE) == 0) {
                func_002511D0(D_003E9B54, 0xE, 1);
            }
        }
        temp_a0 = ((void *)D_00583F80) + (D_003E9B54 * 0x7C);
        M2C_FIELD(temp_a0, s32 *, 0x68) = (s32) (M2C_FIELD(temp_a0, s32 *, 0x68) - 1);
        goto block_19;
    }
block_19:
    temp_v1 = D_003E9B54 + 1;
    D_003E9B54 = temp_v1;
    if (temp_v1 >= 8) {
        return;
    }
    goto loop_1;
}
