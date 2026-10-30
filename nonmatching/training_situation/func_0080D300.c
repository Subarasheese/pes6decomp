/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *Pes6Ball_Current;
extern char D_00591E19[];

void func_0080D300(void *arg0) {
    if (((*(u8 *)D_00591E19) == M2C_FIELD(arg0, s32 *, 8)) && (M2C_FIELD(Pes6Ball_Current, u16 *, 0x84) == 4)) {
        M2C_FIELD(arg0, s32 *, 0x48) = 0x3F800000;
    }
}
