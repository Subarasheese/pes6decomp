/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef char Check128Width[sizeof(s128)==16?1:-1];

extern void func_002F3BF0(void *);
extern void func_002F3AE0(void *, void *);
extern void func_002F4D80(s32);
extern void func_002F3C30(void *);
extern void func_002F3AA0(s32);
extern int func_002E8BD0(void);
extern int func_002E8B80(void);
M2C_UNK func_002F4DA0(s32, M2C_UNK);                /* extern */
s32 func_002F4E90(M2C_UNK);                         /* extern */
extern char D_0065A530[];
extern char D_0065A550[];
extern char D_0065E7F0[];
extern char D_0065EB70[];
extern char D_0065EC94[];
extern char D_0065EDC0[];

void func_00655090(void) {
    M2C_UNK32 sp20;
    M2C_UNK *var_v1_2;
    M2C_UNK32 *var_a0_3;
    M2C_UNK32 *var_a1;
    M2C_UNK32 *var_a1_2;
    M2C_UNK32 *var_a1_3;
    M2C_UNK32 *var_a2;
    M2C_UNK32 *var_a3;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_4;
    s32 var_v1;

    if (M2C_FIELD(((void *)D_0065EDC0), s32 *, 0) == 0) {
        temp_v0 = func_002F4E90(0x17);
        M2C_FIELD(((void *)D_0065EDC0), s32 *, 0) = temp_v0;
        func_002F4D80(temp_v0);
        M2C_FIELD(((void *)D_0065EDC0), s8 *, 0xBA) = 0;
        var_a1 = ((void *)D_0065E7F0);
        M2C_FIELD(((void *)D_0065EDC0), s8 *, 0xB9) = 0;
        var_a3 = &sp20;
        var_a0 = 9;
        do {
            var_a0 -= 1;
            M2C_FIELD(var_a3, s128 *, 0) = (s128) M2C_FIELD(var_a1, s128 *, 0);
            M2C_FIELD(var_a3, s128 *, 0x10) = (s128) M2C_FIELD(var_a1, s128 *, 0x10);
            var_a1 += 0x20;
            var_a3 += 0x20;
        } while (var_a0 > 0);
        var_a2 = ((void *)D_0065EB70);
        var_a0_2 = 9;
        var_a1_2 = &sp20;
        *var_a3 = *var_a1;
        do {
            var_a0_2 -= 1;
            M2C_FIELD(var_a2, s128 *, 0) = (s128) M2C_FIELD(var_a1_2, s128 *, 0);
            M2C_FIELD(var_a2, s128 *, 0x10) = (s128) M2C_FIELD(var_a1_2, s128 *, 0x10);
            var_a1_2 += 0x20;
            var_a2 += 0x20;
        } while (var_a0_2 > 0);
        var_a0_3 = ((void *)D_0065EC94);
        var_v1 = 0x49;
        var_a1_3 = &sp20;
        *var_a2 = *var_a1_2;
        do {
            var_v1 -= 1;
            *var_a0_3 = *var_a1_3;
            var_a1_3 += 4;
            var_a0_3 += 4;
        } while (var_v1 > 0);
        var_a0_4 = 0;
        M2C_FIELD(((void *)D_0065EDC0), s8 *, 0xB8) = 1;
        var_v1_2 = ((void *)D_0065EDC0);
        do {
            M2C_FIELD(var_v1_2, s32 *, 4) = 0;
            var_a0_4 += 5;
            M2C_FIELD(var_v1_2, s32 *, 8) = 0;
            M2C_FIELD(var_v1_2, s32 *, 0xC) = 0;
            M2C_FIELD(var_v1_2, s32 *, 0x10) = 0;
            M2C_FIELD(var_v1_2, s32 *, 0x14) = 0;
            var_v1_2 += 0x14;
        } while (var_a0_4 < 0x14);
        func_002F3C30((void *) M2C_FIELD(((void *)D_0065EDC0), s32 *, 0));
        func_002F3AE0((void *) M2C_FIELD(((void *)D_0065EDC0), s32 *, 0), ((void *)D_0065A530));
        func_002F3AA0(M2C_FIELD(((void *)D_0065EDC0), s32 *, 0));
        if (func_002E8BD0() == 0x33) {
            func_002F3AE0((void *) M2C_FIELD(((void *)D_0065EDC0), s32 *, 0), ((void *)D_0065A550));
            func_002F3AA0(M2C_FIELD(((void *)D_0065EDC0), s32 *, 0));
        }
        func_002F3BF0((void *) M2C_FIELD(((void *)D_0065EDC0), s32 *, 0));
        if ((func_002E8BD0() == 0x49) || (func_002E8B80() == 1)) {
            func_002F4DA0(M2C_FIELD(((void *)D_0065EDC0), s32 *, 0), 3);
        }
    }
}
