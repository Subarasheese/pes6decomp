/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u16 func_00A9C660(void *);
s32 func_009B30B0(u16, u16);                        /* extern */
u32 func_009B33A0(void *, s32, s32);                /* extern */
s32 func_00AA3540(void *);                          /* extern */
extern void *Pes6Ball_Current;
extern char D_005926DE[];
extern char D_005926E8[];

s32 func_00A5AFB0(void *arg0, s32 arg1) {
    s32 var_s0;
    void *temp_v0;

    if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x10C), M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) < 0x20) {
        if (arg1 >= 0x900000) {
            if (func_00AA3540(arg0) >= 0x40001) {
                if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x10C), M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) >= 0x21) {
                    if (arg1 < 0x01440000) {
                        if (((func_009B30B0(func_00A9C660(arg0), M2C_FIELD(arg0, u16 *, 0x28)) & 0xFFFF) < 0x21) && ((0x1100 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC)) < M2C_FIELD(arg0, s32 *, 0x1C))) {
                            goto block_24;
                        }
                        goto block_13;
                    }
block_13:
                    if (arg1 < 0xC40000) {
                        var_s0 = 0;
                        if ((s32) (*(u8 *)D_005926E8) > 0) {
loop_15:
                            temp_v0 = Pes6Ball_Current + (var_s0 * 4);
                            if (M2C_FIELD(temp_v0, f32 *, 0x7FC) < -336.0f) {
                                if (func_009B33A0(arg0, (s32) M2C_FIELD(temp_v0, f32 *, 0x47C), (s32) M2C_FIELD(temp_v0, f32 *, 0xB7C)) < 0x2401U) {
                                    goto block_24;
                                }
                                goto block_18;
                            }
block_18:
                            var_s0 += (*(u8 *)D_005926DE);
                            if (var_s0 >= (s32) (*(u8 *)D_005926E8)) {
                                goto block_19;
                            }
                            goto loop_15;
                        }
                    }
block_19:
                    return 0;
                }
                goto block_24;
            }
            goto block_24;
        }
        goto block_24;
    }
block_24:
    return 1;
}
