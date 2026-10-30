/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00288670(u32, u32);
s32 func_00BBB8C0(s32);                             /* extern */
extern void *Pes6Ball_Current;
extern char Pes6MatchSquads[];

void func_00AD1360(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a0_2;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_v1;
    s32 var_v1_2;
    u16 temp_a0;

    if (arg1 >= 0x7000) {
        if ((M2C_FIELD(arg0, u8 *, 0x16) != 4) && (M2C_FIELD(arg0, s32 *, 0x90) == 2) && (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) == M2C_FIELD(Pes6Ball_Current, u8 *, 0x6C))) {
            var_s0 = arg1 - 0x8000;
            if (var_s0 > 0) {

            } else {
                var_s0 = -var_s0;
            }
        } else {
            var_s0 = arg1 - 0x6800;
            if (var_s0 > 0) {

            } else {
                var_s0 = -var_s0;
            }
        }
        if (var_s0 >= 0x801) {
            var_s0_2 = var_s0 - 0x800;
        } else {
            var_s0_2 = 0;
        }
        temp_v0 = func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x7B) & 0x7F, 0x32U);
        var_a0 = temp_v0 >> 2;
        if (temp_v0 < 0) {
            var_a0 = (s32) (temp_v0 + 3) >> 2;
        }
        temp_v1 = 0x64 - func_00BBB8C0(var_a0);
        temp_v1_2 = ((var_s0_2 * temp_v1) / 100) + ((u32) (var_s0_2 * temp_v1) >> 0x1F) + 0x2A00;
        temp_a0 = M2C_FIELD(Pes6Ball_Current, u16 *, 0x6A);
        var_v1 = arg2 - 0x34;
        M2C_FIELD(Pes6Ball_Current, u16 *, 0x6A) = (u16) (((temp_a0 * temp_v1_2) / 10752) + ((u32) (temp_a0 * temp_v1_2) >> 0x1F));
        if (var_v1 > 0) {

        } else {
            var_v1 = -var_v1;
        }
        temp_a0_2 = M2C_FIELD(Pes6Ball_Current, u16 *, 0x6A) * (var_v1 + 0x40);
        var_v1_2 = temp_a0_2 >> 6;
        if (temp_a0_2 < 0) {
            var_v1_2 = (s32) (temp_a0_2 + 0x3F) >> 6;
        }
        M2C_FIELD(Pes6Ball_Current, u16 *, 0x6A) = (u16) var_v1_2;
    }
}
