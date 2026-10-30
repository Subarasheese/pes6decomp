/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef char Check128Width[sizeof(s128)==16?1:-1];

extern s32 func_00154F98(s32);
extern s32 func_001F08B0(s32);
M2C_UNK func_00AE3E50(s32, s32, s32, s32);          /* extern */
s32 func_00AE4210(M2C_UNK, s64 *, M2C_UNK *, s64 *); /* extern */
extern char D_00AEF370[];
extern char D_00AEF380[];
extern char D_00AEF488[];
extern char D_00B00800[];
extern char D_00B00904[];
extern char D_00B00908[];
extern char D_00B00A0C[];
extern void *D_00B00C30;

s32 func_00AE3690(s32 *arg0) {
    M2C_UNK *var_a1_2;
    M2C_UNK *var_a2;
    M2C_UNK *var_s2;
    s32 temp_a0;
    s32 temp_s0;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s1;
    s32 var_s4;
    s32 var_s5;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s64 *var_a1;
    s64 *var_a3;
    u8 temp_a1;
    void *temp_a2;

    var_v0 = 0;
    var_s5 = *arg0;
    switch (var_s5) {                               /* irregular */
    case 0:
        var_a1 = ((void *)D_00AEF380);
        var_a3 = ((void *)D_00B00800);
        var_a0 = 8;
        do {
            var_a0 -= 1;
            M2C_FIELD(var_a3, s128 *, 0) = (s128) M2C_FIELD(var_a1, s128 *, 0);
            M2C_FIELD(var_a3, s128 *, 0x10) = (s128) M2C_FIELD(var_a1, s128 *, 0x10);
            var_a1 += 0x20;
            var_a3 += 0x20;
        } while (var_a0 > 0);
        *var_a3 = *var_a1;
        (*(s32 *)D_00B00904) = 0x43240000;
        var_a2 = ((void *)D_00AEF488);
        var_a1_2 = ((void *)D_00B00908);
        var_a0_2 = 0x21;
        do {
            var_a0_2 -= 1;
            M2C_FIELD(var_a1_2, s32 *, 0) = (s32) M2C_FIELD(var_a2, s32 *, 0);
            M2C_FIELD(var_a1_2, s32 *, 4) = (s32) M2C_FIELD(var_a2, s32 *, 4);
            var_a2 += 8;
            var_a1_2 += 8;
        } while (var_a0_2 > 0);
        (*(f32 *)D_00B00A0C) = 164.0f + 56.0f;
        var_s4 = 0;
        var_s2 = ((void *)D_00AEF370);
        var_s1 = 0;
        M2C_FIELD(D_00B00C30, s32 *, 0x20) = func_00AE4210(2, ((void *)D_00B00800), var_a2, var_a3);
        do {
            temp_s0 = func_00154F98(var_s4) == 1;
            temp_a0 = *(var_s2 + (temp_s0 * 4));
            if (temp_a0 < 0) {
                var_v0_2 = 0;
            } else {
                var_v0_2 = func_001F08B0(temp_a0);
            }
            if (M2C_FIELD((D_00B00C30 + var_s1), s16 *, 4) != 1) {
                var_v0_3 = func_001F08B0(0x2C0060);
            } else {
                var_v0_3 = 0;
            }
            func_00AE3E50(M2C_FIELD(D_00B00C30, s32 *, 0x20), var_s4, var_v0_2, var_v0_3);
            var_s4 += 1;
            var_s2 += 8;
            temp_a2 = D_00B00C30 + var_s1;
            temp_a1 = M2C_FIELD(temp_a2, u8 *, 8);
            var_s1 += 8;
            M2C_FIELD(temp_a2, s8 *, 8) = (s8) ((temp_a1 & ~1) | (temp_s0 & 1));
        } while (var_s4 < 2);
        var_s5 += 1;
        /* fallthrough */
    case 1:
        var_s5 += 1;
        /* fallthrough */
    case 2:
        var_v0 = 1;
        break;
    }
    *arg0 = var_s5;
    return var_v0;
}
