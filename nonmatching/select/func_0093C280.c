/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00121430(s8 *, s8 *);                  /* extern */
s32 func_001B4D80(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_001B8380(M2C_UNK);                     /* extern */
M2C_UNK sprintf(s8 *, M2C_UNK *, s32);        /* extern */
M2C_UNK func_0023F510(M2C_UNK);                     /* extern */
M2C_UNK func_008B2E50(s32, M2C_UNK);                /* extern */
s32 func_008B2E80(M2C_UNK);                         /* extern */
M2C_UNK func_008B2F30(s32, s8 *);                   /* extern */
s32 func_008B2F50(s32, s32);                        /* extern */
s32 func_008B3310(s32, s32, s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_008B33C0(M2C_UNK, s32 *, s32 *, s32);      /* extern */
M2C_UNK func_0093C1C0();                            /* extern */
extern s32 D_003EAB74;
extern s32 D_003EAB80;
extern s32 D_003EAB88;
extern char D_0095E170[];
extern char D_00966700[];
extern char D_00966708[];
extern char D_00967BE0[];
extern char D_00967BE4[];
extern char D_00967C30[];
extern char D_00967C34[];
extern char D_00967C40[];

s32 func_0093C280(void) {
    s8 sp40;
    s8 sp1040;
    s8 sp2040;
    s32 sp3040;
    s32 *var_a0;
    s32 *var_a0_2;
    s32 *var_a1;
    s32 *var_a1_2;
    s32 *var_a2;
    s32 *var_s1;
    s32 *var_s1_2;
    s32 *var_s2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_a2_2;
    s32 var_a3;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    s32 var_v1_2;
    s8 *var_v1_3;
    s8 *var_v1_4;
    s8 *var_v1_5;

    var_a1 = ((void *)D_0095E170);
    var_a0 = &sp3040;
    var_v1 = 0x13;
    do {
        var_v1 -= 1;
        *var_a0 = *var_a1;
        var_a1 += 4;
        var_a0 += 4;
    } while (var_v1 > 0);
    var_a3 = 0;
    var_a2 = &sp3040;
    var_a1_2 = ((void *)D_00967BE0);
    do {
        if (D_003EAB88 & *var_a2) {
            *var_a1_2 = 2;
        } else {
            *var_a1_2 = 0;
        }
        var_a3 += 1;
        var_a2 += 4;
        var_a1_2 += 4;
    } while (var_a3 < 0x13);
    if ((D_003EAB88 & 0x04000000) || (D_003EAB88 & 0x08000000)) {
        (*(s32 *)D_00967BE4) = 2;
    }
    temp_v0 = func_008B33C0(0x1039F, var_a1_2, var_a2, var_a3);
    D_003EAB80 = temp_v0;
    if (temp_v0 == 0) {
        return 0;
    }
    var_v1_2 = 0;
    var_a0_2 = ((void *)D_00967C40);
    do {
        M2C_FIELD(var_a0_2, s32 *, 0) = 0;
        var_v1_2 += 7;
        M2C_FIELD(var_a0_2, s32 *, 4) = 0;
        M2C_FIELD(var_a0_2, s32 *, 8) = 0;
        M2C_FIELD(var_a0_2, s32 *, 0xC) = 0;
        M2C_FIELD(var_a0_2, s32 *, 0x10) = 0;
        M2C_FIELD(var_a0_2, s32 *, 0x14) = 0;
        M2C_FIELD(var_a0_2, s32 *, 0x18) = 0;
        var_a0_2 += 0x1C;
    } while (var_v1_2 < 0x15);
    var_s0 = 0;
    var_s2 = ((void *)D_00967BE0);
    var_s1 = ((void *)D_00967C40);
loop_15:
    if (var_s0 > 0) {
        var_a2_2 = M2C_FIELD(var_s2, s32 *, -4);
    } else {
        var_a2_2 = 0;
    }
    temp_v0_2 = func_008B3310(D_003EAB80, var_s0, var_a2_2, 0, 0, 1);
    *var_s1 = temp_v0_2;
    if (temp_v0_2 == 0) {
        func_0093C1C0();
        return 0;
    }
    var_s0 += 1;
    var_s2 += 4;
    var_s1 += 4;
    if (var_s0 >= 0x15) {
        var_s0_2 = 0;
        var_s1_2 = ((void *)D_00967C30);
        do {
            temp_v0_3 = func_008B2F50((*(s32 *)D_00967C40), var_s0_2);
            *var_s1_2 = temp_v0_3;
            func_008B2E50(temp_v0_3, 0);
            var_s0_2 += 1;
            var_s1_2 += 4;
        } while (var_s0_2 < 2);
        func_008B2E50((*(s32 *)D_00967C30), 1);
        var_v1_3 = &sp2040;
        var_v0 = 0x1000;
        if (var_v1_3 != NULL) {
            do {
                *var_v1_3 = 0;
                var_v0 -= 1;
                var_v1_3 += 1;
            } while (var_v0 != 0);
        }
        var_v1_4 = &sp1040;
        var_v0_2 = 0x1000;
        if (var_v1_4 != NULL) {
            do {
                *var_v1_4 = 0;
                var_v0_2 -= 1;
                var_v1_4 += 1;
            } while (var_v0_2 != 0);
        }
        var_v1_5 = &sp40;
        var_v0_3 = 0x1000;
        if (var_v1_5 != NULL) {
            do {
                *var_v1_5 = 0;
                var_v0_3 -= 1;
                var_v1_5 += 1;
            } while (var_v0_3 != 0);
        }
        sprintf(&sp1040, ((void *)D_00966700), func_008B2E80(0x200F8));
        sprintf(&sp40, ((void *)D_00966700), func_008B2E80(0x200F7));
        if (!(D_003EAB88 & 0x04000000)) {
            if (D_003EAB88 & 0x08000000) {
                func_00121430(&sp2040, &sp40);
            }
        } else {
            func_00121430(&sp2040, &sp1040);
            if (D_003EAB88 & 0x08000000) {
                func_00121430(&sp2040, ((void *)D_00966708));
                func_00121430(&sp2040, &sp40);
            }
        }
        func_008B2F30((*(s32 *)D_00967C34), &sp2040);
        D_003EAB74 = func_001B4D80(0x445B0000, 0x445A8000);
        func_0023F510(4);
        func_001B8380(0);
        return 1;
    }
    goto loop_15;
}
