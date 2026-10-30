/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern f32 func_001D79A0(void *, u16);
s32 func_008B9B70(s32, s32 *, M2C_UNK);             /* extern */
s32 func_008B9F90(s32, s32 *, f32);                 /* extern */
s32 func_008BA000(s32 *, f32);                      /* extern */
M2C_UNK func_008C1360(void *, s32, s32 *);          /* extern */
extern char D_008EC670[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34], gap at: 0x8. */
void func_008E9080(void *arg0) {
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    f32 temp_f12;
    f32 temp_f20;
    s32 temp_s0;
    s32 temp_v0;
    void *temp_a0;

    temp_a0 = M2C_FIELD(arg0, void **, 0x38);
    if ((temp_a0 != NULL) && (M2C_FIELD(arg0, s32 *, 0x30) == 0)) {
        if (M2C_FIELD(arg0, s32 *, 0x34) != 0) {
            return;
        }
        temp_f20 = func_001D79A0(temp_a0, 0xA3U);
        temp_f12 = temp_f20;
        sp40 = 0;
        sp44 = 0;
        sp48 = 0;
        sp4C = 0;
        temp_v0 = func_008BA000(&sp40, temp_f12);
        M2C_FIELD(arg0, s32 *, 0x30) = temp_v0;
        temp_s0 = func_008B9F90(temp_v0, &sp40, temp_f20);
        func_008C1360(M2C_FIELD(arg0, void **, 0x38), (*(s32 *)D_008EC670), &sp40);
        M2C_FIELD(arg0, s32 *, 0x34) = func_008B9B70(temp_s0, &sp40, 0);
    }
}
