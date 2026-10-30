/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B30B0(u16, u16);                        /* extern */
extern void *Pes6Ball_Current;
extern char D_00591E4C[];
extern char D_005926D8[];
extern char D_005926FC[];

s32 func_00A250A0(void *arg0) {
    f32 var_f0;
    u16 temp_s0;

    if ((*(u8 *)D_00591E4C) == 0) {
        temp_s0 = M2C_FIELD(arg0, u16 *, 0x10C);
        if ((s32) (*(u8 *)D_005926FC) >= 0) {
            var_f0 = (f32) (*(u8 *)D_005926FC);
        } else {
            var_f0 = 2.0f * (f32) (((u8) (*(u8 *)D_005926FC) >> 1) | ((*(u8 *)D_005926FC) & 1));
        }
        if ((*(f32 *)D_005926D8) <= var_f0) {
            if (((func_009B30B0(M2C_FIELD(Pes6Ball_Current, u16 *, 0x58), M2C_FIELD(arg0, u16 *, 0x28)) & 0xFFFF) < 0x21) && (M2C_FIELD(arg0, s32 *, 0x1C) >= 0x1101) && ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x28), temp_s0) & 0xFFFF) >= 0x60) && (M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) >= 0x2001)) {
                return 1;
            }
            goto block_7;
        }
block_7:
        return 0;
    }
    return 0;
}
