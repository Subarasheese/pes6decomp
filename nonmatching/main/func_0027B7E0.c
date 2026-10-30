/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001314D0(void);
extern void func_0017C7F0(void *, s32);
extern f32 *D_003E74CC;
extern char D_005A0060[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34], gap at: 0x8. */
void func_0027B7E0(void *arg0, s32 arg1, f32 fparg0) {
    void *temp_v1;

    if (arg1 < 0x3D) {
        temp_v1 = (arg1 * 4) + ((void *)D_005A0060);
        if (M2C_FIELD(temp_v1, s32 *, 8) != 0) {
            func_001314D0();
            func_0017C7F0(arg0, M2C_FIELD(temp_v1, s32 *, 8));
            M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), void **, 4), f32 *, 0xC) = (f32) *D_003E74CC;
        }
    }
}
