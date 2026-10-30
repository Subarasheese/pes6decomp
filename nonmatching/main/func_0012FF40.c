/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern float func_0012FEB0(void *);
extern int func_0012FEA0(int);
extern s32 func_0012FEC0(void *);
extern void func_0012F8F0(void *);
M2C_UNK func_0012F800(void *, void *);              /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34], gap at: 0x8. */
s32 func_0012FF40(void *arg0, void *arg1, f32 fparg0) {
    if (func_0012FEC0(arg1) == 0) {
        M2C_FIELD(arg0, void **, 0) = NULL;
        return 0;
    }
    if (M2C_FIELD(arg0, void **, 0) == arg1) {
        func_0012F8F0(arg0);
        return func_0012FEA0((s32) arg1);
    }
    M2C_FIELD(arg0, void **, 0) = arg1;
    M2C_FIELD(arg0, f32 *, 4) = fparg0;
    M2C_FIELD(arg0, s8 *, 0x12C) = 0;
    M2C_FIELD(arg0, f32 *, 0xC) = func_0012FEB0(arg1);
    func_0012F8F0(arg0);
    func_0012F800(arg0, arg1);
    return func_0012FEA0((s32) arg1);
}
