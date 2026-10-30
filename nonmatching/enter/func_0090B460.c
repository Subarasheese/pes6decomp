/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0092F0D0[];
extern char D_0092F0DC[];

void func_0090B460(void) {
    u64 var_a0;

    if ((*(s32 *)D_0092F0D0) & 0x1000) {
        var_a0 = (*(s32 *)D_0092F0DC) | 0x40000000 | 0x80000000;
    } else {
        var_a0 = (u64) (((*(s32 *)D_0092F0DC) & 0xBFFFFFFF) << 0x21) >> 0x21;
    }
    (*(s32 *)D_0092F0DC) = (s32) var_a0;
}
