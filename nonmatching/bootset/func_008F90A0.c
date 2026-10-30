/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef char Check128Width[sizeof(s128)==16?1:-1];

extern void func_002F3AE0(void *, void *);
extern void func_002F3C30(void *);
extern void func_002F3AA0(s32);
extern void func_002F3BF0(void *);
extern void func_002F4D80(s32);
s32 func_002F4E90(M2C_UNK);                         /* extern */
extern char D_008F9D60[];
extern char D_008F9E50[];
extern char D_008FAE50[];
extern char D_008FAF40[];
extern char D_008FB030[];

void func_008F90A0(void) {
    s128 sp20;
    M2C_UNK *var_a1_3;
    s128 *var_a0;
    s128 *var_a0_2;
    s128 *var_a1;
    s128 *var_a1_2;
    s128 *var_a2;
    s32 temp_v0;
    s32 var_a0_3;
    s32 var_v1;
    s32 var_v1_2;

    if (M2C_FIELD(((void *)D_008FB030), s32 *, 0) == 0) {
        temp_v0 = func_002F4E90(0x17);
        M2C_FIELD(((void *)D_008FB030), s32 *, 0) = temp_v0;
        func_002F4D80(temp_v0);
        M2C_FIELD(((void *)D_008FB030), s8 *, 0x9F) = 0;
        var_a1 = ((void *)D_008F9D60);
        M2C_FIELD(((void *)D_008FB030), s8 *, 0x9E) = 0;
        var_a0 = &sp20;
        var_v1 = 0xF;
        do {
            var_v1 -= 1;
            *var_a0 = *var_a1;
            var_a1 += 0x10;
            var_a0 += 0x10;
        } while (var_v1 > 0);
        var_a1_2 = &sp20;
        var_a0_2 = ((void *)D_008FAE50);
        var_v1_2 = 0xF;
        do {
            var_v1_2 -= 1;
            *var_a0_2 = *var_a1_2;
            var_a1_2 += 0x10;
            var_a0_2 += 0x10;
        } while (var_v1_2 > 0);
        var_a2 = &sp20;
        var_a1_3 = ((void *)D_008FAF40);
        var_a0_3 = 0x1E;
        do {
            var_a0_3 -= 1;
            M2C_FIELD(var_a1_3, s32 *, 0) = (s32) M2C_FIELD(var_a2, s32 *, 0);
            M2C_FIELD(var_a1_3, s32 *, 4) = (s32) M2C_FIELD(var_a2, s32 *, 4);
            var_a2 += 8;
            var_a1_3 += 8;
        } while (var_a0_3 > 0);
        M2C_FIELD(((void *)D_008FB030), s8 *, 0x9D) = 1;
        func_002F3C30((void *) M2C_FIELD(((void *)D_008FB030), s32 *, 0));
        func_002F3AE0((void *) M2C_FIELD(((void *)D_008FB030), s32 *, 0), ((void *)D_008F9E50));
        func_002F3AA0(M2C_FIELD(((void *)D_008FB030), s32 *, 0));
        func_002F3BF0((void *) M2C_FIELD(((void *)D_008FB030), s32 *, 0));
    }
}
