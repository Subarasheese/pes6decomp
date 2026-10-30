/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0020A540(void);
extern s32 func_001E6C50(void *);
M2C_UNK func_001DC980(s32);                         /* extern */
M2C_UNK func_001E6B70(s32);                         /* extern */
s32 func_001E6E10(s32);                             /* extern */
extern s32 D_003E9C64;

void func_002673B0(void *arg0) {
    s32 temp_a0_2;
    s32 var_a1;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s2;
    void *temp_a0;
    void *temp_a0_3;
    void *var_a2;
    void *var_s1;
    void *var_s2_2;

    var_s2 = 0;
    var_s1 = arg0;
    do {
        temp_a0 = M2C_FIELD(var_s1, void **, 0x30);
        if (temp_a0 != NULL) {
            func_001E6C50(temp_a0);
            M2C_FIELD(var_s1, void **, 0x30) = NULL;
        }
        var_s2 += 1;
        var_s1 += 4;
    } while (var_s2 < 8);
    var_s1_2 = 0x733C;
    do {
        if (func_001E6E10(var_s1_2) != 0) {
            do {
                func_001E6B70(var_s1_2);
            } while (func_001E6E10(var_s1_2) != 0);
        }
        var_s1_2 += 1;
    } while (var_s1_2 < 0x7345);
    if (D_003E9C64 != 0) {
        func_0020A540();
    }
    D_003E9C64 = 0;
    var_s1_3 = 0;
    var_s2_2 = arg0;
    do {
        temp_a0_2 = M2C_FIELD(var_s2_2, s32 *, 0x50);
        if (temp_a0_2 != 0) {
            func_001DC980(temp_a0_2);
            M2C_FIELD(var_s2_2, s32 *, 0x50) = 0;
        }
        var_s1_3 += 1;
        var_s2_2 += 4;
    } while (var_s1_3 < 4);
    var_a1 = 0;
    var_a2 = arg0;
    do {
        temp_a0_3 = arg0 + var_a1;
        M2C_FIELD(temp_a0_3, s8 *, 0xC8) = 0;
        var_a1 += 5;
        M2C_FIELD(var_a2, s32 *, 0xD4) = 0;
        M2C_FIELD(temp_a0_3, s8 *, 0xC9) = 0;
        M2C_FIELD(var_a2, s32 *, 0xD8) = 0;
        M2C_FIELD(temp_a0_3, s8 *, 0xCA) = 0;
        M2C_FIELD(var_a2, s32 *, 0xDC) = 0;
        M2C_FIELD(temp_a0_3, s8 *, 0xCB) = 0;
        M2C_FIELD(var_a2, s32 *, 0xE0) = 0;
        M2C_FIELD(temp_a0_3, s8 *, 0xCC) = 0;
        M2C_FIELD(var_a2, s32 *, 0xE4) = 0;
        var_a2 += 0x14;
    } while (var_a1 < 0xA);
    M2C_FIELD(arg0, s32 *, 0x1C8) = 0;
}
