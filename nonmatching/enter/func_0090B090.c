/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001864B0(s32);
extern char D_0092F0E8[];

void func_0090B090(s32 arg0) {
    s32 temp_s0;

    temp_s0 = arg0 & 0x21C9E;
    if (temp_s0 != 0) {
        func_001864B0(temp_s0);
        (*(s32 *)D_0092F0E8) |= temp_s0;
    }
}
