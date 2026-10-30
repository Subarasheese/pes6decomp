/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B33A0(void *, s32, s32);                /* extern */
extern void *Pes6Ball_Current;
extern char D_00591DC4[];
extern char D_00591E4C[];
extern char D_00591F24[];
extern char D_005926D8[];
extern char D_005926F4[];

s32 func_009D8C10(void *arg0) {
    f32 var_f0;
    s32 var_a0;
    u16 temp_v1;

    temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
    if ((temp_v1 != 0x1A3) && (temp_v1 != 0x3E8)) {
        var_a0 = 0;
        if (((*(u8 *)D_00591F24) != 0) && ((*(u8 *)D_00591F24) != 5)) {
            goto block_6;
        }
        if (!(M2C_FIELD(arg0, s32 *, 0xB0) & 0x10000)) {
block_6:
            var_a0 = 1;
        }
        if (var_a0 != 0) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x114) < 0xC01U) {
                if (M2C_FIELD(arg0, u8 *, 0x4E) == 0) {
                    if (func_009B33A0(arg0, (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454), (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C)) >= 0x9000) {
                        if ((*(u8 *)D_00591E4C) == 0) {
                            if ((s32) (*(u8 *)D_005926F4) >= 0) {
                                var_f0 = (f32) (*(u8 *)D_005926F4);
                            } else {
                                var_f0 = 2.0f * (f32) (((u8) (*(u8 *)D_005926F4) >> 1) | ((*(u8 *)D_005926F4) & 1));
                            }
                            if (!((*(f32 *)D_005926D8) <= var_f0)) {
                                goto block_20;
                            }
                            goto block_21;
                        }
block_20:
                        if (!((*(s32 *)D_00591DC4) & 7)) {
                            goto block_21;
                        }
                        goto block_12;
                    }
                    goto block_21;
                }
block_12:
                M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454) = (f32) M2C_FIELD(arg0, s16 *, 0x1CE);
                M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C) = (f32) M2C_FIELD(arg0, s16 *, 0x1D0);
                goto block_13;
            }
block_21:
            return 1;
        }
        goto block_13;
    }
block_13:
    return 0;
}
