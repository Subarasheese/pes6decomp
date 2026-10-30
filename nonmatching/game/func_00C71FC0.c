/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00C76410(s32);                             /* extern */
s32 func_00C76460(s32);                             /* extern */
extern s32 D_003EA820;
extern char D_00591DCC[];
extern char D_00591DEE[];
extern char D_00CCBD30[];
extern char D_00CCBD4F[];
extern char D_00CCBD52[];
extern char D_00CCBD9F[];
extern char D_00CCBDA2[];

void func_00C71FC0(s32 arg0) {
    M2C_UNK *var_s1;
    s32 var_s0;
    s32 var_s2;
    s32 var_s3;
    s8 var_a1;
    s8 var_a2;
    s8 var_v1;

    var_a2 = 0;
    if ((arg0 != 0) && (((s32) ((*(u16 *)D_00591DEE) & 4) >> 2) != 0)) {
        var_a2 = 1;
    }
    var_a1 = 0;
    if ((arg0 != 0) && (((s32) ((*(u16 *)D_00591DEE) & 0x100) >> 8) != 0)) {
        var_a1 = 1;
    }
    var_s0 = arg0 != 0;
    if (var_s0 != 0) {
        var_s0 = ((s32) ((*(u16 *)D_00591DEE) & 0x200) >> 9) != 0;
    }
    (*(s8 *)D_00CCBD4F) = var_a2;
    (*(s8 *)D_00CCBD9F) = var_a2;
    (*(s8 *)D_00CCBD52) = var_a1;
    (*(s8 *)D_00CCBDA2) = var_a1;
    var_s3 = 0;
    D_003EA820 = 1;
    var_s1 = ((void *)D_00CCBD30);
    do {
        var_s2 = 1;
        if (func_00C76460(var_s3 ^ (*(u8 *)D_00591DCC)) == 0) {
            if (func_00C76410(var_s3 ^ (*(u8 *)D_00591DCC)) != 0) {
                goto block_12;
            }
        } else {
block_12:
            var_s2 = 0;
        }
        var_v1 = var_s0 != 0;
        D_003EA820 = var_s3;
        if (var_v1 != 0) {
            var_v1 = var_s2 != 0;
        }
        M2C_FIELD(var_s1, s8 *, 0x28) = var_v1;
        var_s3 += 1;
        var_s1 += 0x50;
    } while (var_s3 < 2);
}
