/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00140450(void);
extern int func_00140420(void);
extern int func_00140440(void);
extern int func_00140430(void);
M2C_UNK func_001CEDC0(s32 *, s32 *, s32, f32);      /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34], gap at: 0x8. */
void func_001CED30(s32 arg0, f32 fparg0) {
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    s32 sp50;
    s32 sp54;
    s32 sp58;
    s32 sp5C;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;

    temp_v0 = func_00140450();
    sp50 = temp_v0;
    sp54 = temp_v0;
    temp_v0_2 = func_00140430();
    sp58 = temp_v0_2;
    sp5C = temp_v0_2;
    temp_v0_3 = func_00140440();
    sp40 = temp_v0_3;
    temp_v0_4 = func_00140420();
    sp44 = temp_v0_4;
    sp4C = temp_v0_4;
    sp48 = temp_v0_3;
    func_001CEDC0(&sp50, &sp40, arg0, fparg0);
}
