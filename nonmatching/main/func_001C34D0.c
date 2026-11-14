/* compiler: mwcc-3.0.1b210-O2 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001C34F8(s32, s32, void *);            /* extern */
extern char D_00398A18[];

void func_001C34D0(s32 arg0) {
    u8 *sp = (u8 *)0x003FF000;
    func_001C34F8((*(s32 *)D_00398A18), arg0, sp);
}
