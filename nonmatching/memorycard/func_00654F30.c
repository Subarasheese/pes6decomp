/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef char Check128Width[sizeof(s128)==16?1:-1];

extern void func_002F4E10(void *);
extern char D_0065E7F0[];
extern char D_0065EB70[];
extern char D_0065EC94[];
extern void *D_0065EDC0;

void func_00654F30(void) {
    M2C_UNK32 sp20;
    M2C_UNK32 *var_a1_3;
    M2C_UNK32 *var_a2;
    M2C_UNK32 *var_a2_2;
    M2C_UNK32 *var_a2_3;
    M2C_UNK32 *var_a3;
    M2C_UNK32 *var_a4;
    s32 var_a0;
    s32 var_a1;
    s32 var_a1_2;

    if (D_0065EDC0 != NULL) {
        func_002F4E10(D_0065EDC0);
        D_0065EDC0 = NULL;
    }
    var_a4 = &sp20;
    var_a2 = ((void *)D_0065E7F0);
    var_a1 = 9;
    do {
        var_a1 -= 1;
        M2C_FIELD(var_a4, s128 *, 0) = (s128) M2C_FIELD(var_a2, s128 *, 0);
        M2C_FIELD(var_a4, s128 *, 0x10) = (s128) M2C_FIELD(var_a2, s128 *, 0x10);
        var_a2 += 0x20;
        var_a4 += 0x20;
    } while (var_a1 > 0);
    var_a3 = ((void *)D_0065EB70);
    var_a1_2 = 9;
    var_a2_2 = &sp20;
    *var_a4 = *var_a2;
    do {
        var_a1_2 -= 1;
        M2C_FIELD(var_a3, s128 *, 0) = (s128) M2C_FIELD(var_a2_2, s128 *, 0);
        M2C_FIELD(var_a3, s128 *, 0x10) = (s128) M2C_FIELD(var_a2_2, s128 *, 0x10);
        var_a2_2 += 0x20;
        var_a3 += 0x20;
    } while (var_a1_2 > 0);
    var_a1_3 = ((void *)D_0065EC94);
    var_a0 = 0x49;
    var_a2_3 = &sp20;
    *var_a3 = *var_a2_2;
    do {
        var_a0 -= 1;
        *var_a1_3 = *var_a2_3;
        var_a2_3 += 4;
        var_a1_3 += 4;
    } while (var_a0 > 0);
}
