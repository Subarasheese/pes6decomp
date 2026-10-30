/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_008A4398;
extern char D_008A64CC[];

s32 func_00828050(s32 arg0) {
    s32 *var_a1;
    s32 *var_v0_2;
    s32 *var_v0_3;
    s32 var_a2;
    s32 var_a4;
    s32 var_v0;
    s32 var_v0_4;

    if (arg0 == 0) {
        goto block_39;
    }
    if (D_008A4398 != NULL) {
        var_v0 = M2C_FIELD(D_008A4398, s32 *, 0x49E8);
    } else {
        var_v0 = 0;
    }
    if (arg0 == var_v0) {
        goto block_39;
    }
    if (D_008A4398 == NULL) {
        var_v0_2 = NULL;
    } else {
        var_v0_2 = ((void *)D_008A64CC);
    }
    if (var_v0_2 != NULL) {
        var_a2 = *var_v0_2;
    } else {
        var_a2 = 0;
    }
    var_a4 = 0;
loop_38:
    if (var_a4 >= var_a2) {
block_39:
        return 0;
    }
    if (D_008A4398 != NULL) {
        var_a1 = ((void *)D_008A64CC);
    } else {
        var_a1 = NULL;
    }
    if (var_a1 == NULL) {
        var_v0_3 = NULL;
    } else if (var_a4 < 0) {
        var_v0_3 = NULL;
    } else if (var_a4 < 0x32) {
        var_v0_3 = var_a1 + (var_a4 * 0x38) + 0xC;
    } else {
        var_v0_3 = NULL;
    }
    if (var_v0_3 != NULL) {
        var_v0_4 = *var_v0_3;
    } else {
        var_v0_4 = 0;
    }
    if (arg0 != var_v0_4) {
        var_a4 += 1;
        goto loop_38;
    }
    return 1;
}
