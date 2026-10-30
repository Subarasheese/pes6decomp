/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B29B50();                                /* extern */
extern void *Pes6Ball_Current;
extern char D_00591C09[];
extern char D_00CBBE38[];

s32 func_00BF3EA0(void *arg0) {
    s32 temp_a0;
    s32 var_v0;

    if (M2C_FIELD(arg0, s32 *, 0xB4) & 0x4000) {
        if (M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) == 0) {
            if (((*(u8 *)D_00CBBE38) != 2) && ((*(u8 *)D_00CBBE38) != 1)) {
                var_v0 = 0;
            } else {
                var_v0 = 1;
            }
            if ((var_v0 != 0) && (M2C_FIELD(arg0, s32 *, 0xB0) & 0x400)) {
                return 5;
            }
            goto block_20;
        }
block_20:
        return 0;
    }
    if ((*(u8 *)D_00591C09) != 5) {
        goto block_10;
    }
    if (func_00B29B50() != 0) {
        return 0xFF;
    }
block_10:
    temp_a0 = M2C_FIELD(arg0, s32 *, 0xB4);
    if (temp_a0 & 0x1000) {
        return 1;
    }
    if (temp_a0 & 0x8000) {
        if (!(((f32) M2C_FIELD(arg0, s16 *, 0x14) * M2C_FIELD(Pes6Ball_Current, f32 *, 0x10)) <= 0.0f)) {
            return 2;
        }
        goto block_16;
    }
block_16:
    if (!(temp_a0 & 0x2000)) {
        return 0xFF;
    }
    return 3;
}
