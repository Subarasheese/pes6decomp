/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008204A0(s32);                             /* extern */
s32 func_00964D30(s32);                             /* extern */
s32 func_00964DB0(s32);                             /* extern */
s32 func_00964E10(s32);                             /* extern */
s32 func_00964E70(s32);                             /* extern */
s32 func_00964ED0(s32);                             /* extern */
s32 func_00964F30(s32);                             /* extern */
s32 func_00964F90(s32);                             /* extern */
s32 func_00964FD0();                                /* extern */

void *func_009D6590(s32 arg0, void *arg1) {
    s32 temp_v0;

    M2C_FIELD(arg1, s32 *, 0) = func_00964FD0();
    M2C_FIELD(arg1, s32 *, 4) = func_00964F90(arg0);
    M2C_FIELD(arg1, s32 *, 8) = func_00964F30(arg0);
    M2C_FIELD(arg1, s32 *, 0xC) = func_00964ED0(arg0);
    M2C_FIELD(arg1, s32 *, 0x10) = func_00964E10(arg0);
    M2C_FIELD(arg1, s32 *, 0x14) = func_00964E70(arg0);
    M2C_FIELD(arg1, s32 *, 0x18) = func_00964DB0(arg0);
    M2C_FIELD(arg1, s32 *, 0x20) = func_008204A0(M2C_FIELD(arg1, s32 *, 0));
    M2C_FIELD(arg1, s32 *, 0x1C) = 6;
    temp_v0 = func_00964D30(arg0);
    switch (temp_v0) {                              /* irregular */
    case 3:
    case 0:
        break;
    case 2:
        M2C_FIELD(arg1, s32 *, 0x1C) = 1;
        break;
    case 1:
        M2C_FIELD(arg1, s32 *, 0x1C) = 0;
        break;
    }
    return arg1;
}
