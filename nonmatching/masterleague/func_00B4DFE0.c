/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
s32 func_00225680(s32);                             /* extern */
s32 func_00AEB030(s32);                             /* extern */
s32 func_00B01400(s32, s32);                        /* extern */
extern void *D_003EAE94;

void func_00B4DFE0(void) {
    s32 temp_s1;
    s32 temp_v1_4;
    s32 var_a0;
    s32 var_a1;
    s32 var_a2;
    s32 var_s0_3;
    s8 *var_a0_2;
    s8 var_s0;
    s8 var_s0_2;
    u8 temp_v0;
    void *temp_a0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *var_s2;

    var_s2 = D_003EAE94;
    if (var_s2 != NULL) {
        temp_v0 = func_00225820();
        M2C_FIELD(var_s2, s8 *, 0x34C) = 0;
        M2C_FIELD(var_s2, s8 *, 0x34D) = 0;
        M2C_FIELD(var_s2, s8 *, 0x3E4) = 0xFF;
        var_a2 = 0;
        M2C_FIELD(var_s2, s8 *, 0x3E5) = 0xFF;
        M2C_FIELD(var_s2, s8 *, 0x3E6) = 0xFF;
        M2C_FIELD(var_s2, s8 *, 0x3E7) = 0xFF;
        M2C_FIELD(var_s2, s8 *, 0x3E8) = 0xFF;
        M2C_FIELD(var_s2, s8 *, 0x3E9) = 0xFF;
        M2C_FIELD(var_s2, s8 *, 0x3EA) = 0xFF;
        M2C_FIELD(var_s2, s8 *, 0x3EB) = 0xFF;
        M2C_FIELD(var_s2, s32 *, 0x350) = 0;
        do {
            temp_v1 = var_s2 + var_a2;
            M2C_FIELD(temp_v1, s8 *, 0x3EE) = 0xFF;
            var_a2 += 8;
            M2C_FIELD(temp_v1, s8 *, 0x3EF) = 0xFF;
            M2C_FIELD(temp_v1, s8 *, 0x3F0) = 0xFF;
            M2C_FIELD(temp_v1, s8 *, 0x3F1) = 0xFF;
            M2C_FIELD(temp_v1, s8 *, 0x3F2) = 0xFF;
            M2C_FIELD(temp_v1, s8 *, 0x3F3) = 0xFF;
            M2C_FIELD(temp_v1, s8 *, 0x3F4) = 0xFF;
            M2C_FIELD(temp_v1, s8 *, 0x3F5) = 0xFF;
        } while (var_a2 < 0x50);
        temp_s1 = temp_v0 & 0xFF & 0xFF;
        var_s0 = 0;
loop_4:
        if ((s32) M2C_FIELD(var_s2, u8 *, 0x3ED) < 0x50) {
            if (((func_00225680(var_s0 & 0xFF) & 0xFFFF) != 0xFFFF) && (temp_s1 != var_s0)) {
                M2C_FIELD((var_s2 + M2C_FIELD(var_s2, u8 *, 0x3ED)), s8 *, 0x3EE) = var_s0;
                M2C_FIELD(var_s2, u8 *, 0x3ED) = (u8) (M2C_FIELD(var_s2, u8 *, 0x3ED) + 1);
            }
            var_s0 += 1;
            if (var_s0 < 0x50) {
                goto loop_4;
            }
        }
        M2C_FIELD(var_s2, s8 *, 0x3EC) = 0;
        M2C_FIELD(var_s2, s32 *, 0x990) = 0;
        var_a1 = 0;
        do {
            temp_a0 = var_s2 + var_a1;
            M2C_FIELD(temp_a0, s8 *, 0x128) = 0xFF;
            var_a1 += 8;
            M2C_FIELD(temp_a0, s8 *, 0x129) = 0xFF;
            M2C_FIELD(temp_a0, s8 *, 0x12A) = 0xFF;
            M2C_FIELD(temp_a0, s8 *, 0x12B) = 0xFF;
            M2C_FIELD(temp_a0, s8 *, 0x12C) = 0xFF;
            M2C_FIELD(temp_a0, s8 *, 0x12D) = 0xFF;
            M2C_FIELD(temp_a0, s8 *, 0x12E) = 0xFF;
            M2C_FIELD(temp_a0, s8 *, 0x12F) = 0xFF;
        } while (var_a1 < 0x48);
        var_a0 = 0;
        do {
            temp_v1_2 = var_s2 + var_a0;
            M2C_FIELD(temp_v1_2, s8 *, 0x1B8) = 0;
            var_a0 += 8;
            M2C_FIELD(temp_v1_2, s8 *, 0x1B9) = 0;
            M2C_FIELD(temp_v1_2, s8 *, 0x1BA) = 0;
            M2C_FIELD(temp_v1_2, s8 *, 0x1BB) = 0;
            M2C_FIELD(temp_v1_2, s8 *, 0x1BC) = 0;
            M2C_FIELD(temp_v1_2, s8 *, 0x1BD) = 0;
            M2C_FIELD(temp_v1_2, s8 *, 0x1BE) = 0;
            M2C_FIELD(temp_v1_2, s8 *, 0x1BF) = 0;
        } while (var_a0 < 0x50);
        var_s0_2 = 0;
        do {
            var_a1 = func_00B01400(var_s0_2 & 0xFF, var_a1) & 0xFF;
            temp_v1_3 = var_s2 + var_s0_2;
            M2C_FIELD(temp_v1_3, s8 *, 0x170) = (s8) (var_a1 + 1);
            if (var_s0_2 == temp_s1) {
                M2C_FIELD(temp_v1_3, s8 *, 0x1B8) = 1;
            }
            temp_v0_2 = var_s2 + var_a1;
            var_a0_2 = temp_v0_2 + 0x128;
            if (M2C_FIELD(temp_v0_2, u8 *, 0x128) != 0xFF) {
                do {
                    var_a1 = (var_a1 + 1) & 0xFF;
                    temp_v0_3 = var_s2 + var_a1;
                    var_a0_2 = temp_v0_3 + 0x128;
                } while (M2C_FIELD(temp_v0_3, u8 *, 0x128) != 0xFF);
            }
            *var_a0_2 = var_s0_2;
            var_s0_2 += 1;
        } while (var_s0_2 < 0x48);
        var_s0_3 = 0;
        do {
            temp_v1_4 = func_00AEB030(var_s0_3 & 0xFF) & 0xFFFF;
            var_s0_3 += 1;
            M2C_FIELD(var_s2, s32 *, 0x208) = temp_v1_4;
            var_s2 += 4;
        } while (var_s0_3 < 0x50);
    }
}
