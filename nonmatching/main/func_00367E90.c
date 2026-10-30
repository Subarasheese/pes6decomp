/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00367E20(void *);                          /* extern */
s32 func_00C5A7D0(s32, s32, s32, M2C_UNK *);        /* extern */
s32 func_00C5A9D0(s32, s32, s32, M2C_UNK *);        /* extern */
s32 func_00C5ABB0(s32, s32, s32, M2C_UNK *);        /* extern */
s32 func_00C5ADD0(s32, s32, s32, M2C_UNK *);        /* extern */
s32 func_00C5AF80(s32, s32, s32, M2C_UNK *);        /* extern */
s32 func_00C5B1F0(s32, s32, s32);                   /* extern */
s32 func_00C5B3C0(s32, s32, s32);                   /* extern */
s32 func_00C5B530(s32, s32, s32);                   /* extern */
extern M2C_UNK func_0036FE30;
extern M2C_UNK func_0036FEC0;
extern M2C_UNK func_0036FF40;
extern M2C_UNK func_0036FFA0;
extern M2C_UNK func_0036FFD0;
extern M2C_UNK func_00370000;

s32 func_00367E90(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (arg1 != -1) {
        if (arg2 != -1) {
            M2C_FIELD(arg0, s8 *, 0x32) = 0;
            M2C_FIELD(arg0, s32 *, 0x38) = 0;
            if (func_00C5B530(arg1, arg2, arg4) != 0) {
                M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
            }
            if (func_00C5B3C0(arg1, arg2, arg4) != 0) {
                M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 2);
            }
            if (func_00C5B1F0(arg1, arg2, arg4) != 0) {
                M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 4);
            }
            if (func_00C5AF80(arg1, arg2, arg3, &func_00370000) != 0) {
                M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 8);
            }
            if (func_00C5ADD0(arg1, arg2, arg3, &func_0036FFA0) != 0) {
                M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 0x10);
            }
            if (func_00C5ABB0(arg1, arg2, arg3, &func_0036FFD0) != 0) {
                M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 0x20);
            }
            if (func_00C5A9D0(arg1, arg2, arg3, &func_0036FF40) != 0) {
                M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 0x40);
            }
            if (func_00C5ABB0(arg1, arg2, arg3, &func_0036FE30) != 0) {
                M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 0x80);
            }
            if (M2C_FIELD(arg0, s32 *, 0xC) == 1) {
                M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 0x100);
            }
            if (func_00C5A7D0(arg1, arg2, arg4, &func_0036FEC0) != 0) {
                M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 0x200);
            }
            if (func_00367E20(arg0) == 0) {
                return 1;
            }
            M2C_FIELD(arg0, s8 *, 0x32) = 1;
            return 1;
        }
        goto block_4;
    }
block_4:
    return 0;
}
