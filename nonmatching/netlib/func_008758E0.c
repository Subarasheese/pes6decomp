/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00873EE0(s32 *, void *, M2C_UNK);      /* extern */
M2C_UNK func_00873F60(s32 *, void *);               /* extern */
M2C_UNK func_00873FD0(s32 *, void *);               /* extern */
M2C_UNK func_00874040(s32 *, u16 *);                /* extern */
M2C_UNK func_00874090(s32 *, void *);               /* extern */
M2C_UNK func_00874120(s32 *, void *);               /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470(s32 *);                       /* extern */

s32 func_008758E0(s32 *arg0, void *arg1) {
    u16 sp3E;

    if ((arg0 != NULL) && (arg1 != NULL)) {
        if (*arg0 == 0x9202) {
            func_001C48E8(arg1, 0, 0x298);
            func_00874470(arg0);
            func_00873F60(arg0, arg1);
            func_001C48E8(arg1 + 0x2C, 0, 0x41);
            func_00873EE0(arg0, arg1 + 0x2C, 0x40);
            func_00873FD0(arg0, arg1 + 4);
            func_00873FD0(arg0, arg1 + 8);
            func_001C48E8(arg1 + 0x187, 0, 6);
            func_00873EE0(arg0, arg1 + 0x187, 5);
            func_00874120(arg0, arg1 + 0x18D);
            func_00874120(arg0, arg1 + 0x6D);
            func_00874120(arg0, arg1 + 0x18E);
            func_00874090(arg0, arg1 + 0x10);
            func_00874090(arg0, arg1 + 0xC);
            func_00874120(arg0, arg1 + 0x14);
            func_00874120(arg0, arg1 + 0x18);
            func_00874040(arg0, &sp3E);
            M2C_FIELD(arg1, s32 *, 0x1C) = (s32) sp3E;
            func_00874040(arg0, &sp3E);
            M2C_FIELD(arg1, s32 *, 0x20) = (s32) sp3E;
            func_00874120(arg0, arg1 + 0x6E);
            func_00874120(arg0, arg1 + 0x6F);
            func_00874120(arg0, arg1 + 0x80);
            func_00874120(arg0, arg1 + 0x190);
            func_00874120(arg0, arg1 + 0x185);
            func_00874120(arg0, arg1 + 0x193);
            func_00874120(arg0, arg1 + 0x191);
            func_00874120(arg0, arg1 + 0x186);
            func_00874120(arg0, arg1 + 0x192);
            func_00874120(arg0, arg1 + 0x194);
            func_00874120(arg0, arg1 + 0x18F);
            func_001C48E8(arg1 + 0x70, 0, 0x10);
            func_00873EE0(arg0, arg1 + 0x70, 0xF);
            func_00874040(arg0, arg1 + 0x82);
            func_00874460(arg0);
            return 0;
        }
        return -0x46;
    }
    return -0x18;
}
