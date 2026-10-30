/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CE59B0[];
extern char D_00CE5A78[];
extern char D_00CE5A7C[];
extern char D_00CE5A83[];

void func_00BE0820(s32 arg0) {
    s32 *temp_a1;
    s32 *var_a1;
    s32 *var_a4;
    s32 var_a0;
    s32 var_a3;
    s32 var_a3_2;
    u32 temp_a5;
    u32 var_a7;

    (*(s8 *)D_00CE5A83) = 3;
    (*(s32 *)D_00CE5A78) = arg0;
    (*(s32 *)D_00CE5A7C) = arg0;
    if (arg0 == 0x69) {
        M2C_FIELD(((void *)D_00CE59B0), u8 *, 0xD2) = 0U;
        M2C_FIELD(((void *)D_00CE59B0), s8 *, 0xD1) = 0xFF;
        M2C_FIELD(((void *)D_00CE59B0), s8 *, 0xD0) = 0;
    } else {
        var_a7 = 0;
        if (0 < 0x69) {
            do {
                if (arg0 == var_a7) {
                    temp_a5 = var_a7 >> 0x1F;
                    M2C_FIELD(((void *)D_00CE59B0), u8 *, 0xD2) = (u8) ((var_a7 / 50) + temp_a5);
                    M2C_FIELD(((void *)D_00CE59B0), s8 *, 0xD0) = (s8) ((s32) var_a7 % 5);
                    M2C_FIELD(((void *)D_00CE59B0), s8 *, 0xD1) = (s8) ((s32) ((var_a7 / 5) + temp_a5) % 10);
                }
                var_a7 += 1;
            } while ((s32) var_a7 < 0x69);
        }
    }
    var_a4 = ((void *)D_00CE59B0);
    var_a3 = 0;
    var_a1 = ((void *)D_00CE59B0);
    do {
        M2C_FIELD(var_a1, s32 *, 0) = 0x73;
        var_a3 += 8;
        M2C_FIELD(var_a1, s32 *, 4) = 0x73;
        M2C_FIELD(var_a1, s32 *, 8) = 0x73;
        M2C_FIELD(var_a1, s32 *, 0xC) = 0x73;
        M2C_FIELD(var_a1, s32 *, 0x10) = 0x73;
        M2C_FIELD(var_a1, s32 *, 0x14) = 0x73;
        M2C_FIELD(var_a1, s32 *, 0x18) = 0x73;
        M2C_FIELD(var_a1, s32 *, 0x1C) = 0x73;
        var_a1 += 0x20;
    } while (var_a3 < 0x2A);
    temp_a1 = &(((void *)D_00CE59B0))[var_a3];
    var_a3_2 = 0;
    M2C_FIELD(temp_a1, s32 *, 0) = 0x73;
    M2C_FIELD(temp_a1, s32 *, 4) = 0x73;
    var_a0 = (M2C_FIELD(((void *)D_00CE59B0), u8 *, 0xD2) & 0xFF) * 0x32;
    do {
        if (var_a0 < 0x69) {
            *var_a4 = var_a0;
        }
        var_a3_2 += 1;
        var_a0 += 1;
        var_a4 += 4;
    } while (var_a3_2 < 0x32);
}
