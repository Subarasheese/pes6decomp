/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DC9F0(int, int);
s32 func_00843C50(u16);                             /* extern */
s32 func_00843D50(s32);                             /* extern */
M2C_UNK func_00846C50();                            /* extern */
extern u16 D_003E77F0;
extern s32 D_003E77F8;
extern s32 D_003EA2C8;
extern s32 D_003EA2CC;

s32 func_00846BB0(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;

    func_00846C50();
    if (arg0 == 0) {
        temp_v0 = func_00843C50(D_003E77F0);
        D_003E77F8 = temp_v0;
        if (temp_v0 == -1) {
            return -1;
        }
        func_002DC9F0(1, 1);
        goto block_6;
    }
    temp_v0_2 = func_00843D50(arg0);
    D_003EA2CC = temp_v0_2;
    if (temp_v0_2 == -1) {
        return -1;
    }
    func_002DC9F0(1, 0);
block_6:
    D_003EA2C8 = arg1;
    return 0;
}
