/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00207390(s32, M2C_UNK);                /* extern */
M2C_UNK func_00209A00(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_00A0C770(void *, M2C_UNK);                 /* extern */
extern char D_00591E4D[];
extern char D_00591F24[];

void func_00BA26B0(void *arg0) {
    u16 temp_a0;

    temp_a0 = M2C_FIELD(arg0, u16 *, 0x18);
    if ((temp_a0 != 0x10) && (temp_a0 != 0xA) && (temp_a0 != 9) && (temp_a0 != 5) && (temp_a0 != 1)) {
        return;
    }
    switch ((*(u8 *)D_00591F24)) {                           /* irregular */
    case 2:
    case 6:
    case 3:
        if (M2C_FIELD(arg0, u8 *, 0) == (*(u8 *)D_00591E4D)) {
            return;
        }
        return;
    default:
    case 0:
        if ((M2C_FIELD(arg0, s32 *, 0x1C) >= 0x1300) && (func_00A0C770(arg0, 0x300) != 0)) {
            M2C_FIELD(arg0, s8 *, 0x16) = 0x47;
            M2C_FIELD(arg0, u16 *, 0x18) = 0U;
            return;
        }
        if (func_00A0C770(arg0, 0x100) != 0) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 0;
            func_00209A00(M2C_FIELD(arg0, s32 *, 4), 0x1BF, 0);
            func_00207390(M2C_FIELD(arg0, s32 *, 4), 6);
            M2C_FIELD(arg0, s8 *, 0x4E) = 8;
            M2C_FIELD(arg0, s8 *, 0x16) = 0xFD;
            M2C_FIELD(arg0, u16 *, 0x18) = 0x13U;
        }
        break;
    }
}
