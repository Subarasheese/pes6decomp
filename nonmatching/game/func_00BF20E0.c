/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005922AC[];
extern char D_00CBBE33[];

void func_00BF20E0(void *arg0) {
    s32 temp_a0;
    u16 var_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xB0);
    if (temp_a0 & 0x1000) {
        (*(s8 *)D_00CBBE33) = 1;
        var_a0 = (((*(u16 *)D_005922AC) * 0x69) / 100) + ((u32) ((*(u16 *)D_005922AC) * 0x69) >> 0x1F);
        goto block_5;
    }
    if (temp_a0 & 0x4000) {
        var_a0 = (((*(u16 *)D_005922AC) * 0x64) / 105) + ((u32) ((*(u16 *)D_005922AC) * 0x64) >> 0x1F);
block_5:
        (*(u16 *)D_005922AC) = var_a0;
    }
    if ((s32) (*(u16 *)D_005922AC) >= 0x13D) {
        (*(u16 *)D_005922AC) = 0x13C;
    }
}
