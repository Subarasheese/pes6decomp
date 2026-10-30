/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003E758C;
extern char D_00533049[];
extern char D_00CBD269[];
extern char D_00CBD26C[];
extern char D_00CBD2A2[];

void func_00205EE0(void) {
    s32 var_a0_3;
    s64 temp_a1;
    s64 temp_a5;
    s64 var_a0;
    s64 var_a0_2;
    s64 var_a6;
    s64 var_v0;
    u32 var_v1;
    void *var_a1;

    var_v0 = 0;
    var_v1 = 0x3E8;
    if ((s32) (*(u8 *)D_00CBD269) < 0xC) {
        var_a0 = 0xC;
    } else {
        var_a0 = 1;
    }
    temp_a1 = (s64) (var_a0 << 0x38) >> 0x38;
    if (temp_a1 != 1) {
        var_a0_2 = 0x17;
    } else {
        var_a0_2 = 0xC;
    }
    temp_a5 = (s64) (var_a0_2 << 0x38) >> 0x38;
    var_a6 = (s64) (temp_a1 << 0x38) >> 0x38;
    if (temp_a1 < temp_a5) {
        var_a1 = D_003E758C + ((*(u16 *)D_00CBD2A2) * 0x354) + (temp_a1 * 0x24);
        do {
            var_a0_3 = (s32) ((f32) M2C_FIELD(var_a1, s16 *, 4) - (*(f32 *)D_00CBD26C));
            if (var_a0_3 <= 0) {
                var_a0_3 = -var_a0_3;
            }
            if ((u32) var_a0_3 < var_v1) {
                var_v1 = (u32) var_a0_3;
                var_v0 = (s64) (var_a6 << 0x38) >> 0x38;
            }
            var_a6 = (s64) ((var_a6 + 1) << 0x38) >> 0x38;
            var_a1 += 0x24;
        } while (var_a6 < temp_a5);
    }
    if (var_v0 == 0) {
        var_v0 = 3;
    }
    (*(s8 *)D_00533049) = (s8) var_v0;
}
