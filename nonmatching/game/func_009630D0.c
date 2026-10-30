/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B3070(u16, s32);                        /* extern */
s32 func_009B34C0(M2C_UNK, M2C_UNK, f32, f32);      /* extern */
s32 func_00BBB990(u16, s32);                        /* extern */
s32 func_00BBB9C0(u16, s32);                        /* extern */
extern void *Pes6Ball_Current;
extern char D_00591BEC[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34], gap at: 0x8. */
s32 func_009630D0(void *arg0) {
    f32 temp_f20;
    s32 temp_v0;
    u16 temp_s0;

    temp_s0 = M2C_FIELD(arg0, u16 *, 0x10C);
    temp_f20 = (f32) func_00BBB9C0((u16) M2C_FIELD(Pes6Ball_Current, s32 *, 0), (s32) ((f32) M2C_FIELD(Pes6Ball_Current, s32 *, 0) / (*(f32 *)D_00591BEC)));
    temp_v0 = func_009B3070(temp_s0, func_009B34C0(0, 0, (f32) func_00BBB990(M2C_FIELD(Pes6Ball_Current, u16 *, 0x58), (s32) ((f32) M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) / (*(f32 *)D_00591BEC))) - M2C_FIELD(arg0, f32 *, 0xF0), temp_f20 - M2C_FIELD(arg0, f32 *, 0xF8))) & 0xFFFF;
    if (temp_v0 >= 0x4000) {
        return -(temp_v0 != 0x4000);
    }
    return 1;
}
