/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_002CA1C0[];

void func_00109C80(s32 *arg0, s32 *arg1, s32 *arg2) {
    *arg0 = (s32) M2C_FIELD(((void *)D_002CA1C0), u16 *, 0xC2);
    *arg1 = (s32) M2C_FIELD(((void *)D_002CA1C0), u16 *, 0xC4);
    *arg2 = (s32) M2C_FIELD(((void *)D_002CA1C0), u16 *, 0xC6);
}
