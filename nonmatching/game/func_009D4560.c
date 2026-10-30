/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009D4890(void *, s32, void *, s32);        /* extern */
s32 func_009F42B0(void *, M2C_UNK);                 /* extern */
s32 func_00BBB780(s64);                             /* extern */
s32 func_00BBB8C0(M2C_UNK);                         /* extern */
extern void *Pes6Ball_Current;
extern char D_00591E19[];
extern char D_005926DC[];
extern char Pes6MatchSquads[];

s32 func_009D4560(void *arg0) {
    s32 temp_a0;
    s32 temp_a3;
    s32 temp_s0;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v0_2;
    s64 var_a2;
    u8 temp_a1;
    void *temp_a2;

    temp_a1 = M2C_FIELD(arg0, u8 *, 0x11);
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x1C);
    temp_a3 = M2C_FIELD(arg0, u8 *, 0x12) * 0x6900;
    temp_a2 = ((void *)Pes6MatchSquads) + temp_a3;
    temp_s0 = M2C_FIELD(((temp_a1 * 0x348) + temp_a2), u8 *, 0xAF) & 0x7F;
    if ((temp_v1 + M2C_FIELD(Pes6Ball_Current, s32 *, 0x50)) >= 0x4800) {
        goto block_1;
    }
    if (temp_s0 >= 0x41) {
        return 0;
    }
block_1:
    if (temp_v1 >= 0x400) {
        if (func_009D4890(arg0, temp_a1 * 0xF, temp_a2, temp_a3) == 0) {
            if (temp_s0 < 0x41) {
                temp_a0 = M2C_FIELD(Pes6Ball_Current, s32 *, 0x50);
                if (temp_a0 >= 0x3000) {
                    if (M2C_FIELD(arg0, u8 *, 0) == (*(u8 *)D_00591E19)) {
                        if (temp_a0 < 0x4000) {
                            return 0;
                        }
                        goto block_25;
                    }
block_25:
                    if (M2C_FIELD(arg0, s32 *, 0x1C) < (0x1300 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC))) {
                        if (!(M2C_FIELD((((*(u8 *)D_005926DC) * 4) + Pes6Ball_Current), f32 *, 0x7FC) <= (f32) func_009F42B0(arg0, -0x180)) && (M2C_FIELD((((*(u8 *)D_005926DC) * 4) + Pes6Ball_Current), f32 *, 0x7FC) < (f32) func_009F42B0(arg0, -0x80))) {
                            var_v0 = temp_s0 + 0x1E;
                            goto block_30;
                        }
                        goto block_28;
                    }
block_28:
                    var_a2 = temp_s0 & 0xFFFF;
                    if (((u64) ((s64) M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x6A) << 0x38) >> 0x3F) != 0) {
                        var_v0 = var_a2 + 0xA;
block_30:
                        var_a2 = var_v0 & 0xFFFF;
                    }
                    if (!(func_00BBB780((s64) (var_a2 << 0x30) >> 0x30) & 0xFF)) {
                        return 1;
                    }
                    goto block_19;
                }
            }
            return 0;
        }
        if (M2C_FIELD(arg0, u8 *, 0) == (*(u8 *)D_00591E19)) {
            if (func_00BBB780((s64) ((temp_s0 + 0xA) << 0x30) >> 0x30) != 0) {
                return 0;
            }
            goto block_13;
        }
block_13:
        if ((M2C_FIELD(arg0, s32 *, 0x1C) < 0x1300) && !(M2C_FIELD((((*(u8 *)D_005926DC) * 4) + Pes6Ball_Current), f32 *, 0x7FC) <= (f32) func_009F42B0(arg0, -0x180)) && (M2C_FIELD((((*(u8 *)D_005926DC) * 4) + Pes6Ball_Current), f32 *, 0x7FC) < (f32) func_009F42B0(arg0, -0x80))) {
            var_v0_2 = (temp_s0 + 0x1E) - func_00BBB8C0(0x14);
        } else {
            var_v0_2 = (temp_s0 + 0xA) - func_00BBB8C0(0x14);
        }
        if (!(func_00BBB780((s64) ((var_v0_2 & 0xFFFF) << 0x30) >> 0x30) & 0xFF)) {
            return 1;
        }
block_19:
        return 0;
    }
    return 0;
}
