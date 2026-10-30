/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK, s32, M2C_UNK, u32);  /* extern */
M2C_UNK func_002F7E00(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_00BCC580(s32);                         /* extern */
M2C_UNK func_00BFA1F0(M2C_UNK);                     /* extern */

void func_00BFBE70(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a2;
    s32 var_v1;
    u32 temp_a1;
    u32 temp_a4;

    temp_a4 = M2C_FIELD(arg0, u32 *, 4);
    var_a2 = ((s32) temp_a4 % 3) + arg2;
    if (var_a2 >= 3) {
        var_a2 = 2;
    } else if (var_a2 < 0) {
        var_a2 = 0;
    }
    var_a0 = (M2C_FIELD(arg0, u32 *, 4) / 3) + (temp_a4 >> 0x1F) + arg1;
    if (var_a0 >= 3) {
        var_a0 = 2;
    } else if (var_a0 < 0) {
        var_a0 = 0;
    }
    var_v1 = var_a2 + (var_a0 * 3);
    M2C_FIELD(arg0, u32 *, 4) = (u32) var_v1;
    if (var_v1 >= 7) {
        var_v1 = 6;
    } else if (var_v1 < 0) {
        var_v1 = 0;
    }
    M2C_FIELD(arg0, u32 *, 4) = (u32) var_v1;
    temp_v1 = M2C_FIELD(arg0, s32 *, 8);
    if (var_a0 >= temp_v1) {
        if ((temp_v1 + 3) < var_a0) {
            M2C_FIELD(arg0, s32 *, 8) = (s32) (var_a0 - 3);
        }
    } else {
        M2C_FIELD(arg0, s32 *, 8) = var_a0;
    }
    if (M2C_FIELD(arg0, u32 *, 4) != temp_a4) {
        func_0026E840(0x8400F802, var_a2, 3, temp_a4);
        temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x14);
        temp_a0 = M2C_FIELD(arg0, s32 *, 0);
        temp_a1 = M2C_FIELD(arg0, u32 *, 4);
        switch (temp_v1_2) {                        /* irregular */
        case 0:
            func_002F7E00(temp_a0, 0, (temp_a1 + 3) & 0xFF);
            break;
        case 1:
            func_002F7E00(temp_a0, 0, (temp_a1 + 0xA) & 0xFF);
            break;
        }
        func_00BCC580(M2C_FIELD(arg0, s32 *, 0));
        M2C_FIELD(arg0, u32 *, 0xC) = (u32) M2C_FIELD(arg0, u32 *, 4);
        func_00BFA1F0(1);
    }
}
