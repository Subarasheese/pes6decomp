/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef char Check128Width[sizeof(s128)==16?1:-1];

extern void func_002F4E10(void *);
extern char D_008F9D60[];
extern char D_008FAA90[];
extern char D_008FAB80[];
extern char D_008FAC70[];
extern char D_008FAD60[];
extern char D_008FAE50[];
extern char D_008FAF40[];
extern void *D_008FB030;

void func_008F8EC0(void) {
    s128 sp30;
    s128 sp120;
    M2C_UNK *var_a2_3;
    M2C_UNK *var_a2_4;
    M2C_UNK *var_a2_5;
    M2C_UNK *var_a2_8;
    s128 *var_a1;
    s128 *var_a1_2;
    s128 *var_a1_6;
    s128 *var_a1_7;
    s128 *var_a2;
    s128 *var_a2_2;
    s128 *var_a2_6;
    s128 *var_a2_7;
    s128 *var_a3;
    s128 *var_a3_2;
    s128 *var_a3_3;
    s128 *var_a3_4;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a1_3;
    s32 var_a1_4;
    s32 var_a1_5;
    s32 var_a1_8;
    s32 var_s1;
    void **var_s0;
    void *temp_a0;

    var_s1 = 0;
    var_s0 = &D_008FB030;
    do {
        temp_a0 = *var_s0;
        if (temp_a0 != NULL) {
            func_002F4E10(temp_a0);
            *var_s0 = NULL;
        }
        var_s1 += 1;
        var_s0 += 0xA8;
    } while (var_s1 < 2);
    var_a1 = &sp120;
    var_a2 = ((void *)D_008F9D60);
    var_a0 = 0xF;
    do {
        var_a0 -= 1;
        *var_a1 = *var_a2;
        var_a2 += 0x10;
        var_a1 += 0x10;
    } while (var_a0 > 0);
    var_a2_2 = &sp120;
    var_a1_2 = ((void *)D_008FAA90);
    var_a0_2 = 0xF;
    do {
        var_a0_2 -= 1;
        *var_a1_2 = *var_a2_2;
        var_a2_2 += 0x10;
        var_a1_2 += 0x10;
    } while (var_a0_2 > 0);
    var_a3 = &sp120;
    var_a2_3 = ((void *)D_008FAB80);
    var_a1_3 = 0x1E;
    do {
        var_a1_3 -= 1;
        M2C_FIELD(var_a2_3, s32 *, 0) = (s32) M2C_FIELD(var_a3, s32 *, 0);
        M2C_FIELD(var_a2_3, s32 *, 4) = (s32) M2C_FIELD(var_a3, s32 *, 4);
        var_a3 += 8;
        var_a2_3 += 8;
    } while (var_a1_3 > 0);
    var_a3_2 = &sp120;
    var_a2_4 = ((void *)D_008FAC70);
    var_a1_4 = 0x1E;
    do {
        var_a1_4 -= 1;
        M2C_FIELD(var_a2_4, s32 *, 0) = (s32) M2C_FIELD(var_a3_2, s32 *, 0);
        M2C_FIELD(var_a2_4, s32 *, 4) = (s32) M2C_FIELD(var_a3_2, s32 *, 4);
        var_a3_2 += 8;
        var_a2_4 += 8;
    } while (var_a1_4 > 0);
    var_a3_3 = &sp120;
    var_a2_5 = ((void *)D_008FAD60);
    var_a1_5 = 0x1E;
    do {
        var_a1_5 -= 1;
        M2C_FIELD(var_a2_5, s32 *, 0) = (s32) M2C_FIELD(var_a3_3, s32 *, 0);
        M2C_FIELD(var_a2_5, s32 *, 4) = (s32) M2C_FIELD(var_a3_3, s32 *, 4);
        var_a3_3 += 8;
        var_a2_5 += 8;
    } while (var_a1_5 > 0);
    var_a1_6 = &sp30;
    var_a2_6 = ((void *)D_008F9D60);
    var_a0_3 = 0xF;
    do {
        var_a0_3 -= 1;
        *var_a1_6 = *var_a2_6;
        var_a2_6 += 0x10;
        var_a1_6 += 0x10;
    } while (var_a0_3 > 0);
    var_a2_7 = &sp30;
    var_a1_7 = ((void *)D_008FAE50);
    var_a0_4 = 0xF;
    do {
        var_a0_4 -= 1;
        *var_a1_7 = *var_a2_7;
        var_a2_7 += 0x10;
        var_a1_7 += 0x10;
    } while (var_a0_4 > 0);
    var_a3_4 = &sp30;
    var_a2_8 = ((void *)D_008FAF40);
    var_a1_8 = 0x1E;
    do {
        var_a1_8 -= 1;
        M2C_FIELD(var_a2_8, s32 *, 0) = (s32) M2C_FIELD(var_a3_4, s32 *, 0);
        M2C_FIELD(var_a2_8, s32 *, 4) = (s32) M2C_FIELD(var_a3_4, s32 *, 4);
        var_a3_4 += 8;
        var_a2_8 += 8;
    } while (var_a1_8 > 0);
}
