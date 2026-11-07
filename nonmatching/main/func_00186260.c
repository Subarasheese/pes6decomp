/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00186550(M2C_UNK, s32, s32, M2C_UNK);  /* extern */
M2C_UNK func_001867C0(s32);                         /* extern */
s32 func_001888F0();                                /* extern */
s32 func_001889E0();                                /* extern */
s32 func_00188A30();                                /* extern */
M2C_UNK func_0018C1B0(M2C_UNK);                     /* extern */
M2C_UNK func_00194DD0(M2C_UNK);                     /* extern */
M2C_UNK func_001974E0(M2C_UNK);                     /* extern */
extern char D_0051FFD0[];
extern char D_0051FFD8[];

void func_00186260(void) {
    s32 temp_a1;
    s32 temp_a2;
    s32 var_s0;
    s32 var_s0_2;

    var_s0 = 0xD1;
    if (func_00188A30() == 1) {
        var_s0 = 0xD1 | 0x20;
    }
    if (func_001889E0() == 1) {
        var_s0 |= 0x10000;
    }
    if (func_001888F0() != 1) {
        var_s0_2 = var_s0 | 0x200;
    } else {
        var_s0_2 = var_s0 | 0x100;
    }
    func_001867C0(var_s0_2);
    temp_a2 = (*(s32 *)D_0051FFD0) | 0x10361;
    temp_a1 = (*(s32 *)D_0051FFD8);
    (*(s32 *)D_0051FFD0) = temp_a2;
    (*(s32 *)D_0051FFD8) = temp_a1 | 0x10361;
    func_00186550(0x21C0E, temp_a1, temp_a2, 0x10361);
    func_001867C0(6);
    func_001974E0(0);
    func_00194DD0(0);
    func_0018C1B0(8);
}
