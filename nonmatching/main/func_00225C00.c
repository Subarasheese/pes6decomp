/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_0022F8D0(void);
extern int func_00231240(void);
void *func_0021FBC0(s16);                           /* extern */
M2C_UNK func_00224EB0(s16, s32, s32);               /* extern */
s32 func_00230410();                                /* extern */
M2C_UNK func_00362580(void *, s16);                 /* extern */
extern s32 D_003E77AC;
extern char D_00591C09[];

void func_00225C00(s16 arg0, s32 arg1) {
    s16 temp_v1_3;
    s32 temp_s0;
    s32 temp_v1;
    s32 var_a1;
    s8 temp_v1_4;
    s8 var_a2_2;
    s8 var_s0;
    void *temp_a1;
    void *temp_v1_2;
    void *var_a2;
    void *var_s1;
    void *var_v0;

    if (func_00231240() != 1) {
        if ((D_003E77AC != 0) && (temp_v1 = arg1 & 0xFF, ((temp_v1 < 0x50) != 0))) {
            var_s1 = D_003E77AC + (temp_v1 * 0x4D4) + 0x44328;
        } else {
            goto block_7;
        }
    } else {
block_7:
        var_s1 = NULL;
    }
    if ((func_00231240() != 1) && (var_s1 != NULL)) {
        M2C_FIELD(var_s1, s16 *, 0) = arg0;
        var_s0 = 0;
        do {
            temp_v1_2 = var_s1 + var_s0;
            M2C_FIELD(temp_v1_2, s8 *, 0x4B1) = var_s0;
            if (var_s0 < 0xB) {
                M2C_FIELD(temp_v1_2, u8 *, 0x4A6) = (u8) M2C_FIELD(temp_v1_2, s8 *, 0x4B1);
            }
            func_00224EB0(arg0, arg1, var_s0 & 0xFF);
            var_s0 += 1;
        } while (var_s0 < 0x20);
        var_v0 = func_0021FBC0(arg0);
        if (var_v0 != NULL) {
            var_a2 = var_s1 + 0x4C;
            var_a1 = 0x5B;
            do {
                var_a1 -= 1;
                temp_v1_3 = M2C_FIELD(var_v0, s16 *, 2);
                M2C_FIELD(var_a2, s16 *, 0) = (s16) M2C_FIELD(var_v0, s16 *, 0);
                var_v0 += 4;
                M2C_FIELD(var_a2, s16 *, 2) = temp_v1_3;
                var_a2 += 4;
            } while (var_a1 > 0);
        }
        temp_s0 = arg0 & 0xFFFF;
        if (((temp_s0 >= 0xFE) && (temp_s0 < 0x10E)) || ((temp_s0 >= 0xCC) && (temp_s0 < 0xDD))) {
            func_00362580(var_s1 + 0x4C, arg0);
        }
        M2C_FIELD(var_s1, s16 *, 0x4C) = arg0;
        if (((func_00230410() == 1) && (temp_s0 == 0x126) && ((func_0022F8D0() & 0xFF) != 1)) || ((*(u8 *)D_00591C09) == 0xE)) {
            var_a2_2 = 0;
            do {
                temp_a1 = var_s1 + var_a2_2;
                M2C_FIELD(temp_a1, s8 *, 0x52) = var_a2_2;
                M2C_FIELD(temp_a1, s8 *, 0x53) = (s8) (var_a2_2 + 1);
                M2C_FIELD(temp_a1, s8 *, 0x54) = (s8) (var_a2_2 + 2);
                M2C_FIELD(temp_a1, s8 *, 0x55) = (s8) (var_a2_2 + 3);
                M2C_FIELD(temp_a1, s8 *, 0x56) = (s8) (var_a2_2 + 4);
                M2C_FIELD(temp_a1, s8 *, 0x57) = (s8) (var_a2_2 + 5);
                temp_v1_4 = var_a2_2 + 7;
                M2C_FIELD(temp_a1, s8 *, 0x58) = (s8) (var_a2_2 + 6);
                var_a2_2 += 8;
                M2C_FIELD(temp_a1, s8 *, 0x59) = temp_v1_4;
            } while (var_a2_2 < 0x20);
        }
        M2C_FIELD(var_s1, s32 *, 0x34) = 0;
    }
}
