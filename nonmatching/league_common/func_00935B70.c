/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00226710(void);
extern char D_00591BB4[];

void func_00935B70(void) {
    s32 var_s0;

    var_s0 = 0;
    if (((func_00226710() & 0xFF) == 0x1A) || ((func_00226710() & 0xFF) == 0x1B)) {
        var_s0 = 1;
    }
    if ((func_00226710() & 0xFF) == 0x3A) {
        var_s0 = 1;
    }
    if ((var_s0 != 0) && (((*(u8 *)D_00591BB4) == 1) || ((*(u8 *)D_00591BB4) == 0xB) || ((*(u8 *)D_00591BB4) == 0xC) || ((*(u8 *)D_00591BB4) == 0xD) || ((*(u8 *)D_00591BB4) == 6) || ((*(u8 *)D_00591BB4) == 0x11))) {
        (*(u8 *)D_00591BB4) = 0x1E;
    }
}
