/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00227DA0(void);
extern char D_00591C09[];

void func_008BFC00(void *arg0) {
    if (((*(u8 *)D_00591C09) != 0xE) && ((*(u8 *)D_00591C09) != 4) && ((*(u8 *)D_00591C09) != 2) && ((*(u8 *)D_00591C09) != 1)) {
        M2C_FIELD(arg0, u8 *, 0x73B) = 0U;
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x73B) = func_00227DA0();
}
