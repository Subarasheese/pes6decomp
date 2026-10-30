/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void memclr(void *, int);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00873EE0(s32 *, void *, M2C_UNK);      /* extern */
M2C_UNK func_00873F60(s32 *, s32 *);                /* extern */
M2C_UNK func_00873FD0(s32 *, s32);                  /* extern */
M2C_UNK func_00874040(s32 *, void *);               /* extern */
M2C_UNK func_00874120(s32 *, void *);               /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470();                            /* extern */

s32 func_00867B10(s32 *arg0, void *arg1, s32 *arg2, s32 arg3) {
    if ((arg0 != NULL) && (arg1 != NULL) && (arg2 != NULL) && (arg3 != 0)) {
        if (*arg0 != 0x3042) {
            return -0x46;
        }
        func_00874470();
        func_00873FD0(arg0, arg3);
        memclr(arg1, 0x31);
        func_00873EE0(arg0, arg1, 0x30);
        func_00873F60(arg0, arg1 + 0x15C);
        func_001C48E8(arg1 + 0x160, 0, 0x31);
        func_00873EE0(arg0, arg1 + 0x160, 0x30);
        func_00874120(arg0, arg1 + 0x191);
        func_00874120(arg0, arg1 + 0x31);
        func_00873F60(arg0, arg1 + 0x14C);
        func_00874040(arg0, arg1 + 0x32);
        func_00874040(arg0, arg1 + 0x34);
        func_00874040(arg0, arg1 + 0x36);
        func_00874040(arg0, arg1 + 0x38);
        func_00874040(arg0, arg1 + 0x3A);
        func_00874040(arg0, arg1 + 0x3C);
        func_00874040(arg0, arg1 + 0x3E);
        func_00873F60(arg0, arg1 + 0x150);
        func_00873F60(arg0, arg1 + 0x154);
        func_001C48E8(arg1 + 0x46, 0, 0x101);
        func_00873EE0(arg0, arg1 + 0x46, 0x100);
        func_00873F60(arg0, arg1 + 0x158);
        *arg2 = 0;
        func_00873F60(arg0, arg2);
        M2C_FIELD(arg1, s8 *, 0x19E) = 0;
        func_00874460(arg0);
        return 0;
    }
    return -0x18;
}
