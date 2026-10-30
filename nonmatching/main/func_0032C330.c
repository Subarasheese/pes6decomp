/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0030FAC0(s32, M2C_UNK);                    /* extern */
s32 func_00310B60(s32, s32, M2C_UNK, M2C_UNK);      /* extern */
s32 func_00310BA0(s32);                             /* extern */
M2C_UNK func_003387D0(void *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_00338930(void *);                      /* extern */
s32 func_003389D0(M2C_UNK);                         /* extern */
s32 func_00340C80(M2C_UNK);                         /* extern */
extern char D_003E17B0[];
extern M2C_UNK func_0032A050;

s32 func_0032C330(void *arg0) {
    s32 temp_s0;
    s32 temp_s0_2;

    temp_s0 = func_003389D0(0) & 0xFF;
    if (!((f32) func_00310BA0(temp_s0) <= 1638400.0f) && (func_00310B60(temp_s0, func_0030FAC0(temp_s0, 1), 0x2000, 0x190000) != 0)) {
        func_003387D0(arg0, &func_0032A050, ((void *)D_003E17B0));
        goto block_7;
    }
    temp_s0_2 = M2C_FIELD(arg0, s32 *, 0x28);
    if (func_00340C80(0x3FC00000) >= temp_s0_2) {
        return 0;
    }
    func_00338930(arg0);
block_7:
    return 1;
}
