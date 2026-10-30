/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001ED840(void *, s8);
extern void func_001ED880(void *, f32);
extern void *D_0058D360;
extern char D_0058D368[];
extern char D_0058D36C[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14], gap at: 0x8. */
void func_00260F00(s32 arg0, f32 fparg0) {
    (*(s32 *)D_0058D368) = arg0;
    (*(f32 *)D_0058D36C) = fparg0;
    func_001ED840(D_0058D360, arg0 & 0xFF);
    func_001ED880(D_0058D360, fparg0);
}
