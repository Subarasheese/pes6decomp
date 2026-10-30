/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00C137C0(u32);
extern u8 func_00C132C0(void *);
void *func_00C13280(void *);                        /* extern */
u32 func_00C137F0();                                /* extern */
u32 func_00C13840();                                /* extern */
s32 func_00C18DC0(u8);                              /* extern */
extern char D_00CCB350[];

void func_00C32850(void) {
    M2C_UNK *var_a1;
    M2C_UNK *var_a2_2;
    s32 var_a1_2;
    s32 var_a2;
    u16 *temp_a0_2;
    u16 temp_v0;
    u32 temp_s1;
    u32 var_s2;
    u8 temp_a0;
    u8 temp_v1;

    var_s2 = func_00C13840();
    temp_s1 = func_00C137F0();
    var_a2 = 0;
    var_a1 = ((void *)D_00CCB350);
    do {
        M2C_FIELD(var_a1, s32 *, 4) = -1;
        var_a2 += 8;
        M2C_FIELD(var_a1, s32 *, 8) = -1;
        M2C_FIELD(var_a1, s32 *, 0xC) = -1;
        M2C_FIELD(var_a1, s32 *, 0x10) = -1;
        M2C_FIELD(var_a1, s32 *, 0x14) = -1;
        M2C_FIELD(var_a1, s32 *, 0x18) = -1;
        M2C_FIELD(var_a1, s32 *, 0x1C) = -1;
        M2C_FIELD(var_a1, s32 *, 0x20) = -1;
        var_a1 += 0x20;
    } while (var_a2 < 0x71);
    var_a1_2 = 0;
    var_a2_2 = ((void *)D_00CCB350);
    M2C_FIELD(((var_a2 * 4) + ((void *)D_00CCB350)), s32 *, 4) = -1;
    M2C_FIELD(((void *)D_00CCB350), s32 *, 0x1E8) = -1;
    M2C_FIELD(((void *)D_00CCB350), s32 *, 0x1EC) = -1;
    M2C_FIELD(((void *)D_00CCB350), s32 *, 0x1F0) = -1;
    M2C_FIELD(((void *)D_00CCB350), s32 *, 0x1F4) = -1;
    do {
        M2C_FIELD(var_a2_2, s32 *, 0x1F8) = -1;
        var_a1_2 += 8;
        M2C_FIELD(var_a2_2, s32 *, 0x278) = -1;
        M2C_FIELD(var_a2_2, s32 *, 0x1FC) = -1;
        M2C_FIELD(var_a2_2, s32 *, 0x27C) = -1;
        M2C_FIELD(var_a2_2, s32 *, 0x200) = -1;
        M2C_FIELD(var_a2_2, s32 *, 0x280) = -1;
        M2C_FIELD(var_a2_2, s32 *, 0x204) = -1;
        M2C_FIELD(var_a2_2, s32 *, 0x284) = -1;
        M2C_FIELD(var_a2_2, s32 *, 0x208) = -1;
        M2C_FIELD(var_a2_2, s32 *, 0x288) = -1;
        M2C_FIELD(var_a2_2, s32 *, 0x20C) = -1;
        M2C_FIELD(var_a2_2, s32 *, 0x28C) = -1;
        M2C_FIELD(var_a2_2, s32 *, 0x210) = -1;
        M2C_FIELD(var_a2_2, s32 *, 0x290) = -1;
        M2C_FIELD(var_a2_2, s32 *, 0x214) = -1;
        M2C_FIELD(var_a2_2, s32 *, 0x294) = -1;
        var_a2_2 += 0x20;
    } while (var_a1_2 < 0x20);
    M2C_FIELD(((void *)D_00CCB350), s16 *, 0) = 0;
    M2C_FIELD(((void *)D_00CCB350), s16 *, 2) = 0;
    if (var_s2 < temp_s1) {
        do {
            if ((func_00C132C0((void *) var_s2) & 0xFF) == 1) {
                if (var_s2 != -1U) {
                    temp_a0 = M2C_FIELD(func_00C13280((void *) var_s2), u8 *, 1);
                    if (((s32) temp_a0 >> 7) == 0) {
                        M2C_FIELD((((void *)D_00CCB350) + ((temp_a0 & 0x7F) * 4)), u32 *, 4) = var_s2;
                    } else {
                        M2C_FIELD((((void *)D_00CCB350) + ((func_00C18DC0(temp_a0) & 0xFF) * 4)), u32 *, 0x1E8) = var_s2;
                    }
                }
            } else if (((func_00C132C0((void *) var_s2) & 0xFF) == 0x1E) && (var_s2 != -1U)) {
                temp_v1 = M2C_FIELD(func_00C13280((void *) var_s2), u8 *, 1);
                temp_a0_2 = ((void *)D_00CCB350) + (temp_v1 * 2);
                temp_v0 = *temp_a0_2;
                if ((s32) temp_v0 < 0x20) {
                    M2C_FIELD((((void *)D_00CCB350) + (temp_v1 << 7) + (temp_v0 * 4)), u32 *, 0x1F8) = var_s2;
                    *temp_a0_2 += 1;
                }
            }
            var_s2 = func_00C137C0(var_s2);
        } while (var_s2 < temp_s1);
    }
}
