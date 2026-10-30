/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *Pes6Ball_Current;
extern char D_00591E19[];
extern char D_00591E4C[];

s32 func_00A0B0C0(void *arg0) {
    u16 temp_v1_2;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0);
    if (temp_v1 == (*(u8 *)D_00591E4C)) {
        return 1;
    }
    if (temp_v1 == (*(u8 *)D_00591E19)) {
        temp_v1_2 = M2C_FIELD(Pes6Ball_Current, u16 *, 0x84);
        if ((temp_v1_2 != 0) && (temp_v1_2 != 5)) {
            goto block_9;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x110) < 0x100000U) {
            return 1;
        }
        goto block_9;
    }
block_9:
    if ((M2C_FIELD(arg0, u8 *, 0x16) == 1) && ((u32) M2C_FIELD(arg0, u32 *, 0x110) < 0x100000U)) {
        return 1;
    }
    return 0;
}
