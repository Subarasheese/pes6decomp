/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005E1D30[];
extern char D_005E1D32[];

s32 func_002A8600(void) {
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_v0;
    s32 var_a1;
    s32 var_a5;
    s32 var_v0;
    void *temp_a0;
    void *temp_v1;

    var_v0 = (((*(u8 *)D_005E1D32) & 0xF) + 1) & 0xFF;
    var_a5 = 0;
    if (var_v0 > 0) {
loop_2:
        temp_a3 = var_a5 & 0xFF;
        temp_a2 = temp_a3 * 4;
        var_a1 = 1;
        if (M2C_FIELD((((void *)D_005E1D30) + temp_a2), f32 *, 0xA0) < 1.0f) {
            var_a1 = 0;
        }
        if ((var_a1 ^ 1) != 0) {
            var_a5 = (var_a5 + 1) & 0xFF;
            if (var_a5 >= var_v0) {
                return var_v0;
            }
            goto loop_2;
        }
        temp_v0 = var_a5 & 0xFF;
        if (temp_v0 == 1) {
            temp_a0 = (temp_a3 * 0x10) + ((void *)D_005E1D30);
            temp_v1 = (temp_v0 * 0x10) + ((void *)D_005E1D30);
            if ((M2C_FIELD(temp_a0, f32 *, 0x50) == M2C_FIELD(temp_v1, f32 *, 0x40)) && (M2C_FIELD(temp_a0, f32 *, 0x54) == M2C_FIELD(temp_v1, f32 *, 0x44)) && (M2C_FIELD(temp_a0, f32 *, 0x58) == M2C_FIELD(temp_v1, f32 *, 0x48)) && (M2C_FIELD(temp_a0, f32 *, 0x10) == M2C_FIELD(temp_v1, f32 *, 0)) && (M2C_FIELD(temp_a0, f32 *, 0x14) == M2C_FIELD(temp_v1, f32 *, 4)) && (M2C_FIELD(temp_a0, f32 *, 0x18) == M2C_FIELD(temp_v1, f32 *, 8)) && (M2C_FIELD((temp_a2 + ((void *)D_005E1D30)), f32 *, 0x90) == M2C_FIELD(((temp_v0 * 4) + ((void *)D_005E1D30)), f32 *, 0x8C))) {
                return temp_v0;
            }
        }
        var_v0 = (temp_v0 + 1) & 0xFF;
        /* Duplicate return node #19. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
