/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0063A830(void);
extern int func_002E8C40(void);
extern int func_00309420(void);
s32 func_008B7D40();                                /* extern */
s32 func_00D0F610();                                /* extern */
M2C_UNK func_00D0F680(M2C_UNK);                     /* extern */
extern char D_0065DE40[];
extern char D_0065E640[];

void func_0064E3F0(void) {
    M2C_UNK *var_s0;
    s32 *var_s1;
    s32 temp_a0;
    s32 temp_v1;
    s32 var_s2;
    s32 var_v0;

    var_s2 = 0;
    var_s1 = ((void *)D_0065E640);
    var_s0 = ((void *)D_0065DE40);
    do {
        *var_s1 = 0;
        if (func_00309420() != 0) {
            if ((func_0063A830() != 0) && (func_008B7D40() != 0)) {
                func_00D0F680(0);
            }
            if (func_00D0F610() != 1) {
                goto block_7;
            }
        } else {
block_7:
            temp_a0 = M2C_FIELD(var_s0, s32 *, 0);
            if (temp_a0 & 0x20) {
                var_v0 = *var_s1 | 0x100;
                goto block_47;
            }
            if (temp_a0 & 0x40) {
                var_v0 = *var_s1 | 0x200;
                goto block_47;
            }
            if (temp_a0 & 0x2000) {
                var_v0 = *var_s1 | 0x400;
                goto block_47;
            }
            if (temp_a0 & 0x1000) {
                var_v0 = *var_s1 | 0x1000;
                goto block_47;
            }
            if (temp_a0 & 1) {
                var_v0 = *var_s1 | 0x10;
                goto block_47;
            }
            temp_v1 = M2C_FIELD(var_s0, s32 *, 4);
            if (temp_v1 & 1) {
                var_v0 = *var_s1 | 1;
                goto block_47;
            }
            if (temp_a0 & 2) {
                var_v0 = *var_s1 | 0x20;
                goto block_47;
            }
            if (temp_v1 & 2) {
                var_v0 = *var_s1 | 2;
                goto block_47;
            }
            if (temp_a0 & 8) {
                var_v0 = *var_s1 | 0x40;
                goto block_47;
            }
            if (temp_v1 & 8) {
                var_v0 = *var_s1 | 4;
                goto block_47;
            }
            if (temp_a0 & 4) {
                var_v0 = *var_s1 | 0x80;
                goto block_47;
            }
            if (temp_v1 & 4) {
                var_v0 = *var_s1 | 8;
                goto block_47;
            }
            if (temp_a0 & 0x80) {
                var_v0 = *var_s1 | 0x10000;
                goto block_47;
            }
            if (temp_a0 & 0x100) {
                var_v0 = *var_s1 | 0x20000;
                goto block_47;
            }
            if (temp_a0 & 0x10) {
                var_v0 = *var_s1 | 0x800;
block_47:
                *var_s1 = var_v0;
            }
            if ((func_0063A830() != 0) && (func_008B7D40() != 0)) {
                *var_s1 = 0x200;
            }
            if (func_002E8C40() != 0) {
                *var_s1 = 0x200;
            }
        }
        var_s2 += 1;
        var_s1 += 4;
        var_s0 += 0x10;
    } while (var_s2 < 8);
}
