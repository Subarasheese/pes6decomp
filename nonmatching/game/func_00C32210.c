/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002C7D00(s32);
extern s32 func_002C7CD0(s32);
extern s32 func_002C7D30(s32);
M2C_UNK func_00C32430(void *);                      /* extern */
s32 func_00C32710(void *);                          /* extern */
extern char D_00591C09[];

s32 func_00C32210(void *arg0) {
    u8 temp_s1;
    u8 var_v0;

    temp_s1 = M2C_FIELD(arg0, u8 *, 0);
    if ((*(u8 *)D_00591C09) == 5) {
        goto block_15;
    }
    if (func_002C7D30((s32) temp_s1) == 0) {
        if ((func_002C7D00((s32) temp_s1) == 0) && (func_002C7CD0((s32) temp_s1) == 0)) {
            goto block_15;
        }
        M2C_FIELD(arg0, u8 *, 3) = (u8) ((M2C_FIELD(arg0, u8 *, 3) & ~4) | ((func_002C7D00((s32) temp_s1) & 1) * 4));
        var_v0 = (M2C_FIELD(arg0, u8 *, 3) & ~8) | ((func_002C7CD0((s32) temp_s1) & 1) * 8);
        goto block_6;
    }
    M2C_FIELD(arg0, u8 *, 3) = (u8) ((M2C_FIELD(arg0, u8 *, 3) & ~4) | 4);
    var_v0 = (M2C_FIELD(arg0, u8 *, 3) & ~8) | 8;
block_6:
    M2C_FIELD(arg0, u8 *, 3) = var_v0;
    if (func_00C32710(arg0) == 0) {
        func_00C32430(arg0);
block_15:
        return 0;
    }
    return 1;
}
