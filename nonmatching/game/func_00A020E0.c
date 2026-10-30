/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00A70990(u16);                         /* extern */
M2C_UNK func_00A7BF90(u16);                         /* extern */
extern char D_00591E19[];

void func_00A020E0(void *arg0) {
    u16 temp_a1;

    M2C_FIELD(arg0, s8 *, 0x220) = 0;
    M2C_FIELD(arg0, u8 *, 0x221) = 0U;
    M2C_FIELD(arg0, s8 *, 0x222) = 0;
    M2C_FIELD(arg0, s8 *, 0x223) = 0;
    temp_a1 = M2C_FIELD(arg0, u16 *, 0x1A);
    switch (temp_a1) {                              /* irregular */
    case 4:
        M2C_FIELD(arg0, s8 *, 0x4D) = 0x10;
        if ((M2C_FIELD(arg0, u8 *, 0x24) == 0) || ((s32) M2C_FIELD(arg0, u8 *, 0x4C) >= 4)) {
            M2C_FIELD(arg0, u8 *, 0x4C) = 0U;
        }
        if (M2C_FIELD(arg0, u8 *, 0) != (*(u8 *)D_00591E19)) {
            M2C_FIELD(arg0, u8 *, 0x221) = (u8) (M2C_FIELD(arg0, u8 *, 0x221) | 8);
            return;
        }
        return;
    case 8:
        M2C_FIELD(arg0, s8 *, 0x4D) = 0x10;
        func_00A70990(temp_a1);
        break;
    case 6:
    case 5:
    case 40:
    case 38:
    case 37:
    case 36:
        func_00A7BF90(temp_a1);
        break;
    }
}
