/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00147E60(M2C_UNK);                         /* extern */
M2C_UNK func_00147F10(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_001BBC60(s32);                         /* extern */
s32 func_001BBEC0(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
s32 func_001D5A10(M2C_UNK);                         /* extern */
M2C_UNK func_001E6AD0();                            /* extern */
M2C_UNK func_002211C0();                            /* extern */
s8 func_002291C0();                                 /* extern */
s32 func_002307F0();                                /* extern */
M2C_UNK func_0026BC60();                            /* extern */
s32 func_002F7970();                                /* extern */
extern char D_003AB4A8[];
extern char D_003AE972[];
extern char D_003AE976[];
extern char D_003AE982[];
extern char D_003AE992[];
extern char D_003AE998[];
extern char D_003AE99C[];
extern char D_003AE9A4[];
extern char D_003AE9A8[];
extern char D_003AE9AC[];
extern char D_003AE9B0[];
extern char D_003AE9B4[];
extern char D_003AE9B8[];
extern char D_003AE9BC[];
extern char D_003AE9C0[];
extern char D_003AE9C4[];
extern char D_003AE9C8[];
extern char D_003D9A70[];
extern char D_0058D7A5[];
extern char D_0058D7A7[];
extern char D_00591DB4[];
extern char D_00591DB5[];
extern char D_00591DB7[];
extern char D_00592800[];
extern char D_0059295B[];
extern char D_0059295C[];
extern M2C_UNK func_0026B9F0;
extern M2C_UNK func_0026BED0;

void func_0026BFA0(void) {
    s16 var_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_s2;
    s8 *var_s0;
    u8 *var_v1;

    (*(s8 *)D_00591DB4) = 0;
    (*(s8 *)D_00591DB5) = 0;
    (*(s8 *)D_00591DB7) = 0;
    (*(s8 *)D_0058D7A7) = 0;
    (*(s8 *)D_003AE976) = 0;
    (*(s8 *)D_003AE982) = 0;
    (*(s8 *)D_003AE992) = 0;
    if ((func_001D5A10(0x1024D) != 0) && ((*(s8 *)D_003AE972) != 1)) {
        if (func_00147E60(0x4EDF) == 0) {
            func_00147F10(0, 0x4EDF);
        }
        if (func_00147E60(0x4EE0) == 0) {
            func_00147F10(0, 0x4EE0);
        }
        func_001E6AD0();
        (*(s32 *)D_003AE9AC) = -1;
        (*(s32 *)D_003AE9B0) = -1;
        (*(s32 *)D_003AE9B4) = -1;
        (*(s32 *)D_003AE9B8) = -1;
        (*(s32 *)D_003AE9BC) = -1;
        (*(s32 *)D_003AE9C0) = -1;
        (*(s32 *)D_003AE9C4) = -1;
        (*(s32 *)D_003AE9C8) = -1;
        func_0026BC60();
        if (!(func_002307F0() & 0xFF)) {
            (*(s8 *)D_0058D7A5) = func_002291C0();
        } else {
            (*(s8 *)D_0058D7A5) = 0;
        }
        if ((*(s32 *)D_003AE99C) == 0) {
            (*(s32 *)D_003AE99C) = func_001D5A10(0x1024D);
        }
        var_s1 = 0;
        (*(s8 *)D_003AE972) = 1;
        var_s2 = 0;
        var_s0 = ((void *)D_003AB4A8);
        do {
            if (func_002F7970() != 0) {
                if (var_s2 == 0) {
                    var_a0 = 0;
                } else {
                    var_a0 = -1;
                }
            } else {
                var_a0 = 0;
                var_v1 = ((void *)D_00592800);
loop_17:
                if (var_s2 == *var_v1) {

                } else {
                    var_a0 += 1;
                    var_v1 += 0x28;
                    if (var_a0 >= 8) {
                        if ((*(u8 *)D_0059295B) == var_s2) {
                            var_a0 = var_s2;
                        } else if ((*(u8 *)D_0059295C) == var_s2) {
                            var_a0 = var_s2;
                        } else {
                            var_a0 = -1;
                        }
                    } else {
                        goto loop_17;
                    }
                }
            }
            if (var_a0 >= 0) {
                var_s1 |= 1 << *var_s0;
            }
            var_s2 += 1;
            var_s0 += 1;
        } while (var_s2 < 8);
        (*(s16 *)D_003AE998) = var_s1;
        temp_v0 = func_001BBEC0(0, &func_0026BED0, 0, 0, 0, ((void *)D_003D9A70));
        (*(s32 *)D_003AE9A8) = temp_v0;
        func_001BBC60(temp_v0);
        if (func_002F7970() == 0) {
            temp_v0_2 = func_001BBEC0(0, &func_0026B9F0, 0, 0, 0, ((void *)D_003D9A70));
            (*(s32 *)D_003AE9A4) = temp_v0_2;
            func_001BBC60(temp_v0_2);
        }
        func_002211C0();
    }
}
