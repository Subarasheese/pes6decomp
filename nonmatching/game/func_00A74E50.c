/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00285080(s32);
s32 func_00A72D50(s32, s32, M2C_UNK);               /* extern */
extern void *Pes6Ball_Current;
extern char D_005926E0[];

s32 func_00A74E50(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 temp_f1;
    s32 temp_v0;
    s32 var_s0;
    s32 var_v0;

    var_s0 = arg2 + 0x100;
    if (var_s0 >= 0xFF00) {
        goto block_1;
    }
loop_2:
    M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454) = 0.0f;
    M2C_FIELD(Pes6Ball_Current, s32 *, 0x1458) = 0xC1E00000;
    M2C_FIELD(Pes6Ball_Current, s32 *, 0x145C) = 0;
    M2C_FIELD(Pes6Ball_Current, s16 *, 0x1450) = 0;
    M2C_FIELD(Pes6Ball_Current, s16 *, 0x144C) = 0;
    M2C_FIELD(Pes6Ball_Current, s32 *, 0x1444) = var_s0;
    M2C_FIELD(Pes6Ball_Current, f32 *, 0x1448) = (f32) func_00A72D50(arg0, arg1, 0x180);
    M2C_FIELD(Pes6Ball_Current, f32 *, 0x1448) = (f32) (M2C_FIELD(Pes6Ball_Current, f32 *, 0x1448) * -188.0f);
    M2C_FIELD(Pes6Ball_Current, s8 *, 0x144F) = 1;
    M2C_FIELD(Pes6Ball_Current, s32 *, 0x1440) = arg3;
    M2C_FIELD(Pes6Ball_Current, u16 *, 0x6E) = 1U;
loop_3:
    temp_f1 = M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454);
    var_v0 = 1;
    if (!(temp_f1 < (f32) arg1)) {
        var_v0 = 0;
    }
    if ((var_v0 ^ 1) == 0) {
        temp_v0 = M2C_FIELD(Pes6Ball_Current, s32 *, 0x1444);
        if ((arg2 < temp_v0) && (temp_v0 >= 0x81)) {
            func_00285080((s32) (*(u8 *)D_005926E0));
            M2C_FIELD(Pes6Ball_Current, u16 *, 0x6E) = (u16) (M2C_FIELD(Pes6Ball_Current, u16 *, 0x6E) + (*(u8 *)D_005926E0));
            goto loop_3;
        }
    }
    if ((f32) arg1 <= temp_f1) {
        if (M2C_FIELD(Pes6Ball_Current, s32 *, 0x1444) >= arg2) {
            return var_s0;
        }
        goto block_12;
    }
block_12:
    var_s0 += 0x800;
    if (var_s0 >= 0xFF00) {
block_1:
        return 0xFF00;
    }
    goto loop_2;
}
