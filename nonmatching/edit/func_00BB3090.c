/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BA4920(s32);                             /* extern */
s32 func_00BA4D00(s32);                             /* extern */
s32 func_00BA52C0(s32, s32, M2C_UNK);               /* extern */
M2C_UNK func_00BA5350(s32, s32, s32, M2C_UNK);      /* extern */
M2C_UNK func_00BA64E0(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00BA6600(M2C_UNK);                         /* extern */
s32 func_00BB4780(void *);                          /* extern */
M2C_UNK func_00BBC080();                            /* extern */

void func_00BB3090(void *arg0) {
    s32 temp_v0;

    temp_v0 = func_00BA6600(2);
    switch (temp_v0) {                              /* irregular */
    case 2:
        M2C_FIELD(arg0, s32 *, 0x40) = func_00BB4780(arg0);
        func_00BBC080();
        M2C_FIELD(arg0, s8 *, 0x11) = (s8) M2C_FIELD(arg0, s8 *, 0x10);
        M2C_FIELD(arg0, s8 *, 0x10) = 5;
        return;
    case 1:
        *M2C_FIELD(arg0, s32 **, 8) = func_00BA52C0(M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, s32 *, 4), 0);
        M2C_FIELD(arg0, s8 *, 0x11) = (s8) M2C_FIELD(arg0, s8 *, 0x10);
        M2C_FIELD(arg0, s8 *, 0x10) = 0x1B;
        return;
    case 0:
        if (func_00BA4D00(*M2C_FIELD(arg0, s32 **, 8)) == 0) {
            func_00BA5350(*M2C_FIELD(arg0, s32 **, 8), M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, s32 *, 4), 0);
            M2C_FIELD(arg0, s8 *, 0x11) = (s8) M2C_FIELD(arg0, s8 *, 0x10);
            M2C_FIELD(arg0, s8 *, 0x10) = 0x1B;
            return;
        }
        M2C_FIELD(arg0, s8 *, 0x11) = (s8) M2C_FIELD(arg0, s8 *, 0x10);
        M2C_FIELD(arg0, s8 *, 0x10) = 0x18;
        return;
    default:
        if (*M2C_FIELD(arg0, s32 **, 8) != 0x1CA) {
            if (func_00BA4920(M2C_FIELD(arg0, s32 *, 4)) == 0) {
                func_00BA64E0(1, 0);
            }
            return;
        }
        func_00BA64E0(0, 0);
        return;
    }
}
