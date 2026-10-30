/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00624500(s32);                         /* extern */
extern char D_00530C78[];

void func_00624650(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 var_a2;
    s32 var_s2;

    var_a2 = 1;
    if (arg1 != 1) {
        var_a2 = 0;
    }
    temp_a0 = arg0 & 0xFFFF;
    var_s2 = 0;
    if ((temp_a0 >= 0x40) && (temp_a0 < 0xCC)) {
        var_s2 = (*(s32 *)D_00530C78) + ((temp_a0 - 0x40) * 0x58);
    }
    if (var_s2 != 0) {
        switch (var_a2) {                           /* irregular */
        case 1:
            func_001C48E8(var_s2 + 0x31, 0, 4);
            func_001C4730(var_s2 + 0x31, arg2, 4);
            break;
        case 0:
            func_001C48E8(var_s2, 0, 0x31);
            func_001C4730(var_s2, arg2, 0x31);
            break;
        }
        func_00624500(arg0);
    }
}
