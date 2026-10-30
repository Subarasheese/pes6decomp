/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001B6A30(s32);                             /* extern */
M2C_UNK func_001F4B20(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0023B040();                            /* extern */
M2C_UNK func_0023EA10(M2C_UNK);                     /* extern */
s32 func_0023F330();                                /* extern */
M2C_UNK func_008BE400();                            /* extern */
M2C_UNK func_008C0470(M2C_UNK *);                   /* extern */
M2C_UNK func_008C2350(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_0093D740();                                /* extern */
extern char D_00510FD0[];
extern char D_0053C300[];
extern char D_008E1CE0[];

s32 func_008BE800(void) {
    func_0023EA10(0);
    if ((*(s32 *)D_00510FD0) == 4) {
        if (M2C_FIELD(((void *)D_0053C300), s8 *, 9) == 1) {
            if (func_001B6A30(0x4FD5) == 0) {
                return 0;
            }
            goto block_11;
        }
        if (func_001B6A30(func_0023F330()) == 0) {
            return 0;
        }
        goto block_11;
    }
    if (func_0093D740() != 0) {
        func_001F4B20(-1, 0xEE81BE, 0xEE81BF, 0);
block_11:
        if (M2C_FIELD(((void *)D_0053C300), s8 *, 9) == 2) {
            func_008BE400();
        }
        func_008C2350(((void *)D_008E1CE0), 0, 3);
        func_008C0470(((void *)D_008E1CE0));
        func_0023B040();
        return 1;
    }
    return 0;
}
