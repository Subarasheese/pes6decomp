/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008FA1C0[];
extern char D_008FA9C0[];

void func_008F7970(void) {
    M2C_UNK *var_v1;
    s32 *var_a0;
    s32 temp_a3;
    s32 temp_a4;
    s32 var_a1;
    s32 var_a2;

    var_a1 = 0;
    var_a0 = ((void *)D_008FA9C0);
    var_v1 = ((void *)D_008FA1C0);
    do {
        temp_a4 = M2C_FIELD(var_v1, s32 *, 0);
        *var_a0 = 0;
        if (temp_a4 & 0x20) {
            var_a2 = *var_a0 | 0x100;
            goto block_41;
        }
        if (temp_a4 & 0x40) {
            var_a2 = *var_a0 | 0x200;
            goto block_41;
        }
        if (temp_a4 & 0x2000) {
            var_a2 = *var_a0 | 0x400;
            goto block_41;
        }
        if (temp_a4 & 0x800) {
            var_a2 = *var_a0 | 0x1000;
            goto block_41;
        }
        if (temp_a4 & 1) {
            var_a2 = *var_a0 | 0x10;
            goto block_41;
        }
        temp_a3 = M2C_FIELD(var_v1, s32 *, 4);
        if (temp_a3 & 1) {
            var_a2 = *var_a0 | 1;
            goto block_41;
        }
        if (temp_a4 & 2) {
            var_a2 = *var_a0 | 0x20;
            goto block_41;
        }
        if (temp_a3 & 2) {
            var_a2 = *var_a0 | 2;
            goto block_41;
        }
        if (temp_a4 & 8) {
            var_a2 = *var_a0 | 0x40;
            goto block_41;
        }
        if (temp_a3 & 8) {
            var_a2 = *var_a0 | 4;
            goto block_41;
        }
        if (temp_a4 & 4) {
            var_a2 = *var_a0 | 0x80;
            goto block_41;
        }
        if (temp_a3 & 4) {
            var_a2 = *var_a0 | 8;
            goto block_41;
        }
        if (temp_a3 & 0x4000) {
            var_a2 = *var_a0 | 0x8000;
            goto block_41;
        }
        if (temp_a4 & 0x10) {
            var_a2 = *var_a0 | 0x800;
block_41:
            *var_a0 = var_a2;
        }
        var_a1 += 1;
        var_a0 += 4;
        var_v1 += 0x10;
    } while (var_a1 < 8);
}
