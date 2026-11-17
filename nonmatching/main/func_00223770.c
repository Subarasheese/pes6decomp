/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_00223770__r(u16);
extern char D_003A8898[];
extern char D_003A889C[];

s32 func_00223770(u16 arg0) {
    s32 temp_v1;
    u16 temp_a0;
    void *var_v0;

    temp_v1 = arg0 & 0xFFFF;
    if (temp_v1 >= 0) {
        if (temp_v1 < 0x39) {
            return 0;
        }
    }
    if ((temp_v1 >= 0xCC) && (temp_v1 < 0xDD)) {
        return 0;
    }
    if ((temp_v1 >= 0x39) && (temp_v1 < 0x40)) {
        return 2;
    }
    if (temp_v1 >= 0x40) {
        if (temp_v1 < 0xCC) {
            return 3;
        }
    }
    if (((temp_v1 < 0xB8) || (temp_v1 >= 0xCC)) && ((temp_v1 < 0xDD) || (temp_v1 >= 0xFE)) && ((temp_v1 < 0xFE) || (temp_v1 >= 0x10E)) && ((temp_v1 < 0x10E) || (temp_v1 >= 0x110)) && ((temp_v1 < 0x110) || (temp_v1 >= 0x112)) && (temp_v1 != 0xDD) && (temp_v1 != 0x122) && (temp_v1 != 0x112) && (temp_v1 != 0x113) && (temp_v1 != 0x114) && (temp_v1 != 0x115) && (temp_v1 != 0x116) && (temp_v1 != 0x117) && (temp_v1 != 0x118)) {
        if ((u32) (temp_v1 - 0x11E) >= 8U) {
            if ((u32) (temp_v1 - 0x126) >= 2U) {
                return 0;
            }
            if (temp_v1 == 0x126) {
                var_v0 = *(void **)D_003A8898;
            } else if (temp_v1 == 0x127) {
                var_v0 = *(void **)D_003A889C;
            } else {
                var_v0 = NULL;
            }
            if (var_v0 != NULL) {
                temp_a0 = M2C_FIELD(var_v0, u16 *, 0x170);
                if ((u32) (temp_a0 - 0x126) < 2U) {
                    return 3;
                }
                return func_00223770__r(temp_a0);
            }
            return 3;
        }
    }
    return 3;
}
