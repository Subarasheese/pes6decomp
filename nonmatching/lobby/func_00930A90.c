/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK sprintf(s32, M2C_UNK *, s32, s32, s32, s32, s32, s32); /* extern */
s32 func_00827B20(s32, s32, s32, s32, s32, s32);    /* extern */
s32 func_00827B70(s32);                             /* extern */
s32 func_00827BB0(s32);                             /* extern */
s32 func_00827BF0(s32);                             /* extern */
s32 func_00827C30(s32);                             /* extern */
s32 func_00827C70(s32);                             /* extern */
s32 func_00827CB0(s32);                             /* extern */
M2C_UNK func_009308C0(s32 *, s32 *, s32 *, s32 *, s32 *, s32 *); /* extern */
extern char D_00A00C90[];

s32 func_00930A90(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp88;
    s32 sp8C;
    s32 sp90;
    s32 sp94;
    s32 sp98;
    s32 sp9C;
    s32 temp_s0;
    s32 temp_v0;

    sp9C = 0;
    sp98 = 0;
    sp94 = 0;
    sp90 = 0;
    sp8C = 0;
    sp88 = 0;
    if (arg0 != 0) {
        if (arg1 != 0) {
            func_009308C0(&sp9C, &sp98, &sp94, &sp90, &sp8C, &sp88);
            temp_s0 = func_00827B20(sp9C, sp98, sp94, sp90, sp8C, sp88) + arg2;
            sp9C = func_00827B70(temp_s0);
            sp98 = func_00827BB0(temp_s0);
            sp94 = func_00827BF0(temp_s0);
            sp90 = func_00827C30(temp_s0);
            sp8C = func_00827C70(temp_s0);
            temp_v0 = func_00827CB0(temp_s0);
            sp88 = temp_v0;
            if (arg1 != 0) {
                func_001C48E8(arg1, 0, 0x14);
                sprintf(arg1, ((void *)D_00A00C90), sp9C, sp98, sp94, sp90, sp8C, temp_v0);
            }
            return 1;
        }
        goto block_4;
    }
block_4:
    return 0;
}
