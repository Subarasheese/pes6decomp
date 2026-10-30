/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0021E000(u32);
extern s32 func_0022FCC0(u8);
M2C_UNK func_001E7140(s32);                         /* extern */
M2C_UNK func_0093D2D0();                            /* extern */
extern char D_00591C09[];

void func_0093D430(void) {
    func_001E7140(func_0021E000(func_0022FCC0((*(u8 *)D_00591C09))));
    func_0093D2D0();
}
