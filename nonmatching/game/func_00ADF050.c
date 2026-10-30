/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00288670(u32, u32);
s32 func_00BBB780(s64, s32, s64);                   /* extern */
extern void *Pes6Ball_Current;
extern char Pes6MatchSquads[];

void func_00ADF050(void *arg0) {
    s32 temp_a0;
    s32 temp_v1;
    s32 var_a2;
    s32 var_v0;
    s32 var_v0_2;
    u32 temp_s0_2;
    u8 temp_a1;
    void *temp_s0;

    temp_s0 = (M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900));
    temp_a0 = M2C_FIELD(temp_s0, u8 *, 0x68) & 1 & 1;
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) == temp_a0) {
        if (M2C_FIELD(arg0, u8 *, 0x13) == 0) {
            if (temp_a0 == 0) {
                if (M2C_FIELD(arg0, f32 *, 0xE8) < 0.0f) {
                    return;
                }
                goto block_11;
            }
            if (!(M2C_FIELD(arg0, f32 *, 0xE8) <= 0.0f)) {
                return;
            }
            goto block_11;
        }
        if (temp_a0 != 0) {
            if (M2C_FIELD(arg0, f32 *, 0xE8) < 0.0f) {
                return;
            }
            goto block_11;
        }
        if (M2C_FIELD(arg0, f32 *, 0xE8) <= 0.0f) {
block_11:
            temp_s0_2 = func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x78) & 0x7F, 0x1EU);
            temp_v1 = temp_s0_2 + func_00288670(M2C_FIELD(temp_s0, u8 *, 0x7A) & 0x7F, 0x1EU);
            var_v0 = temp_v1 >> 1;
            if (temp_v1 < 0) {
                var_v0 = (s32) (temp_v1 + 1) >> 1;
            }
            temp_a1 = M2C_FIELD(arg0, u8 *, 0x12);
            var_a2 = var_v0 - 0xA;
            if (((u64) ((s64) M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (temp_a1 * 0x6900))), u8 *, 0x7E) << 0x38) >> 0x3F) == 0) {
                var_a2 -= 0x1E;
            }
            if (M2C_FIELD(arg0, u8 *, 0x25) != 0) {
                var_v0_2 = var_a2 >> 1;
                if (var_a2 < 0) {
                    var_v0_2 = (s32) (var_a2 + 1) >> 1;
                }
                var_a2 = var_v0_2;
            }
            if (func_00BBB780((s64) ((s64) var_a2 << 0x30) >> 0x30, temp_a1 * 0x69, (s64) var_a2) & 0xFF) {
                if (!((M2C_FIELD(Pes6Ball_Current, f32 *, 0xB7C) * (f32) M2C_FIELD(arg0, s32 *, 0x94)) <= 0.0f)) {
                    return;
                }
                M2C_FIELD(arg0, u8 *, 0x221) = (u8) (M2C_FIELD(arg0, u8 *, 0x221) | 1);
            }
        }
    }
}
