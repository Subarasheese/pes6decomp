/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001DD4E0(s32);
extern s32 D_003E9960;

void *func_001E0540(s32 arg0, s32 arg1, s32 arg2, void *arg3) {
    s32 temp_a0;
    s32 temp_v1_2;
    s32 var_a2;
    s32 var_a5;
    void *temp_a3;
    void *temp_v0;
    void *temp_v1;
    void *var_a1;
    void *var_a4;

    temp_a0 = arg2 & 0xFF;
    temp_v1 = D_003E9960 + (func_001DD4E0(arg0) * 0x30) + (temp_a0 * 0xC);
    var_a1 = M2C_FIELD(temp_v1, void **, 4);
    temp_v0 = temp_v1 + 4;
    if (var_a1 != NULL) {
        temp_v1_2 = M2C_FIELD(temp_v0, u8 *, 0xA) * M2C_FIELD(temp_v0, u8 *, 0xB);
loop_2:
        if (temp_a0 == 0) {
            var_a2 = 1;
        } else if ((M2C_FIELD(var_a1, u8 *, 0x20) == M2C_FIELD(arg3, u8 *, 0)) && (M2C_FIELD(var_a1, u8 *, 0x21) == M2C_FIELD(arg3, u8 *, 1)) && (M2C_FIELD(var_a1, u8 *, 0x22) == M2C_FIELD(arg3, u8 *, 2)) && (M2C_FIELD(var_a1, u8 *, 0x23) == M2C_FIELD(arg3, u8 *, 3)) && (M2C_FIELD(var_a1, u8 *, 0x24) == M2C_FIELD(arg3, u8 *, 4)) && (M2C_FIELD(var_a1, u8 *, 0x25) == M2C_FIELD(arg3, u8 *, 5)) && (M2C_FIELD(var_a1, u8 *, 0x26) == M2C_FIELD(arg3, u8 *, 6)) && (M2C_FIELD(var_a1, u8 *, 0x27) == M2C_FIELD(arg3, u8 *, 7))) {
            var_a2 = 1;
        } else {
            var_a2 = 0;
        }
        if (var_a2 != 0) {
            var_a5 = 0;
            if (temp_v1_2 > 0) {
                temp_a3 = M2C_FIELD(var_a1, void **, 0xC);
                var_a4 = temp_a3;
loop_16:
                if (arg1 != M2C_FIELD(var_a4, s32 *, 0x30)) {
                    var_a5 += 1;
                    var_a4 += 0x40;
                    if (var_a5 >= temp_v1_2) {
                        goto block_22;
                    }
                    goto loop_16;
                }
                return temp_a3 + (var_a5 << 6);
            }
        }
block_22:
        var_a1 = M2C_FIELD(var_a1, void **, 4);
        if (var_a1 == NULL) {
            return NULL;
        }
        goto loop_2;
    }
    return NULL;
}
