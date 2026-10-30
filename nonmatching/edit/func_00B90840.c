/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0021FE80(s32, s32);
M2C_UNK func_0021FEB0(M2C_UNK);                     /* extern */
M2C_UNK func_00220240(M2C_UNK *, M2C_UNK);          /* extern */
extern char D_00CCCC30[];

void func_00B90840(void) {
    func_0021FE80((s32) ((void *)D_00CCCC30), 0x14);
    func_0021FEB0(3);
    func_00220240(((void *)D_00CCCC30), 0xC);
}
