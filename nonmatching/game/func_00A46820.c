/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002AE670(s32);
s32 func_009B30B0(u16, s32);                        /* extern */
s32 func_009B3480(f32, f32);                        /* extern */
s32 func_00A194A0(void *);                          /* extern */
extern void *Pes6Ball_Current;
extern char D_005926D8[];
extern char D_005926EC[];

s32 func_00A46820(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_a0;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v1;
    u8 temp_s0;

    if ((M2C_FIELD(arg0, s32 *, 0xA0) != 0x7FFF) && (arg4 != 7)) {
        if (M2C_FIELD(arg0, s32 *, 0xA8) == 0x7FFF) {
            M2C_FIELD(arg0, s32 *, 0xA8) = 0;
            goto block_40;
        }
        if (!(-M2C_FIELD(Pes6Ball_Current, f32 *, 0x1458) <= (f32) M2C_FIELD(arg0, s32 *, 0x90))) {
            return 0;
        }
        if (((u32) M2C_FIELD(arg0, u32 *, 0x114) < 0x200U) && ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x10C), func_009B3480(M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454), M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C))) & 0xFFFF) >= 0x40) && (arg3 >= 0x9001)) {
            goto block_40;
        }
        if (((func_00A194A0(arg0) != 0) || (((s32) M2C_FIELD(arg0, u8 *, 0x4E) < (s32) (*(u8 *)D_005926EC)) && ((arg1 & 0xFFFF) >= 0x61)) || (arg3 < 0x4000) || (((u32) M2C_FIELD(arg0, u32 *, 0x110) < 0x40001U) && ((arg1 & 0xFFFF) >= 0x41))) && (M2C_FIELD(arg0, s16 *, 0x1CE) == 0) && (M2C_FIELD(arg0, s16 *, 0x1D0) == 0)) {
            return 0;
        }
        if (((*(f32 *)D_005926D8) < (f32) func_002AE670(0x30)) && ((arg1 & 0xFFFF) >= 0x60)) {
            temp_a0 = M2C_FIELD(arg0, s32 *, 0x90);
            var_v1 = temp_a0 + M2C_FIELD(Pes6Ball_Current, s32 *, 0x7C);
            if (var_v1 <= 0) {
                var_v1 = -var_v1;
            }
            var_v0 = temp_a0 - M2C_FIELD(arg0, s32 *, 0xA0);
            if (var_v0 <= 0) {
                var_v0 = -var_v0;
            }
            if (var_v1 >= var_v0) {
                return 0;
            }
            goto block_29;
        }
block_29:
        if (!((*(f32 *)D_005926D8) < (f32) func_002AE670(0x30))) {
            temp_v1 = arg2 & 0xFFFF;
            if ((temp_v1 >= 0x20) && (temp_v1 < 0x61) && ((arg3 < 0x10000) || ((temp_v1 >= 0x40) && (temp_s0 = M2C_FIELD(arg0, u8 *, 0x4E), ((func_002AE670(0x28) < (s32) temp_s0) == 0)) && (M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) >= 0x1801))) && ((s32) M2C_FIELD(Pes6Ball_Current, u8 *, 0x68) < (s32) M2C_FIELD(arg0, u8 *, 0x4E))) {
                return 0;
            }
        }
        goto block_40;
    }
block_40:
    return 1;
}
