/* compiler: ee-gcc-2.9-G0 */
/* Repaired: the original compares the whole 32-bit argument; only the stored copy is a byte. */
#include "pes6/m2c.h"

extern char D_005E5E20[];

void func_002D6FA0(s32 arg0, s32 arg1) {
    u8 temp_a2;
    void *temp_a3;

    temp_a3 = ((void *)D_005E5E20) + (arg0 * 0xC);
    temp_a2 = M2C_FIELD(temp_a3, u8 *, 6);
    if (temp_a2 == 2) {
        if ((arg1 != 0xD) && (arg1 != 0xB)) {
            if ((arg1 != 5) && (arg1 != 8)) {
                if (arg1 != 2) {
                    if (arg1 != 0) {
                        return;
                    }
                    M2C_FIELD(temp_a3, s8 *, 1) = arg1;
                    return;
                }
                goto block_29;
            }
            if (!(M2C_FIELD(temp_a3, u8 *, 7) & 0x30)) {
                goto block_29;
            }
        } else if (M2C_FIELD(temp_a3, u8 *, 7) & 1) {
            goto block_29;
        }
    } else if (temp_a2 == 1) {
        if ((arg1 != 0xD) && (arg1 != 0xB) && (arg1 != 5)) {
            if (arg1 != 8) {
                if ((arg1 != 2) && (arg1 != 0)) {
                    return;
                }
                M2C_FIELD(temp_a3, s8 *, 1) = arg1;
                return;
            }
            goto block_29;
        }
        if (M2C_FIELD(temp_a3, u8 *, 7) & 0x10) {
            goto block_29;
        }
    } else {
        if (temp_a2 != 0) {
            return;
        }
block_29:
        M2C_FIELD(temp_a3, s8 *, 1) = arg1;
    }
}
