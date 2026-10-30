/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00285080(s32);
u32 func_009B3350(void *, s32, s32);                /* extern */
s32 func_009B34C0(f32, f32, f32, f32);              /* extern */
extern void *Pes6Ball_Current;

s16 func_00AD25A0(M2C_UNK arg0, s16 arg1, s32 arg2, s32 arg3, u32 arg4) {
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;

    if (M2C_FIELD(Pes6Ball_Current, u16 *, 0x6A) != 0) {
        M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454) = (f32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x10);
        M2C_FIELD(Pes6Ball_Current, f32 *, 0x1458) = (f32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x14);
        M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C) = (f32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x18);
        var_v0 = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454);
        if (var_v0 <= 0) {
            var_v0 = -var_v0;
        }
        if ((f32) var_v0 <= 13529.0f) {
            var_v0_2 = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C);
            if (var_v0_2 <= 0) {
                var_v0_2 = -var_v0_2;
            }
            if ((f32) var_v0_2 <= 8793.0f) {
                M2C_FIELD(Pes6Ball_Current, s16 *, 0x1450) = arg1;
                var_s0 = 0;
                M2C_FIELD(Pes6Ball_Current, u16 *, 0x144C) = (u16) M2C_FIELD(Pes6Ball_Current, u16 *, 0x6A);
                M2C_FIELD(Pes6Ball_Current, u8 *, 0x144E) = (u8) M2C_FIELD(Pes6Ball_Current, u8 *, 0x6C);
                M2C_FIELD(Pes6Ball_Current, s32 *, 0x1444) = arg2;
                M2C_FIELD(Pes6Ball_Current, s32 *, 0x1440) = (s32) M2C_FIELD(Pes6Ball_Current, s32 *, 0x74);
                M2C_FIELD(Pes6Ball_Current, f32 *, 0x1448) = (f32) (arg3 * -0xBC);
                M2C_FIELD(Pes6Ball_Current, s8 *, 0x144F) = 4;
loop_9:
                func_00285080(1);
                if (var_s0 >= 0x1C) {
                    var_v0_3 = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454);
                    if (var_v0_3 <= 0) {
                        var_v0_3 = -var_v0_3;
                    }
                    if ((f32) var_v0_3 <= 13529.0f) {
                        var_v0_4 = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C);
                        if (var_v0_4 <= 0) {
                            var_v0_4 = -var_v0_4;
                        }
                        if ((f32) var_v0_4 <= 8793.0f) {
                            goto block_16;
                        }
                    }
                } else {
block_16:
                    if (arg4 >= func_009B3350(Pes6Ball_Current, (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454), (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C))) {
                        var_s0 += 1;
                        if (var_s0 < 0xFF) {
                            goto loop_9;
                        }
                    }
                }
                return ((((arg1 & 0xFFFF) * 2) - (func_009B34C0(M2C_FIELD(Pes6Ball_Current, f32 *, 0x10), M2C_FIELD(Pes6Ball_Current, f32 *, 0x18), M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454), M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C)) & 0xFFFF)) + 0x10000) & 0xFFFF;
            }
            goto block_8;
        }
block_8:
        goto block_19;
    }
block_19:
    return arg1;
}
