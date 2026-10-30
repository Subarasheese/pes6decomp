/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00BF99A0(void);
extern u8 func_002F7EA0(s32, s32);
M2C_UNK func_002F7E00(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_00BCC580(s32);                         /* extern */

void func_00BFBFF0(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_v0;
    u8 temp_v0_2;

    temp_v0 = func_00BF99A0();
    M2C_FIELD(arg0, s32 *, 0) = temp_v0;
    temp_v0_2 = func_002F7EA0(temp_v0, 0);
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
    temp_a0 = temp_v0_2 & 0xFF;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x14);
    switch (temp_v1) {                              /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        var_v0 = temp_a0 - 0xA;
block_8:
        M2C_FIELD(arg0, s32 *, 4) = var_v0;
        break;
    case 0:                                         /* switch 1 */
        var_v0 = temp_a0 - 3;
        goto block_8;
    }
    temp_v0_3 = M2C_FIELD(arg0, s32 *, 4);
    if ((temp_v0_3 < 0) || (temp_v0_3 >= 7)) {
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    M2C_FIELD(arg0, s32 *, 8) = 0;
    temp_v1_2 = (M2C_FIELD(arg0, s32 *, 4) / 3) + ((u32) M2C_FIELD(arg0, s32 *, 4) >> 0x1F);
    if (temp_v1_2 >= 0) {
        if (temp_v1_2 > 3) {
            M2C_FIELD(arg0, s32 *, 8) = (s32) (temp_v1_2 - 3);
        }
    } else {
        M2C_FIELD(arg0, s32 *, 8) = temp_v1_2;
    }
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    temp_v1_3 = M2C_FIELD(arg0, s32 *, 0x14);
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 0);
    temp_a1 = M2C_FIELD(arg0, s32 *, 4);
    switch (temp_v1_3) {                            /* switch 2; irregular */
    case 0:                                         /* switch 2 */
        func_002F7E00(temp_a0_2, 0, (temp_a1 + 3) & 0xFF);
        break;
    case 1:                                         /* switch 2 */
        func_002F7E00(temp_a0_2, 0, (temp_a1 + 0xA) & 0xFF);
        break;
    }
    func_00BCC580(M2C_FIELD(arg0, s32 *, 0));
}
