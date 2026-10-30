/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00278280(s32);                         /* extern */
M2C_UNK func_0099C5D0();                            /* extern */
M2C_UNK func_0099C680();                            /* extern */
extern char D_00591DCC[];
extern char D_00592800[];

void func_0099B4F0(void) {
    M2C_UNK *var_s0;
    s32 var_s1;
    u8 temp_v1;

    var_s1 = 0;
    var_s0 = ((void *)D_00592800);
    do {
        temp_v1 = M2C_FIELD(var_s0, u8 *, 0);
        switch (temp_v1) {                          /* irregular */
        case 0xFF:
            M2C_FIELD(var_s0, s8 *, 0x10) = 0xFF;
            M2C_FIELD(var_s0, u8 *, 1) = 0xFFU;
            M2C_FIELD(var_s0, s8 *, 2) = 0xFF;
            M2C_FIELD(var_s0, s8 *, 0xE) = 0;
            M2C_FIELD(var_s0, s8 *, 0xC) = 0xFF;
            M2C_FIELD(var_s0, s8 *, 0xF) = 0;
            break;
        default:
block_5:
            if (M2C_FIELD(var_s0, u8 *, 1) == 0) {
                M2C_FIELD(var_s0, s8 *, 0xC) = (s8) (((*(u8 *)D_00591DCC) * 0xB) + 1);
            } else {
                M2C_FIELD(var_s0, s8 *, 0xC) = (s8) (0xC - ((*(u8 *)D_00591DCC) * 0xB));
            }
            if (M2C_FIELD(var_s0, u8 *, 3) == 0) {
                func_00278280(var_s1 & 0xFF);
            }
            break;
        case 0x8:
            M2C_FIELD(var_s0, u8 *, 3) = 0xAU;
            goto block_5;
        }
        var_s1 += 1;
        var_s0 += 0x28;
    } while (var_s1 < 8);
    func_0099C680();
    func_0099C5D0();
}
