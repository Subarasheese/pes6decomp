/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0027D0B0(M2C_UNK);                     /* extern */
s32 func_009B32D0(s32, s32, M2C_UNK);               /* extern */
s32 func_009B34C0(f32, f32, f32, f32);              /* extern */
extern void *Pes6Ball_Current;
extern char D_00591E6C[];
extern char D_00591E74[];

s32 func_00A5ECE0(M2C_UNK arg0, s32 arg1) {
    s32 temp_f0;
    s32 temp_f1;
    s32 var_s0;

    var_s0 = arg1;
    temp_f1 = (s32) ((*(f32 *)D_00591E6C) - M2C_FIELD(Pes6Ball_Current, f32 *, 0x10));
    temp_f0 = (s32) ((*(f32 *)D_00591E74) - M2C_FIELD(Pes6Ball_Current, f32 *, 0x18));
    if (((temp_f1 * temp_f1) + (temp_f0 * temp_f0)) >= 0x401) {
        func_0027D0B0(0x10);
        var_s0 = func_009B32D0(var_s0, func_009B34C0((*(f32 *)D_00591E6C), (*(f32 *)D_00591E74), M2C_FIELD(Pes6Ball_Current, f32 *, 0x10), M2C_FIELD(Pes6Ball_Current, f32 *, 0x18)), 0x2000) & 0xFFFF;
    }
    return var_s0;
}
